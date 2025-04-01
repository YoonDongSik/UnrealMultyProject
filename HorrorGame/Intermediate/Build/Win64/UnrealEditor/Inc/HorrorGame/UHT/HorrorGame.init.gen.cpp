// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHorrorGame_init() {}
	HORRORGAME_API UFunction* Z_Construct_UDelegateFunction_HorrorGame_OnStaminaChanged__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_HorrorGame;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_HorrorGame()
	{
		if (!Z_Registration_Info_UPackage__Script_HorrorGame.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_HorrorGame_OnStaminaChanged__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/HorrorGame",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x3952E823,
				0x0E31A3F1,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_HorrorGame.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_HorrorGame.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_HorrorGame(Z_Construct_UPackage__Script_HorrorGame, TEXT("/Script/HorrorGame"), Z_Registration_Info_UPackage__Script_HorrorGame, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x3952E823, 0x0E31A3F1));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
