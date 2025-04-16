#include "UInventoryComponent.h"

void UInventoryComponent::AddItem(UItemDataAsset* NewItem)
{
	if (NewItem)
	{
		InventoryItems.Add(NewItem);
		UE_LOG(LogTemp, Log, TEXT("아이템 추가됨: %s"), *NewItem->ItemName.ToString());
	}
}
