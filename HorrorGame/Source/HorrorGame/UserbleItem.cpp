// Fill out your copyright notice in the Description page of Project Settings.


#include "UserbleItem.h"
#include "MainCharacter.h"

void UUserbleItem::UseItem(AMainCharacter* Character, UItemDataAsset* DataAsset)
{
	if (!DataAsset) return;

	switch (DataAsset->ItemID)
	{
	case EItemID::Adrenaline:
		Character->SetAdrenalineDuration(Character->GetAdrenalineDuration() + 20);
		break;
	case EItemID::Bandage:
		Character->SetHealth(Character->GetHealth() + 10);
		break;
	case EItemID::HealthKit:
		Character->SetHealth(Character->GetHealth() + 40);
		break;
	case EItemID::Painkiller:
		Character->SetHealth(Character->GetHealth() + 20);
		break;
	case EItemID::ElectricOrb:
		// Logic to use electric orb item
		break;
	case EItemID::IceOrb:
		// Logic to use ice orb item
		break;
	case EItemID::HandLight:
		// Logic to use hand light item
		break;

	}
}
