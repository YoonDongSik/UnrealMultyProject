#include "UInventoryComponent.h"

void UInventoryComponent::AddItem(UItemDataAsset* NewItem)
{
	if (NewItem)
	{
		InventoryItems.Add(NewItem);

		for (UItemDataAsset* Item : InventoryItems)
		{
			if (Item)
			{
				UE_LOG(LogTemp, Warning, TEXT("현재 보유: %s"), *Item->ItemName.ToString());
			}
		}
	}
}
