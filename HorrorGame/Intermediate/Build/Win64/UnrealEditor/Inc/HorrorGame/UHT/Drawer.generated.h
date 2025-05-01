// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Drawer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HORRORGAME_Drawer_generated_h
#error "Drawer.generated.h already included, missing '#pragma once' in Drawer.h"
#endif
#define HORRORGAME_Drawer_generated_h

#define FID_HorrorGame_Source_HorrorGame_Drawer_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDrawerMove);


#define FID_HorrorGame_Source_HorrorGame_Drawer_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADrawer(); \
	friend struct Z_Construct_UClass_ADrawer_Statics; \
public: \
	DECLARE_CLASS(ADrawer, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HorrorGame"), NO_API) \
	DECLARE_SERIALIZER(ADrawer)


#define FID_HorrorGame_Source_HorrorGame_Drawer_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADrawer(ADrawer&&); \
	ADrawer(const ADrawer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADrawer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADrawer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADrawer) \
	NO_API virtual ~ADrawer();


#define FID_HorrorGame_Source_HorrorGame_Drawer_h_9_PROLOG
#define FID_HorrorGame_Source_HorrorGame_Drawer_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HorrorGame_Source_HorrorGame_Drawer_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HorrorGame_Source_HorrorGame_Drawer_h_12_INCLASS_NO_PURE_DECLS \
	FID_HorrorGame_Source_HorrorGame_Drawer_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HORRORGAME_API UClass* StaticClass<class ADrawer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HorrorGame_Source_HorrorGame_Drawer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
