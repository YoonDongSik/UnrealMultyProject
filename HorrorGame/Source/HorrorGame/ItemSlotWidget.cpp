// ItemSlotWidget.cpp
#include "ItemSlotWidget.h"
#include "Components/Image.h"
#include "Components/TextBlock.h"
#include "Blueprint/WidgetLayoutLibrary.h"
#include "Blueprint/WidgetBlueprintLibrary.h"
#include "ContextMenu.h"
#include "ItemDataAsset.h"

void UItemSlotWidget::SetItem(UItemDataAsset* InItem)
{


	ItemDataAsset = InItem;
	UpdateSlot();
	SetVisibility(ESlateVisibility::Visible);
}

void UItemSlotWidget::ClearItem()
{
	ItemDataAsset = nullptr;
	ItemIcon->SetBrushFromTexture(nullptr);
	ItemNameText->SetText(FText::GetEmpty());
	UpdateSlot();
	SetVisibility(ESlateVisibility::Visible);
}

void UItemSlotWidget::UpdateSlot()
{
	if (ItemDataAsset && ItemIcon && ItemNameText)
	{
		ItemIcon->SetBrushFromTexture(ItemDataAsset->ItemIcon);
		ItemNameText->SetText(ItemDataAsset->ItemName);
	}
	else if (ItemIcon && ItemNameText)
	{
		ItemIcon->SetBrushFromTexture(nullptr);
		ItemNameText->SetText(FText::GetEmpty());
	}
}

void UItemSlotWidget::SwapItem(UItemSlotWidget* OtherSlot)
{
	if (!OtherSlot || this == OtherSlot) return;
	UItemDataAsset* Temp = ItemDataAsset;
	SetItem(OtherSlot->ItemDataAsset);
	OtherSlot->SetItem(Temp);
	SetVisibility(ESlateVisibility::Visible);
}

FReply UItemSlotWidget::NativeOnMouseButtonDown(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent)
{
	if (InMouseEvent.GetEffectingButton() == EKeys::RightMouseButton)
	{
		// ✅ 정적 변수로 전역 메뉴 추적 + 마지막 열었던 슬롯 추적
		static UContextMenu* ActiveContextMenu = nullptr;
		static UItemSlotWidget* LastOpenedSlot = nullptr;

		// 이미 메뉴가 떠 있고, 같은 슬롯을 다시 클릭한 경우 → 메뉴 제거 (토글 기능)
		if (ActiveContextMenu && ActiveContextMenu->IsInViewport())
		{
			if (LastOpenedSlot == this)
			{
				UE_LOG(LogTemp, Warning, TEXT("🔁 같은 슬롯 우클릭 → 메뉴 닫기"));
				ActiveContextMenu->RemoveFromParent();
				ActiveContextMenu = nullptr;
				LastOpenedSlot = nullptr;
				return FReply::Handled();
			}
			else
			{
				// 다른 슬롯 눌렀을 경우 → 기존 메뉴 제거
				ActiveContextMenu->RemoveFromParent();
				ActiveContextMenu = nullptr;
				LastOpenedSlot = nullptr;
			}
		}

		// 메뉴 새로 생성
		if (ItemDataAsset && ContextMenuClass)
		{
			UContextMenu* ContextMenu = CreateWidget<UContextMenu>(GetWorld(), ContextMenuClass);
			if (ContextMenu)
			{
				ContextMenu->SetupContextMenu(this);
				ContextMenu->AddToViewport(100);

				// 위치 계산
				FVector2D SlotScreenPosition = InGeometry.LocalToAbsolute(FVector2D::ZeroVector);
				float Scale = UWidgetLayoutLibrary::GetViewportScale(this);
				SlotScreenPosition /= Scale;
				SlotScreenPosition.Y -= 200.0f;

				ContextMenu->SetPositionInViewport(SlotScreenPosition, false);

				// 현재 메뉴와 슬롯 기록
				ActiveContextMenu = ContextMenu;
				LastOpenedSlot = this;
			}
		}

		return FReply::Handled();
	}

	return Super::NativeOnMouseButtonDown(InGeometry, InMouseEvent);
}

void UItemSlotWidget::NativeOnDragDetected(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent, UDragDropOperation*& OutOperation)
{
	Super::NativeOnDragDetected(InGeometry, InMouseEvent, OutOperation);

	OutOperation = NewObject<UDragDropOperation>(this);
	OutOperation->Payload = this;

	// ✅ 아이템이 있다면 나 자신(슬롯) 따라다니게
	if (ItemDataAsset)
	{
		OutOperation->DefaultDragVisual = this;
	}
	else
	{
		// 빈 슬롯은 따라다니는 UI 없이 드래그 가능하게 (또는 빈 이미지 등 설정 가능)
		OutOperation->DefaultDragVisual = nullptr;
	}

	SetVisibility(ESlateVisibility::HitTestInvisible);

	// ✅ 입력을 UI 전용으로 전환 (카메라 이동 막기)
	if (APlayerController* PC = GetWorld()->GetFirstPlayerController())
	{
		FInputModeUIOnly InputMode;
		InputMode.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);
		InputMode.SetWidgetToFocus(this->TakeWidget());
		PC->SetInputMode(InputMode);
		PC->bShowMouseCursor = true;
	}

	
}

bool UItemSlotWidget::NativeOnDrop(const FGeometry& InGeometry, const FDragDropEvent& InDragDropEvent, UDragDropOperation* InOperation)
{
	if (UItemSlotWidget* DraggedSlot = Cast<UItemSlotWidget>(InOperation->Payload))
	{
		SwapItem(DraggedSlot);
		SetVisibility(ESlateVisibility::Visible);
		DraggedSlot->SetVisibility(ESlateVisibility::Visible);

		// ✅ 입력 복구
		if (APlayerController* PC = GetWorld()->GetFirstPlayerController())
		{
			FInputModeGameAndUI InputMode;
			InputMode.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);
			PC->SetInputMode(InputMode);
			PC->bShowMouseCursor = true;
		}

		return true;
	}
	return false;
}

void UItemSlotWidget::NativeOnDragCancelled(const FDragDropEvent& InDragDropEvent, UDragDropOperation* InOperation)
{
	if (APlayerController* PC = GetWorld()->GetFirstPlayerController())
	{
		FInputModeGameAndUI InputMode;
		InputMode.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);
		PC->SetInputMode(InputMode);
		PC->bShowMouseCursor = true;
	}

	SetVisibility(ESlateVisibility::Visible);
}
