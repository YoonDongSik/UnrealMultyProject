// ItemSlotWidget.cpp
#include "ItemSlotWidget.h"
#include "Components/Image.h"
#include "Components/TextBlock.h"
#include "ItemDataAsset.h"

void UItemSlotWidget::SetItem(UItemDataAsset* InItem)
{
	if (InItem && ItemIcon && ItemNameText)
	{
		ItemIcon->SetBrushFromTexture(InItem->ItemIcon);             // 아이템 아이콘 설정
		//ItemNameText->SetText(InItem->ItemName);                     // 아이템 이름 텍스트 설정
	}
}