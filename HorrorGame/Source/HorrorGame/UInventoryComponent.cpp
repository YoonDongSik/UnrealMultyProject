#include "UInventoryComponent.h"

void UInventoryComponent::AddItem(UItemDataAsset* NewItem)
{
	if (NewItem)
	{
		InventoryItems.Add(NewItem);
		UE_LOG(LogTemp, Log, TEXT("������ �߰���: %s"), *NewItem->ItemName.ToString());
	}
}
