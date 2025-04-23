// Fill out your copyright notice in the Description page of Project Settings.


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

	/*APlayerController* PC = GetOwningPlayer();
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
	}*/

	UWorld* World = GetWorld();
	if (World)
	{
		APlayerController* PlayerController = World->GetFirstPlayerController();
		AMainCharacter* MainCharacter = Cast<AMainCharacter>(PlayerController->GetPawn());
		if (MainCharacter && MainCharacter->InventoryComponent)
		{
			int32 ItemCount = InventoryPanel->GetChildrenCount();
			for (int32 i = 0; i < ItemCount; i++)
			{
				UItemSlotWidget* ItemSlot = Cast<UItemSlotWidget>(InventoryPanel->GetChildAt(i));
				if (ItemSlot)
				{
					ItemSlotWidgets.Add(ItemSlot);
				}
			}
		}
	}
}

void UInventoryWidget::RefreshInventory()
{
	UWorld* World = GetWorld();
	if (World)
	{
		APlayerController* PlayerController = World->GetFirstPlayerController();
		AMainCharacter* MainCharacter = Cast<AMainCharacter>(PlayerController->GetPawn());

		if (!MainCharacter || !MainCharacter->InventoryComponent) return;

		const TArray<UItemDataAsset*>& Items = MainCharacter->InventoryComponent->InventoryItems;
		for (int32 i = 0; i < ItemSlotWidgets.Num(); i++)
		{
			if (ItemSlotWidgets[i])
			{
				if (Items.IsValidIndex(i))  // 아이템이 존재하면
				{
					ItemSlotWidgets[i]->SetItem(Items[i]);  // 아이템 설정
				}
				else  // 아이템이 없으면
				{
					ItemSlotWidgets[i]->ClearItem();  // 슬롯 비우기
				}
			}
		}
	}

}
