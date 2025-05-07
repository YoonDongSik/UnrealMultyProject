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
	if (!InventoryPanel || !ItemSlotClass || !InventoryRootPanel) return;

	InventoryPanel->ClearChildren();  // UI 초기화
	ItemSlotWidgets.Empty();

	APlayerController* PC = GetWorld()->GetFirstPlayerController();
	AMainCharacter* MainCharacter = Cast<AMainCharacter>(PC->GetPawn());
	if (!MainCharacter || !MainCharacter->InventoryComponent) return;

	if (!MainCharacter) return;
	if (!MainCharacter->InventoryComponent) return;

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

		/*ItemSlotWidgets.Add(NewSlot);*/
	}
}

void UInventoryWidget::OnCloseButtonClicked()
{
	SetVisibility(ESlateVisibility::Collapsed);  // ✅ RemoveFromParent() 아님! 단순히 숨기는 걸로!
	UE_LOG(LogTemp, Warning, TEXT("인벤토리 UI 닫기"));

	// 🔽 커서 숨기기 + 입력 모드 되돌리기
	if (APlayerController* PC = GetOwningPlayer())
	{
		PC->bShowMouseCursor = false;

		FInputModeGameOnly GameInput;
		PC->SetInputMode(GameInput);

		UE_LOG(LogTemp, Warning, TEXT("🖱️ 마우스 커서 끔 + 입력모드 게임 전용으로 변경"));
	}
}
