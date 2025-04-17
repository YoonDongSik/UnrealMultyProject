// Fill out your copyright notice in the Description page of Project Settings.


#include "InventroyWidget.h"
#include "ItemSlotWidget.h"
#include "Components/UniformGridPanel.h"
#include "Components/UniformGridSlot.h"
#include "MainCharacter.h"
#include "UInventoryComponent.h"
#include "ItemDataAsset.h"

void UInventoryWidget::NativeConstruct()
{
	Super::NativeConstruct();

	APlayerController* PC = GetOwningPlayer();
	AMainCharacter* MainCharacter = Cast<AMainCharacter>(PC->GetPawn());

	if (!MainCharacter || !MainCharacter->InventoryComponent || !InventoryPanel || !ItemSlotClass) return;

	const TArray<UItemDataAsset*>& Items = MainCharacter->InventoryComponent->InventoryItems;

	for (int32 i = 0; i < Items.Num(); i++)
	{
		UItemSlotWidget* NewSlot = CreateWidget<UItemSlotWidget>(this, ItemSlotClass);
		if (NewSlot)
		{
			NewSlot->SetItem(Items[i]);

			UUniformGridSlot* GridSlot = InventoryPanel->AddChildToUniformGrid(NewSlot);
			GridSlot->SetColumn(i % 4);
			GridSlot->SetRow(i / 4);
		}
	}
