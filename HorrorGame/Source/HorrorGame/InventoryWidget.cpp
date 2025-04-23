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

	for (int32 i = 0; i < Items.Num(); i++)
	{
		UItemSlotWidget* NewSlot = CreateWidget<UItemSlotWidget>(this, ItemSlotClass);
		if (NewSlot)
		{
			if (Items.IsValidIndex(i) && Items[i])
			{
				NewSlot->SetItem(Items[i]);
				UE_LOG(LogTemp, Warning, TEXT("Inventory Index [%d]: %s"), i, *Items[i]->ItemName.ToString());
			}
			else
			{
				NewSlot->ClearItem();
				UE_LOG(LogTemp, Error, TEXT("❌ Inventory Index [%d] is null!"), i);
			}

			UUniformGridSlot* GridSlot = InventoryPanel->AddChildToUniformGrid(NewSlot);
			GridSlot->SetColumn(i % 4);
			GridSlot->SetRow(i / 4);

			ItemSlotWidgets.Add(NewSlot);
		}
	}
}
