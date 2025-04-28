// ItemSlotWidget.cpp
#include "ItemSlotWidget.h"
#include "Components/Image.h"
#include "Blueprint/WidgetBlueprintLibrary.h" // 꼭 필요함!!]
#include "InventoryWidget.h"
#include "Components/TextBlock.h"
#include "ItemDataAsset.h"

void UItemSlotWidget::SetItem(UItemDataAsset* InItem)
{

	ItemDataAsset = InItem; // << 이거 추가 꼭 해야 함 !!!

	if (InItem)
	{
		ItemIcon->SetBrushFromTexture(InItem->ItemIcon);   // 아이콘 설정
		ItemNameText->SetText(InItem->ItemName);           // 이름 설정
	}
	else
	{
		ItemIcon->SetBrushFromTexture(nullptr);           // 아이콘 초기화
		ItemNameText->SetText(FText::GetEmpty());         // 이름 초기화
	}
}

void UItemSlotWidget::ClearItem()
{
	if (ItemIcon && ItemNameText)
	{
		ItemIcon->SetBrushFromTexture(nullptr);                     // 아이템 아이콘 초기화
		ItemNameText->SetText(FText::GetEmpty());                   // 아이템 이름 텍스트 초기화
	}
}



FReply UItemSlotWidget::NativeOnMouseButtonDown(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent)
{
	if (InMouseEvent.IsMouseButtonDown(EKeys::LeftMouseButton))
	{
		return UWidgetBlueprintLibrary::DetectDragIfPressed(InMouseEvent, this, EKeys::LeftMouseButton).NativeReply;
	}

	return Super::NativeOnMouseButtonDown(InGeometry, InMouseEvent);
}

void UItemSlotWidget::NativeOnDragDetected(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent, UDragDropOperation*& OutOperation)
{
	OutOperation = NewObject<UDragDropOperation>(this);
	OutOperation->DefaultDragVisual = this; // 드래그할 때 따라다니는 비주얼
	OutOperation->Payload = this;           // 드래그하는 데이터
	SetVisibility(ESlateVisibility::HitTestInvisible); // 드래그 중에는 안막히게
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
	if (!OtherSlot || this == OtherSlot)
	{
		UE_LOG(LogTemp, Warning, TEXT("Swap 실패: OtherSlot이 nullptr이거나 자기 자신."));
		return;
	}

	if (ItemDataAsset == nullptr && OtherSlot->ItemDataAsset == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("Swap 실패: 둘 다 빈 슬롯."));
		return;
	}

	UItemDataAsset* TempItem = ItemDataAsset;
	SetItem(OtherSlot->ItemDataAsset);       // 내 슬롯에 상대 슬롯 아이템 설정
	OtherSlot->SetItem(TempItem);             // 상대 슬롯에 내 아이템 설정

	UE_LOG(LogTemp, Warning, TEXT("Swap 완료"));


}


bool UItemSlotWidget::NativeOnDrop(const FGeometry& InGeometry, const FDragDropEvent& InDragDropEvent, UDragDropOperation* InOperation)
{
	if (UItemSlotWidget* DraggedSlot = Cast<UItemSlotWidget>(InOperation->Payload))
	{
		UE_LOG(LogTemp, Warning, TEXT("드랍 성공: 아이템 교환 시도"));
		SwapItem(DraggedSlot);
		return true;
	}

	UE_LOG(LogTemp, Warning, TEXT("드랍 실패: Payload가 UItemSlotWidget 아님"));
	return false;
}