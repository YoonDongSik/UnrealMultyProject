#include "ContextMenu.h"
#include "Components/Button.h"
#include "Components/TextBlock.h"
#include "ItemSlotWidget.h"
#include "ItemDataAsset.h"
#include "MainCharacter.h"
#include "UserbleItem.h" // 네가 만든 사용 기능
#include "Kismet/GameplayStatics.h" // MainCharacter 찾을 때 필요

void UContextMenu::NativeConstruct()
{
	Super::NativeConstruct();

	if (Button_UseOrEquip)
	{
		Button_UseOrEquip->OnClicked.AddDynamic(this, &UContextMenu::OnUseOrEquipButtonClicked);
	}
}

void UContextMenu::SetupContextMenu(UItemSlotWidget* TargetSlot)
{
	TargetItemSlot = TargetSlot;

	if (!TargetItemSlot || !TargetItemSlot->ItemDataAsset) return;

	switch (TargetItemSlot->ItemDataAsset->ItemType)
	{
	case EItemType::E_Equipable:
		Text_UseOrEquip->SetText(FText::FromString(TEXT("장착")));
		break;
	case EItemType::E_Consumable:
		Text_UseOrEquip->SetText(FText::FromString(TEXT("사용")));
		break;
	default:
		Text_UseOrEquip->SetText(FText::FromString(TEXT("???")));
		break;
	}
}

void UContextMenu::OnUseOrEquipButtonClicked()
{
	if (!TargetItemSlot || !TargetItemSlot->ItemDataAsset) return;

	AMainCharacter* MainCharacter = Cast<AMainCharacter>(UGameplayStatics::GetPlayerCharacter(this, 0));
	if (!MainCharacter)
	{
		//UE_LOG(LogTemp, Warning, TEXT("플레이어 캐릭터 찾기 실패"));
		return;
	}

	if (TargetItemSlot->ItemDataAsset->ItemType == EItemType::E_Equipable)
	{
		//UE_LOG(LogTemp, Warning, TEXT("장착 실행!"));

		// ✅ 장착 처리 함수 호출
		MainCharacter->EquipItem(TargetItemSlot->ItemDataAsset);

		// ✅ 슬롯도 비워줘야 시각적으로 사라짐
		TargetItemSlot->ClearItem();
	}
	else if (TargetItemSlot->ItemDataAsset->ItemType == EItemType::E_Consumable)
	{
		UUserbleItem* UserbleItemObject = NewObject<UUserbleItem>();
		if (UserbleItemObject)
		{
			UserbleItemObject->UseItem(MainCharacter, TargetItemSlot->ItemDataAsset);
		}

		if (MainCharacter->InventoryComponent)
		{
			int32 Index = MainCharacter->InventoryComponent->InventoryItems.Find(TargetItemSlot->ItemDataAsset);
			if (Index != INDEX_NONE)
			{
				MainCharacter->InventoryComponent->InventoryItems[Index] = nullptr;
			}
		}

		TargetItemSlot->ClearItem();
	}

	APlayerController* PC = UGameplayStatics::GetPlayerController(this, 0);
	if (AMainPlayerController* MPC = Cast<AMainPlayerController>(PC))
	{
		if (MPC->MainWidget && MPC->MainWidget->InventoryWidget)
		{
			MPC->MainWidget->InventoryWidget->RefreshInventory();
			//UE_LOG(LogTemp, Warning, TEXT("✅ 인벤토리 UI 새로고침 완료"));
		}
	}

	RemoveFromParent();

	
}
