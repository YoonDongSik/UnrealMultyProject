// Fill out your copyright notice in the Description page of Project Settings.


#include "UserbleItem.h"
#include "MainCharacter.h"

void UUserbleItem::UseItem(AMainCharacter* Character, UItemDataAsset* DataAsset)
{
	if (!DataAsset) return;

	switch (DataAsset->ItemType)
	{
	case EItemType::Adrenaline:
		Character->SetAdrenalineDuration(Character->GetAdrenalineDuration() + 20);
		break;
	case EItemType::Bandage:
		Character->SetHealth(Character->GetHealth() + 10);
		break;
	case EItemType::HealthKit:
		Character->SetHealth(Character->GetHealth() + 40);
		break;
	case EItemType::Painkiller:
		Character->SetHealth(Character->GetHealth() + 20);
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
