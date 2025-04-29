#include "InventoryWidget.h"
#include "ItemSlotWidget.h"
#include "Components/UniformGridPanel.h"
#include "Components/UniformGridSlot.h"
#include "Components/CanvasPanel.h" // 캔버스 패널 추가
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
	const int32 MaxSlotCount = 6; // 항상 6칸 고정

	for (int32 i = 0; i < MaxSlotCount; i++)
	{
		UItemSlotWidget* NewSlot = CreateWidget<UItemSlotWidget>(this, ItemSlotClass);
		if (NewSlot)
		{
			if (Items.IsValidIndex(i) && Items[i])
			{
				NewSlot->SetItem(Items[i]);
				UE_LOG(LogTemp, Warning, TEXT("✅ Inventory Index [%d]: %s"), i, *Items[i]->ItemName.ToString());
			}
			else
			{
				NewSlot->ClearItem();
				UE_LOG(LogTemp, Warning, TEXT("➖ Inventory Index [%d]: 빈칸"), i);
			}

			UUniformGridSlot* GridSlot = InventoryPanel->AddChildToUniformGrid(NewSlot);
			GridSlot->SetColumn(i % 3);
			GridSlot->SetRow(i / 3);

			ItemSlotWidgets.Add(NewSlot);
		}
	}
}

void UInventoryWidget::OnCloseButtonClicked()
{
	SetVisibility(ESlateVisibility::Collapsed);  // ✅ RemoveFromParent() 아님! 단순히 숨기는 걸로!
	UE_LOG(LogTemp, Warning, TEXT("인벤토리 UI 닫기"));
}
