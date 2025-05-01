// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ItemBaseActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HORRORGAME_ItemBaseActor_generated_h
#error "ItemBaseActor.generated.h already included, missing '#pragma once' in ItemBaseActor.h"
#endif
#define HORRORGAME_ItemBaseActor_generated_h

#define FID_HorrorGame_Source_HorrorGame_ItemBaseActor_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAItemBaseActor(); \
	friend struct Z_Construct_UClass_AItemBaseActor_Statics; \
public: \
	DECLARE_CLASS(AItemBaseActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HorrorGame"), NO_API) \
	DECLARE_SERIALIZER(AItemBaseActor)


#define FID_HorrorGame_Source_HorrorGame_ItemBaseActor_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AItemBaseActor(AItemBaseActor&&); \
	AItemBaseActor(const AItemBaseActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AItemBaseActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AItemBaseActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AItemBaseActor) \
	NO_API virtual ~AItemBaseActor();


#define FID_HorrorGame_Source_HorrorGame_ItemBaseActor_h_14_PROLOG
#define FID_HorrorGame_Source_HorrorGame_ItemBaseActor_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HorrorGame_Source_HorrorGame_ItemBaseActor_h_17_INCLASS_NO_PURE_DECLS \
	FID_HorrorGame_Source_HorrorGame_ItemBaseActor_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HORRORGAME_API UClass* StaticClass<class AItemBaseActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HorrorGame_Source_HorrorGame_ItemBaseActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
