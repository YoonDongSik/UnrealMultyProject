// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EItemType.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HORRORGAME_EItemType_generated_h
#error "EItemType.generated.h already included, missing '#pragma once' in EItemType.h"
#endif
#define HORRORGAME_EItemType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HorrorGame_Source_HorrorGame_EItemType_h


#define FOREACH_ENUM_EITEMTYPE(op) \
	op(EItemType::Adrenaline) \
	op(EItemType::HealthKit) \
	op(EItemType::Bandage) \
	op(EItemType::Painkiller) \
	op(EItemType::ElectricOrb) \
	op(EItemType::IceOrb) \
	op(EItemType::HandLight) 

enum class EItemType : uint8;
template<> struct TIsUEnumClass<EItemType> { enum { Value = true }; };
template<> HORRORGAME_API UEnum* StaticEnum<EItemType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
