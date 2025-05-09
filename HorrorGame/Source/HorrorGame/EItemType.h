#pragma once
#include "CoreMinimal.h"
#include "EItemType.generated.h"

UENUM(BlueprintType)
enum class EItemType : uint8
{
	//None,
	//Adrenaline,
	//HealthKit,
	//Bandage,
	//Painkiller,
	//ElectricOrb,
	//IceOrb,
	//HandLight,

	None UMETA(DisplayName = "None"),               // 기본 없음
	E_Equipable UMETA(DisplayName = "Equipable"),   // 장착형 (HandLight, ElectricOrb 등)
	E_Consumable UMETA(DisplayName = "Consumable")  // 소모형 (Bandage, Adrenaline 등)
};

UENUM(BlueprintType)
enum class EItemID : uint8
{
	None UMETA(DisplayName = "None"),

	// Equipables
	HandLight UMETA(DisplayName = "HandLight"),
	ElectricOrb UMETA(DisplayName = "ElectricOrb"),
	IceOrb UMETA(DisplayName = "IceOrb"),

	// Consumables
	Adrenaline UMETA(DisplayName = "Adrenaline"),
	HealthKit UMETA(DisplayName = "HealthKit"),
	Bandage UMETA(DisplayName = "Bandage"),
	Painkiller UMETA(DisplayName = "Painkiller")
};
