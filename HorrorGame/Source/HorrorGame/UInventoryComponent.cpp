#include "UInventoryComponent.h"

void UInventoryComponent::BeginPlay()
{
	Super::BeginPlay();

    InventoryItems.Empty(); // ✅ 혹시라도 null 들어가 있었으면 전부 제거
    InventoryWidget->RefreshInventory();
}

void UInventoryComponent::AddItem(UItemDataAsset* NewItem)
{
    if (!NewItem)
    {
        UE_LOG(LogTemp, Error, TEXT("❌ AddItem 받은 NewItem이 null입니다"));
        return; // null이면 더 이상 진행 안함
    }

    if (NewItem && InventoryItems.Num() >= 6)
    {
        UE_LOG(LogTemp, Warning, TEXT("❌ 인벤토리 가득참 (최대 5개)"));
        return;
    }
    InventoryItems.Add(NewItem);
    UE_LOG(LogTemp, Warning, TEXT("인벤토리에 추가됨: %s"), *NewItem->ItemName.ToString());

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

        if (InventoryWidget)
        {
            InventoryWidget->RefreshInventory();
        }
    
}

void UInventoryComponent::SetInventoryWidget(UInventoryWidget* NewInventoryWidget)
{
    InventoryWidget = NewInventoryWidget;
}
