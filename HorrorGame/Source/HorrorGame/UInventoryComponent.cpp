#include "UInventoryComponent.h"

void UInventoryComponent::BeginPlay()
{
	Super::BeginPlay();

    InventoryItems.Empty(); // ✅ 혹시라도 null 들어가 있었으면 전부 제거
    InventoryWidget->RefreshInventory();
    InventoryItems.Init(nullptr, 6);
}

void UInventoryComponent::AddItem(UItemDataAsset* NewItem)
{
    //if (!NewItem)
    //{
    //    UE_LOG(LogTemp, Error, TEXT("❌ AddItem 받은 NewItem이 null입니다"));
    //    return; // null이면 더 이상 진행 안함
    //}

    //if (NewItem && InventoryItems.Num() >= 6)
    //{
    //    UE_LOG(LogTemp, Warning, TEXT("❌ 인벤토리 가득참 (최대 6개)"));
    //    return;
    //}
    //InventoryItems.Add(NewItem);
    //UE_LOG(LogTemp, Warning, TEXT("인벤토리에 추가됨: %s"), *NewItem->ItemName.ToString());
    //LogInventoryState();  // ✅ 추가

    //// 화면에 인벤토리의 전체 아이템 목록을 출력
    //FString InventoryList;
    //for (UItemDataAsset* Item : InventoryItems)
    //{
    //    if (Item)
    //    {
    //        InventoryList += Item->ItemName.ToString() + TEXT("\n");
    //    }
    //}
    //   

    //    // 전체 아이템을 GEngine으로 화면에 출력
    //    if (GEngine)
    //    {
    //        GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, InventoryList);
    //    }

    //    if (InventoryWidget)
    //    {
    //        InventoryWidget->RefreshInventory();
    //    }
    
    if (!NewItem)
    {
        UE_LOG(LogTemp, Error, TEXT("❌ AddItem 받은 NewItem이 null입니다"));
        return;
    }

    // 실제 아이템이 들어있는 슬롯 수 계산
    int32 UsedSlotCount = 0;
    for (UItemDataAsset* Item : InventoryItems)
    {
        if (Item != nullptr)
        {
            ++UsedSlotCount;
        }
    }

    // 가득 찼으면 추가 거부
    if (UsedSlotCount >= InventoryItems.Num())
    {
        UE_LOG(LogTemp, Warning, TEXT("❌ 인벤토리 가득참 (실제 채워진 아이템 %d개)"), UsedSlotCount);
        return;
    }

    // 비어있는 슬롯에 추가
    int32 EmptyIndex = InventoryItems.Find(nullptr);
    if (EmptyIndex != INDEX_NONE)
    {
        InventoryItems[EmptyIndex] = NewItem;
        UE_LOG(LogTemp, Warning, TEXT("인벤토리에 추가됨: %s"), *NewItem->ItemName.ToString());
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("❌ 빈 슬롯을 찾을 수 없음"));
        return;
    }

    // 디버그 출력
    LogInventoryState();

    // UI 업데이트
    if (InventoryWidget)
    {
        InventoryWidget->RefreshInventory();
    }
}

void UInventoryComponent::SetInventoryWidget(UInventoryWidget* NewInventoryWidget)
{
    InventoryWidget = NewInventoryWidget;
}

void UInventoryComponent::LogInventoryState()
{

    UE_LOG(LogTemp, Warning, TEXT("🧩 [인벤토리 상태 출력] 전체 %d개 슬롯:"), InventoryItems.Num());

    for (int32 i = 0; i < InventoryItems.Num(); ++i)
    {
        if (InventoryItems[i])
        {
            UE_LOG(LogTemp, Warning, TEXT("  ▸ [%d] %s"), i, *InventoryItems[i]->ItemName.ToString());
        }
        else
        {
            UE_LOG(LogTemp, Warning, TEXT("  ▫ [%d] (빈 슬롯)"), i);
        }
    }
}
