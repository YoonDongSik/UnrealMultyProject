// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HorrorGame/GhostEnemyPawn.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGhostEnemyPawn() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
HORRORGAME_API UClass* Z_Construct_UClass_AEnemyBasePawn();
HORRORGAME_API UClass* Z_Construct_UClass_AGhostEnemyPawn();
HORRORGAME_API UClass* Z_Construct_UClass_AGhostEnemyPawn_NoRegister();
UPackage* Z_Construct_UPackage__Script_HorrorGame();
// End Cross Module References

// Begin Class AGhostEnemyPawn Function OnHitAttackBeginOverlap
struct Z_Construct_UFunction_AGhostEnemyPawn_OnHitAttackBeginOverlap_Statics
{
	struct GhostEnemyPawn_eventOnHitAttackBeginOverlap_Parms
	{
		UPrimitiveComponent* OverlappedComp;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GhostEnemyPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGhostEnemyPawn_OnHitAttackBeginOverlap_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GhostEnemyPawn_eventOnHitAttackBeginOverlap_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComp_MetaData), NewProp_OverlappedComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGhostEnemyPawn_OnHitAttackBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GhostEnemyPawn_eventOnHitAttackBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGhostEnemyPawn_OnHitAttackBeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GhostEnemyPawn_eventOnHitAttackBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGhostEnemyPawn_OnHitAttackBeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GhostEnemyPawn_eventOnHitAttackBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AGhostEnemyPawn_OnHitAttackBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((GhostEnemyPawn_eventOnHitAttackBeginOverlap_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGhostEnemyPawn_OnHitAttackBeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GhostEnemyPawn_eventOnHitAttackBeginOverlap_Parms), &Z_Construct_UFunction_AGhostEnemyPawn_OnHitAttackBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGhostEnemyPawn_OnHitAttackBeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GhostEnemyPawn_eventOnHitAttackBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGhostEnemyPawn_OnHitAttackBeginOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGhostEnemyPawn_OnHitAttackBeginOverlap_Statics::NewProp_OverlappedComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGhostEnemyPawn_OnHitAttackBeginOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGhostEnemyPawn_OnHitAttackBeginOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGhostEnemyPawn_OnHitAttackBeginOverlap_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGhostEnemyPawn_OnHitAttackBeginOverlap_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGhostEnemyPawn_OnHitAttackBeginOverlap_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGhostEnemyPawn_OnHitAttackBeginOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGhostEnemyPawn_OnHitAttackBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGhostEnemyPawn, nullptr, "OnHitAttackBeginOverlap", nullptr, nullptr, Z_Construct_UFunction_AGhostEnemyPawn_OnHitAttackBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGhostEnemyPawn_OnHitAttackBeginOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGhostEnemyPawn_OnHitAttackBeginOverlap_Statics::GhostEnemyPawn_eventOnHitAttackBeginOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGhostEnemyPawn_OnHitAttackBeginOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGhostEnemyPawn_OnHitAttackBeginOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGhostEnemyPawn_OnHitAttackBeginOverlap_Statics::GhostEnemyPawn_eventOnHitAttackBeginOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGhostEnemyPawn_OnHitAttackBeginOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGhostEnemyPawn_OnHitAttackBeginOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGhostEnemyPawn::execOnHitAttackBeginOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnHitAttackBeginOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// End Class AGhostEnemyPawn Function OnHitAttackBeginOverlap

// Begin Class AGhostEnemyPawn Function PlayAttack
struct Z_Construct_UFunction_AGhostEnemyPawn_PlayAttack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GhostEnemyPawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGhostEnemyPawn_PlayAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGhostEnemyPawn, nullptr, "PlayAttack", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGhostEnemyPawn_PlayAttack_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGhostEnemyPawn_PlayAttack_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AGhostEnemyPawn_PlayAttack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGhostEnemyPawn_PlayAttack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGhostEnemyPawn::execPlayAttack)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlayAttack();
	P_NATIVE_END;
}
// End Class AGhostEnemyPawn Function PlayAttack

