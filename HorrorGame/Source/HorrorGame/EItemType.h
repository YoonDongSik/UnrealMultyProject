#pragma once
#include "CoreMinimal.h"
#include "EItemType.generated.h"

UENUM(BlueprintType)
enum class EItemType : uint8
{
	Adrenaline,
	HealthKit,
	Bandage,
	Painkiller,
	ElectricOrb,
	IceOrb,
	HandLight,
};
