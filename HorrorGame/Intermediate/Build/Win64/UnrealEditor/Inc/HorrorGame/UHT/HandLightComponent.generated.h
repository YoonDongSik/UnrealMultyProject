// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HandLightComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HORRORGAME_HandLightComponent_generated_h
#error "HandLightComponent.generated.h already included, missing '#pragma once' in HandLightComponent.h"
#endif
#define HORRORGAME_HandLightComponent_generated_h

#define FID_HorrorGame_Source_HorrorGame_HandLightComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execToggleLight);


#define FID_HorrorGame_Source_HorrorGame_HandLightComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHandLightComponent(); \
	friend struct Z_Construct_UClass_UHandLightComponent_Statics; \
public: \
	DECLARE_CLASS(UHandLightComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HorrorGame"), NO_API) \
	DECLARE_SERIALIZER(UHandLightComponent)


#define FID_HorrorGame_Source_HorrorGame_HandLightComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UHandLightComponent(UHandLightComponent&&); \
	UHandLightComponent(const UHandLightComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHandLightComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHandLightComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHandLightComponent) \
	NO_API virtual ~UHandLightComponent();


#define FID_HorrorGame_Source_HorrorGame_HandLightComponent_h_12_PROLOG
#define FID_HorrorGame_Source_HorrorGame_HandLightComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HorrorGame_Source_HorrorGame_HandLightComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HorrorGame_Source_HorrorGame_HandLightComponent_h_15_INCLASS_NO_PURE_DECLS \
	FID_HorrorGame_Source_HorrorGame_HandLightComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HORRORGAME_API UClass* StaticClass<class UHandLightComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HorrorGame_Source_HorrorGame_HandLightComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
