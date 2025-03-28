// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HorrorGame/MainCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainCharacter() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
HORRORGAME_API UClass* Z_Construct_UClass_AMainCharacter();
HORRORGAME_API UClass* Z_Construct_UClass_AMainCharacter_NoRegister();
HORRORGAME_API UFunction* Z_Construct_UDelegateFunction_HorrorGame_OnStaminaChanged__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_HorrorGame();
// End Cross Module References

// Begin Delegate FOnStaminaChanged
struct Z_Construct_UDelegateFunction_HorrorGame_OnStaminaChanged__DelegateSignature_Statics
{
	struct _Script_HorrorGame_eventOnStaminaChanged_Parms
	{
		float NewStaminaPercent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MainCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewStaminaPercent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_HorrorGame_OnStaminaChanged__DelegateSignature_Statics::NewProp_NewStaminaPercent = { "NewStaminaPercent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_HorrorGame_eventOnStaminaChanged_Parms, NewStaminaPercent), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_HorrorGame_OnStaminaChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HorrorGame_OnStaminaChanged__DelegateSignature_Statics::NewProp_NewStaminaPercent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HorrorGame_OnStaminaChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_HorrorGame_OnStaminaChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_HorrorGame, nullptr, "OnStaminaChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_HorrorGame_OnStaminaChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HorrorGame_OnStaminaChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_HorrorGame_OnStaminaChanged__DelegateSignature_Statics::_Script_HorrorGame_eventOnStaminaChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HorrorGame_OnStaminaChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_HorrorGame_OnStaminaChanged__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_HorrorGame_OnStaminaChanged__DelegateSignature_Statics::_Script_HorrorGame_eventOnStaminaChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_HorrorGame_OnStaminaChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_HorrorGame_OnStaminaChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnStaminaChanged_DelegateWrapper(const FMulticastScriptDelegate& OnStaminaChanged, float NewStaminaPercent)
{
	struct _Script_HorrorGame_eventOnStaminaChanged_Parms
	{
		float NewStaminaPercent;
	};
	_Script_HorrorGame_eventOnStaminaChanged_Parms Parms;
	Parms.NewStaminaPercent=NewStaminaPercent;
	OnStaminaChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnStaminaChanged

// Begin Class AMainCharacter Function DoCrouching
struct Z_Construct_UFunction_AMainCharacter_DoCrouching_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MainCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainCharacter_DoCrouching_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainCharacter, nullptr, "DoCrouching", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainCharacter_DoCrouching_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMainCharacter_DoCrouching_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMainCharacter_DoCrouching()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMainCharacter_DoCrouching_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMainCharacter::execDoCrouching)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoCrouching();
	P_NATIVE_END;
}
// End Class AMainCharacter Function DoCrouching

// Begin Class AMainCharacter Function PlayJumpMontage
struct Z_Construct_UFunction_AMainCharacter_PlayJumpMontage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MainCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainCharacter_PlayJumpMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainCharacter, nullptr, "PlayJumpMontage", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainCharacter_PlayJumpMontage_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMainCharacter_PlayJumpMontage_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMainCharacter_PlayJumpMontage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMainCharacter_PlayJumpMontage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMainCharacter::execPlayJumpMontage)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlayJumpMontage();
	P_NATIVE_END;
}
// End Class AMainCharacter Function PlayJumpMontage

// Begin Class AMainCharacter Function SetCrouchMode
struct Z_Construct_UFunction_AMainCharacter_SetCrouchMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Player Movement" },
		{ "ModuleRelativePath", "MainCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainCharacter_SetCrouchMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainCharacter, nullptr, "SetCrouchMode", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainCharacter_SetCrouchMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMainCharacter_SetCrouchMode_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMainCharacter_SetCrouchMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMainCharacter_SetCrouchMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMainCharacter::execSetCrouchMode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCrouchMode();
	P_NATIVE_END;
}
// End Class AMainCharacter Function SetCrouchMode

// Begin Class AMainCharacter Function SetRunMode
struct Z_Construct_UFunction_AMainCharacter_SetRunMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Player Movement" },
		{ "ModuleRelativePath", "MainCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainCharacter_SetRunMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainCharacter, nullptr, "SetRunMode", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainCharacter_SetRunMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMainCharacter_SetRunMode_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMainCharacter_SetRunMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMainCharacter_SetRunMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMainCharacter::execSetRunMode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetRunMode();
	P_NATIVE_END;
}
// End Class AMainCharacter Function SetRunMode

// Begin Class AMainCharacter Function SetWalkMode
struct Z_Construct_UFunction_AMainCharacter_SetWalkMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Player Movement" },
		{ "ModuleRelativePath", "MainCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainCharacter_SetWalkMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainCharacter, nullptr, "SetWalkMode", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainCharacter_SetWalkMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMainCharacter_SetWalkMode_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMainCharacter_SetWalkMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMainCharacter_SetWalkMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMainCharacter::execSetWalkMode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetWalkMode();
	P_NATIVE_END;
}
// End Class AMainCharacter Function SetWalkMode

