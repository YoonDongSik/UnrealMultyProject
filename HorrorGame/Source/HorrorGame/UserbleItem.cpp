// Fill out your copyright notice in the Description page of Project Settings.


#include "UserbleItem.h"
#include "MainCharacter.h"

void UUserbleItem::UseItem(AMainCharacter* Character, UItemDataAsset* DataAsset)
{
	if (!DataAsset) return;

	switch (DataAsset->ItemType)
	{
	case EItemType::Adrenaline:
		break;
	case EItemType::Bandage:
		/*Character->Health += 10;*/
		break;
	case EItemType::HealthKit:
		// Logic to use health kit item
		break;
	case EItemType::Painkiller:
		// Logic to use painkiller item
		break;
	case EItemType::ElectricOrb:
		// Logic to use electric orb item
		break;
	case EItemType::IceOrb:
		// Logic to use ice orb item
		break;
	case EItemType::HandLight:
		// Logic to use hand light item
		break;

	}
}
