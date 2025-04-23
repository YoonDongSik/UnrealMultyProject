#include "UInventoryComponent.h"

void UInventoryComponent::BeginPlay()
{
	Super::BeginPlay();

    InventoryWidget->RefreshInventory();
}

void UInventoryComponent::AddItem(UItemDataAsset* NewItem)
{
    if (NewItem && InventoryItems.Num() < 5)
    {
        InventoryItems.Add(NewItem);

        // 화면에 인벤토리의 전체 아이템 목록을 출력
        FString InventoryList;
        for (UItemDataAsset* Item : InventoryItems)
        {
            if (Item)
            {
                InventoryList += Item->ItemName.ToString() + TEXT("\n");
            }
        }

        // 전체 아이템을 GEngine으로 화면에 출력
        if (GEngine)
        {
            GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, InventoryList);
        }

		InventoryWidget->RefreshInventory();
    }
}

void UInventoryComponent::SetInventoryWidget(UInventoryWidget* NewInventoryWidget)
{
    InventoryWidget = NewInventoryWidget;
}
