// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GhostEnemyPawn.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef HORRORGAME_GhostEnemyPawn_generated_h
#error "GhostEnemyPawn.generated.h already included, missing '#pragma once' in GhostEnemyPawn.h"
#endif
#define HORRORGAME_GhostEnemyPawn_generated_h

#define FID_HorrorGame_Source_HorrorGame_GhostEnemyPawn_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnHitAttackBeginOverlap); \
	DECLARE_FUNCTION(execPlayAttack);


#define FID_HorrorGame_Source_HorrorGame_GhostEnemyPawn_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGhostEnemyPawn(); \
	friend struct Z_Construct_UClass_AGhostEnemyPawn_Statics; \
public: \
	DECLARE_CLASS(AGhostEnemyPawn, AEnemyBasePawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HorrorGame"), NO_API) \
	DECLARE_SERIALIZER(AGhostEnemyPawn)


#define FID_HorrorGame_Source_HorrorGame_GhostEnemyPawn_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AGhostEnemyPawn(AGhostEnemyPawn&&); \
	AGhostEnemyPawn(const AGhostEnemyPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGhostEnemyPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGhostEnemyPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGhostEnemyPawn) \
	NO_API virtual ~AGhostEnemyPawn();


#define FID_HorrorGame_Source_HorrorGame_GhostEnemyPawn_h_11_PROLOG
#define FID_HorrorGame_Source_HorrorGame_GhostEnemyPawn_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HorrorGame_Source_HorrorGame_GhostEnemyPawn_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HorrorGame_Source_HorrorGame_GhostEnemyPawn_h_14_INCLASS_NO_PURE_DECLS \
	FID_HorrorGame_Source_HorrorGame_GhostEnemyPawn_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HORRORGAME_API UClass* StaticClass<class AGhostEnemyPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HorrorGame_Source_HorrorGame_GhostEnemyPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
