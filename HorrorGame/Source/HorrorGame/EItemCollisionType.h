#pragma once

#include "CoreMinimal.h"
#include "EItemCollisionType.generated.h"

UENUM(BlueprintType)
enum class EItemCollisionType : uint8
{
	None,
	Box,
	Capsule,
	Sphere,
};