// Begin Class AMainCharacter
void AMainCharacter::StaticRegisterNativesAMainCharacter()
{
	UClass* Class = AMainCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DoCrouching", &AMainCharacter::execDoCrouching },
		{ "PlayJumpMontage", &AMainCharacter::execPlayJumpMontage },
		{ "SetCrouchMode", &AMainCharacter::execSetCrouchMode },
		{ "SetRunMode", &AMainCharacter::execSetRunMode },
		{ "SetWalkMode", &AMainCharacter::execSetWalkMode },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMainCharacter);
UClass* Z_Construct_UClass_AMainCharacter_NoRegister()
{
	return AMainCharacter::StaticClass();
}
struct Z_Construct_UClass_AMainCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MainCharacter.h" },
		{ "ModuleRelativePath", "MainCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WalkSpeed_MetaData[] = {
		{ "Category", "Player|Move" },
		{ "ModuleRelativePath", "MainCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RunSpeed_MetaData[] = {
		{ "Category", "Player|Move" },
		{ "ModuleRelativePath", "MainCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CrouchSpeed_MetaData[] = {
		{ "Category", "Player|Move" },
		{ "ModuleRelativePath", "MainCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[] = {
		{ "Category", "Player|Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MainCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[] = {
		{ "Category", "Player|Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MainCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpMontage_MetaData[] = {
		{ "Category", "Player|Montage" },
		{ "ModuleRelativePath", "MainCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsRunning_MetaData[] = {
		{ "Category", "Player|State" },
		{ "ModuleRelativePath", "MainCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Stemina_MetaData[] = {
		{ "Category", "Player|Stat" },
		{ "ModuleRelativePath", "MainCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimInstance_MetaData[] = {
		{ "ModuleRelativePath", "MainCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentMontage_MetaData[] = {
		{ "ModuleRelativePath", "MainCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WalkSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RunSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CrouchSpeed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpMontage;
	static void NewProp_bIsRunning_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsRunning;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Stemina;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimInstance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentMontage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMainCharacter_DoCrouching, "DoCrouching" }, // 4023670977
		{ &Z_Construct_UFunction_AMainCharacter_PlayJumpMontage, "PlayJumpMontage" }, // 2276491682
		{ &Z_Construct_UFunction_AMainCharacter_SetCrouchMode, "SetCrouchMode" }, // 3165188877
		{ &Z_Construct_UFunction_AMainCharacter_SetRunMode, "SetRunMode" }, // 4016655106
		{ &Z_Construct_UFunction_AMainCharacter_SetWalkMode, "SetWalkMode" }, // 4221127792
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMainCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_WalkSpeed = { "WalkSpeed", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, WalkSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WalkSpeed_MetaData), NewProp_WalkSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_RunSpeed = { "RunSpeed", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, RunSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RunSpeed_MetaData), NewProp_RunSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_CrouchSpeed = { "CrouchSpeed", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, CrouchSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CrouchSpeed_MetaData), NewProp_CrouchSpeed_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringArm_MetaData), NewProp_SpringArm_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Camera_MetaData), NewProp_Camera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_JumpMontage = { "JumpMontage", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, JumpMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpMontage_MetaData), NewProp_JumpMontage_MetaData) };
void Z_Construct_UClass_AMainCharacter_Statics::NewProp_bIsRunning_SetBit(void* Obj)
{
	((AMainCharacter*)Obj)->bIsRunning = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_bIsRunning = { "bIsRunning", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMainCharacter), &Z_Construct_UClass_AMainCharacter_Statics::NewProp_bIsRunning_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsRunning_MetaData), NewProp_bIsRunning_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_Stemina = { "Stemina", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, Stemina), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Stemina_MetaData), NewProp_Stemina_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_AnimInstance = { "AnimInstance", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, AnimInstance), Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimInstance_MetaData), NewProp_AnimInstance_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_CurrentMontage = { "CurrentMontage", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, CurrentMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentMontage_MetaData), NewProp_CurrentMontage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMainCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_WalkSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_RunSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_CrouchSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_SpringArm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_Camera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_JumpMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_bIsRunning,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_Stemina,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_AnimInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_CurrentMontage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMainCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMainCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_HorrorGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMainCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMainCharacter_Statics::ClassParams = {
	&AMainCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMainCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMainCharacter_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMainCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AMainCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMainCharacter()
{
	if (!Z_Registration_Info_UClass_AMainCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMainCharacter.OuterSingleton, Z_Construct_UClass_AMainCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMainCharacter.OuterSingleton;
}
template<> HORRORGAME_API UClass* StaticClass<AMainCharacter>()
{
	return AMainCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMainCharacter);
AMainCharacter::~AMainCharacter() {}
// End Class AMainCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_HorrorGame_Source_HorrorGame_MainCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMainCharacter, AMainCharacter::StaticClass, TEXT("AMainCharacter"), &Z_Registration_Info_UClass_AMainCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMainCharacter), 239500456U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HorrorGame_Source_HorrorGame_MainCharacter_h_2857398297(TEXT("/Script/HorrorGame"),
	Z_CompiledInDeferFile_FID_HorrorGame_Source_HorrorGame_MainCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HorrorGame_Source_HorrorGame_MainCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
