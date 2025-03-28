// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteminaWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HORRORGAME_SteminaWidget_generated_h
#error "SteminaWidget.generated.h already included, missing '#pragma once' in SteminaWidget.h"
#endif
#define HORRORGAME_SteminaWidget_generated_h

#define FID_HorrorGame_Source_HorrorGame_SteminaWidget_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSteminaUpdate);


#define FID_HorrorGame_Source_HorrorGame_SteminaWidget_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteminaWidget(); \
	friend struct Z_Construct_UClass_USteminaWidget_Statics; \
public: \
	DECLARE_CLASS(USteminaWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HorrorGame"), NO_API) \
	DECLARE_SERIALIZER(USteminaWidget)


#define FID_HorrorGame_Source_HorrorGame_SteminaWidget_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteminaWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USteminaWidget(USteminaWidget&&); \
	USteminaWidget(const USteminaWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteminaWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteminaWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteminaWidget) \
	NO_API virtual ~USteminaWidget();


#define FID_HorrorGame_Source_HorrorGame_SteminaWidget_h_14_PROLOG
#define FID_HorrorGame_Source_HorrorGame_SteminaWidget_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HorrorGame_Source_HorrorGame_SteminaWidget_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HorrorGame_Source_HorrorGame_SteminaWidget_h_17_INCLASS_NO_PURE_DECLS \
	FID_HorrorGame_Source_HorrorGame_SteminaWidget_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HORRORGAME_API UClass* StaticClass<class USteminaWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HorrorGame_Source_HorrorGame_SteminaWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
