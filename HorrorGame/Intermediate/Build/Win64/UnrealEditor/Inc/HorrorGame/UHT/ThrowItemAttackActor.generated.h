// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ThrowItemAttackActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef HORRORGAME_ThrowItemAttackActor_generated_h
#error "ThrowItemAttackActor.generated.h already included, missing '#pragma once' in ThrowItemAttackActor.h"
#endif
#define HORRORGAME_ThrowItemAttackActor_generated_h

#define FID_HorrorGame_Source_HorrorGame_ThrowItemAttackActor_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnAttackSphereBeginOverlap);


#define FID_HorrorGame_Source_HorrorGame_ThrowItemAttackActor_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAThrowItemAttackActor(); \
	friend struct Z_Construct_UClass_AThrowItemAttackActor_Statics; \
public: \
	DECLARE_CLASS(AThrowItemAttackActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HorrorGame"), NO_API) \
	DECLARE_SERIALIZER(AThrowItemAttackActor)


#define FID_HorrorGame_Source_HorrorGame_ThrowItemAttackActor_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AThrowItemAttackActor(AThrowItemAttackActor&&); \
	AThrowItemAttackActor(const AThrowItemAttackActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AThrowItemAttackActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AThrowItemAttackActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AThrowItemAttackActor) \
	NO_API virtual ~AThrowItemAttackActor();


#define FID_HorrorGame_Source_HorrorGame_ThrowItemAttackActor_h_13_PROLOG
#define FID_HorrorGame_Source_HorrorGame_ThrowItemAttackActor_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HorrorGame_Source_HorrorGame_ThrowItemAttackActor_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HorrorGame_Source_HorrorGame_ThrowItemAttackActor_h_16_INCLASS_NO_PURE_DECLS \
	FID_HorrorGame_Source_HorrorGame_ThrowItemAttackActor_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HORRORGAME_API UClass* StaticClass<class AThrowItemAttackActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HorrorGame_Source_HorrorGame_ThrowItemAttackActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
