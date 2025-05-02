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

	InventoryPanel->ClearChildren();  // UI 초기화
	ItemSlotWidgets.Empty();

	APlayerController* PC = GetWorld()->GetFirstPlayerController();
	AMainCharacter* MainCharacter = Cast<AMainCharacter>(PC->GetPawn());
	if (!MainCharacter || !MainCharacter->InventoryComponent) return;

	const TArray<UItemDataAsset*>& Items = MainCharacter->InventoryComponent->InventoryItems;
	const int32 MaxSlotCount = FMath::Max(6, Items.Num());

	for (int32 i = 0; i < MaxSlotCount; i++)
	{
		UItemSlotWidget* NewSlot = CreateWidget<UItemSlotWidget>(this, ItemSlotClass);
		if (!NewSlot) continue;

		if (Items.IsValidIndex(i) && Items[i])
		{
			NewSlot->SetItem(Items[i]);

		}
		else
		{
			NewSlot->ClearItem();
		}

		/*UUniformGridSlot* GridSlot = InventoryPanel->AddChildToUniformGrid(NewSlot);
		GridSlot->SetColumn(i % 3);
		GridSlot->SetRow(i / 3);*/

		InventoryPanel->AddChildToUniformGrid(NewSlot, i / 3, i % 3);
		ItemSlotWidgets.Add(NewSlot);

		ItemSlotWidgets.Add(NewSlot);
	}
}

void UInventoryWidget::OnCloseButtonClicked()
{
	SetVisibility(ESlateVisibility::Collapsed);  // ✅ RemoveFromParent() 아님! 단순히 숨기는 걸로!
	UE_LOG(LogTemp, Warning, TEXT("인벤토리 UI 닫기"));
}
