// ItemSlotWidget.cpp
#include "ItemSlotWidget.h"
#include "Components/Image.h"
#include "Components/TextBlock.h"
#include "Blueprint/WidgetBlueprintLibrary.h"
#include "ContextMenu.h"
#include "ItemDataAsset.h"

void UItemSlotWidget::SetItem(UItemDataAsset* InItem)
{
	ItemDataAsset = InItem;
	UpdateSlot();
}

void UItemSlotWidget::ClearItem()
{
	ItemDataAsset = nullptr;
	UpdateSlot();
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
}

FReply UItemSlotWidget::NativeOnMouseButtonDown(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent)
{
	if (InMouseEvent.GetEffectingButton() == EKeys::RightMouseButton)
	{
		UE_LOG(LogTemp, Warning, TEXT("🖱️ 우클릭 감지됨"));

		if (ItemDataAsset && ContextMenuClass)
		{
			UContextMenu* ContextMenu = CreateWidget<UContextMenu>(GetWorld(), ContextMenuClass);
			if (ContextMenu)
			{
				UE_LOG(LogTemp, Warning, TEXT("📌 컨텍스트 메뉴 생성 성공"));

				ContextMenu->SetupContextMenu(this);

				// ✅ 우클릭한 마우스 위치 가져오기
				FVector2D MousePosition = InMouseEvent.GetScreenSpacePosition();

				// ✅ 메뉴 띄우고
				ContextMenu->AddToViewport(100);

				// ✅ 메뉴를 마우스 위치에 배치하기
				ContextMenu->SetPositionInViewport(MousePosition, false); // false = 절대 위치 기준
			}
			else
			{
				UE_LOG(LogTemp, Error, TEXT("❌ ContextMenu 생성 실패!"));
			}
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("❌ ContextMenuClass 또는 ItemDataAsset 없음"));
		}

		return FReply::Handled();
	}

	return Super::NativeOnMouseButtonDown(InGeometry, InMouseEvent);
	}

void UItemSlotWidget::NativeOnDragDetected(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent, UDragDropOperation*& OutOperation)
{
	OutOperation = NewObject<UDragDropOperation>(this);
	OutOperation->DefaultDragVisual = this;
	OutOperation->Payload = this;
	SetVisibility(ESlateVisibility::HitTestInvisible);
}

bool UItemSlotWidget::NativeOnDrop(const FGeometry& InGeometry, const FDragDropEvent& InDragDropEvent, UDragDropOperation* InOperation)
{
	if (UItemSlotWidget* DraggedSlot = Cast<UItemSlotWidget>(InOperation->Payload))
	{
		SwapItem(DraggedSlot);
		SetVisibility(ESlateVisibility::Visible);
		DraggedSlot->SetVisibility(ESlateVisibility::Visible);
		return true;
	}
	return false;
}

void UItemSlotWidget::NativeOnDragCancelled(const FDragDropEvent& InDragDropEvent, UDragDropOperation* InOperation)
{
	SetVisibility(ESlateVisibility::Visible);
}
