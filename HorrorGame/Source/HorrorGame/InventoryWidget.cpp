#include "InventoryWidget.h"
#include "ItemSlotWidget.h"
#include "Components/UniformGridPanel.h"
#include "Components/UniformGridSlot.h"
#include "MainCharacter.h"
#include "UInventoryComponent.h"
#include "ItemDataAsset.h"



void UInventoryWidget::NativeConstruct()
{
	Super::NativeConstruct();

	ItemSlotWidgets.Empty();
	if (InventoryPanel)
	{
		InventoryPanel->ClearChildren();
	}

	if (CloseButton)
	{
		CloseButton->OnClicked.AddDynamic(this, &UInventoryWidget::OnCloseButtonClicked);
	}
}



void UInventoryWidget::RefreshInventory()
{
	if (!InventoryPanel || !ItemSlotClass) return;

	ItemSlotWidgets.Empty();
	InventoryPanel->ClearChildren();

	UWorld* World = GetWorld();
	if (!World) return;

	APlayerController* PlayerController = World->GetFirstPlayerController();
	AMainCharacter* MainCharacter = Cast<AMainCharacter>(PlayerController->GetPawn());
	if (!MainCharacter || !MainCharacter->InventoryComponent) return;

	const TArray<UItemDataAsset*>& Items = MainCharacter->InventoryComponent->InventoryItems;

	const int32 MaxSlotCount = 6; // ✅ 항상 6칸 고정

	for (int32 i = 0; i < MaxSlotCount; i++)
	{
		UItemSlotWidget* NewSlot = CreateWidget<UItemSlotWidget>(this, ItemSlotClass);
		if (NewSlot)
		{
			// 인벤토리에 해당 인덱스 아이템이 있으면 세팅
			if (Items.IsValidIndex(i) && Items[i])
			{
				NewSlot->SetItem(Items[i]);
				UE_LOG(LogTemp, Warning, TEXT("✅ Inventory Index [%d]: %s"), i, *Items[i]->ItemName.ToString());
			}
			else
			{
				NewSlot->ClearItem(); // 아이템이 없으면 빈칸
				UE_LOG(LogTemp, Warning, TEXT("➖ Inventory Index [%d]: 빈칸"), i);
			}

			UUniformGridSlot* GridSlot = InventoryPanel->AddChildToUniformGrid(NewSlot);
			GridSlot->SetColumn(i % 3); // ✅ 3칸씩 한 줄
			GridSlot->SetRow(i / 3);    // 2줄

			ItemSlotWidgets.Add(NewSlot);
		}
	}
}

void UInventoryWidget::OnCloseButtonClicked()
{
	this->RemoveFromParent();  // ✅ 위젯을 화면에서 제거
	UE_LOG(LogTemp, Warning, TEXT("인벤토리 UI 닫기"));
}
