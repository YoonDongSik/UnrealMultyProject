// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EItemCollisionType.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HORRORGAME_EItemCollisionType_generated_h
#error "EItemCollisionType.generated.h already included, missing '#pragma once' in EItemCollisionType.h"
#endif
#define HORRORGAME_EItemCollisionType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HorrorGame_Source_HorrorGame_EItemCollisionType_h


#define FOREACH_ENUM_EITEMCOLLISIONTYPE(op) \
	op(EItemCollisionType::None) \
	op(EItemCollisionType::Box) \
	op(EItemCollisionType::Capsule) \
	op(EItemCollisionType::Sphere) 

enum class EItemCollisionType : uint8;
template<> struct TIsUEnumClass<EItemCollisionType> { enum { Value = true }; };
template<> HORRORGAME_API UEnum* StaticEnum<EItemCollisionType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
