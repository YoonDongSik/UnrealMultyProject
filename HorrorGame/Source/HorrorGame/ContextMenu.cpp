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

	if (!TargetItemSlot || !TargetItemSlot->ItemDataAsset)
	{
		UE_LOG(LogTemp, Warning, TEXT("❌ SetupContextMenu 리턴됨: 슬롯 또는 아이템 없음")); // ✅ 실패 로그
		return;
	}

	UE_LOG(LogTemp, Warning, TEXT("✅ SetupContextMenu 실행 성공")); // ✅ 성공 로그

	if (TargetItemSlot->ItemDataAsset->ItemType == EItemType::E_Equipable)
	{
		Text_UseOrEquip->SetText(FText::FromString(TEXT("장착")));
	}
	else if (TargetItemSlot->ItemDataAsset->ItemType == EItemType::E_Consumable)
	{
		Text_UseOrEquip->SetText(FText::FromString(TEXT("사용")));
	}
}

void UContextMenu::OnUseOrEquipButtonClicked()
{
	if (!TargetItemSlot || !TargetItemSlot->ItemDataAsset) return;

	// 플레이어 가져오기
	AMainCharacter* MainCharacter = Cast<AMainCharacter>(UGameplayStatics::GetPlayerCharacter(this, 0));
	if (!MainCharacter)
	{
		UE_LOG(LogTemp, Warning, TEXT("플레이어 캐릭터 찾기 실패"));
		return;
	}

	if (TargetItemSlot->ItemDataAsset->ItemType == EItemType::E_Equipable)
	{
		// TODO: 장착 처리 (MainCharacter에 장착 함수 만들어야 함)
		UE_LOG(LogTemp, Warning, TEXT("장착 실행!"));
	}
	else if (TargetItemSlot->ItemDataAsset->ItemType == EItemType::E_Consumable)
	{
		// 소모 아이템 사용
		UUserbleItem* UserbleItemObject = NewObject<UUserbleItem>();
		if (UserbleItemObject)
		{
			UserbleItemObject->UseItem(MainCharacter, TargetItemSlot->ItemDataAsset);
		}

		// ✅ 사용했으면 슬롯 비우기
		TargetItemSlot->ClearItem();
	}

	// 메뉴 닫기
	RemoveFromParent();
}
