// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EnemyBasePawn.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef HORRORGAME_EnemyBasePawn_generated_h
#error "EnemyBasePawn.generated.h already included, missing '#pragma once' in EnemyBasePawn.h"
#endif
#define HORRORGAME_EnemyBasePawn_generated_h

#define FID_HorrorGame_Source_HorrorGame_EnemyBasePawn_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnAttackRangeEndOverlap); \
	DECLARE_FUNCTION(execOnAttackRangeBeginOverlap);


#define FID_HorrorGame_Source_HorrorGame_EnemyBasePawn_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemyBasePawn(); \
	friend struct Z_Construct_UClass_AEnemyBasePawn_Statics; \
public: \
	DECLARE_CLASS(AEnemyBasePawn, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HorrorGame"), NO_API) \
	DECLARE_SERIALIZER(AEnemyBasePawn)


#define FID_HorrorGame_Source_HorrorGame_EnemyBasePawn_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AEnemyBasePawn(AEnemyBasePawn&&); \
	AEnemyBasePawn(const AEnemyBasePawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyBasePawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyBasePawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemyBasePawn) \
	NO_API virtual ~AEnemyBasePawn();


#define FID_HorrorGame_Source_HorrorGame_EnemyBasePawn_h_13_PROLOG
#define FID_HorrorGame_Source_HorrorGame_EnemyBasePawn_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HorrorGame_Source_HorrorGame_EnemyBasePawn_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HorrorGame_Source_HorrorGame_EnemyBasePawn_h_16_INCLASS_NO_PURE_DECLS \
	FID_HorrorGame_Source_HorrorGame_EnemyBasePawn_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HORRORGAME_API UClass* StaticClass<class AEnemyBasePawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HorrorGame_Source_HorrorGame_EnemyBasePawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