// Begin Class AGhostEnemyPawn
void AGhostEnemyPawn::StaticRegisterNativesAGhostEnemyPawn()
{
	UClass* Class = AGhostEnemyPawn::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnHitAttackBeginOverlap", &AGhostEnemyPawn::execOnHitAttackBeginOverlap },
		{ "PlayAttack", &AGhostEnemyPawn::execPlayAttack },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGhostEnemyPawn);
UClass* Z_Construct_UClass_AGhostEnemyPawn_NoRegister()
{
	return AGhostEnemyPawn::StaticClass();
}
struct Z_Construct_UClass_AGhostEnemyPawn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "GhostEnemyPawn.h" },
		{ "ModuleRelativePath", "GhostEnemyPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackMontage_MetaData[] = {
		{ "Category", "Player|Montage" },
		{ "ModuleRelativePath", "GhostEnemyPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimInstance_MetaData[] = {
		{ "ModuleRelativePath", "GhostEnemyPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentMontage_MetaData[] = {
		{ "ModuleRelativePath", "GhostEnemyPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HammerBox_MetaData[] = {
		{ "Category", "Collision" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GhostEnemyPawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttackMontage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimInstance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentMontage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HammerBox;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AGhostEnemyPawn_OnHitAttackBeginOverlap, "OnHitAttackBeginOverlap" }, // 2547165282
		{ &Z_Construct_UFunction_AGhostEnemyPawn_PlayAttack, "PlayAttack" }, // 3536119233
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGhostEnemyPawn>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGhostEnemyPawn_Statics::NewProp_AttackMontage = { "AttackMontage", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGhostEnemyPawn, AttackMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackMontage_MetaData), NewProp_AttackMontage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGhostEnemyPawn_Statics::NewProp_AnimInstance = { "AnimInstance", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGhostEnemyPawn, AnimInstance), Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimInstance_MetaData), NewProp_AnimInstance_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGhostEnemyPawn_Statics::NewProp_CurrentMontage = { "CurrentMontage", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGhostEnemyPawn, CurrentMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentMontage_MetaData), NewProp_CurrentMontage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGhostEnemyPawn_Statics::NewProp_HammerBox = { "HammerBox", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGhostEnemyPawn, HammerBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HammerBox_MetaData), NewProp_HammerBox_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGhostEnemyPawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGhostEnemyPawn_Statics::NewProp_AttackMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGhostEnemyPawn_Statics::NewProp_AnimInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGhostEnemyPawn_Statics::NewProp_CurrentMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGhostEnemyPawn_Statics::NewProp_HammerBox,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGhostEnemyPawn_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGhostEnemyPawn_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AEnemyBasePawn,
	(UObject* (*)())Z_Construct_UPackage__Script_HorrorGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGhostEnemyPawn_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGhostEnemyPawn_Statics::ClassParams = {
	&AGhostEnemyPawn::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AGhostEnemyPawn_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AGhostEnemyPawn_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGhostEnemyPawn_Statics::Class_MetaDataParams), Z_Construct_UClass_AGhostEnemyPawn_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGhostEnemyPawn()
{
	if (!Z_Registration_Info_UClass_AGhostEnemyPawn.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGhostEnemyPawn.OuterSingleton, Z_Construct_UClass_AGhostEnemyPawn_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGhostEnemyPawn.OuterSingleton;
}
template<> HORRORGAME_API UClass* StaticClass<AGhostEnemyPawn>()
{
	return AGhostEnemyPawn::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGhostEnemyPawn);
AGhostEnemyPawn::~AGhostEnemyPawn() {}
// End Class AGhostEnemyPawn

// Begin Registration
struct Z_CompiledInDeferFile_FID_HorrorGame_Source_HorrorGame_GhostEnemyPawn_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGhostEnemyPawn, AGhostEnemyPawn::StaticClass, TEXT("AGhostEnemyPawn"), &Z_Registration_Info_UClass_AGhostEnemyPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGhostEnemyPawn), 1837129302U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HorrorGame_Source_HorrorGame_GhostEnemyPawn_h_1014071035(TEXT("/Script/HorrorGame"),
	Z_CompiledInDeferFile_FID_HorrorGame_Source_HorrorGame_GhostEnemyPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HorrorGame_Source_HorrorGame_GhostEnemyPawn_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
