// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HorrorGame/ThrowItemAttackActor.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeThrowItemAttackActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
HORRORGAME_API UClass* Z_Construct_UClass_AMainCharacter_NoRegister();
HORRORGAME_API UClass* Z_Construct_UClass_AThrowItemAttackActor();
HORRORGAME_API UClass* Z_Construct_UClass_AThrowItemAttackActor_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_HorrorGame();
// End Cross Module References

// Begin Class AThrowItemAttackActor Function OnAttackSphereBeginOverlap
struct Z_Construct_UFunction_AThrowItemAttackActor_OnAttackSphereBeginOverlap_Statics
{
	struct ThrowItemAttackActor_eventOnAttackSphereBeginOverlap_Parms
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
		{ "ModuleRelativePath", "ThrowItemAttackActor.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AThrowItemAttackActor_OnAttackSphereBeginOverlap_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ThrowItemAttackActor_eventOnAttackSphereBeginOverlap_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComp_MetaData), NewProp_OverlappedComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AThrowItemAttackActor_OnAttackSphereBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ThrowItemAttackActor_eventOnAttackSphereBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AThrowItemAttackActor_OnAttackSphereBeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ThrowItemAttackActor_eventOnAttackSphereBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AThrowItemAttackActor_OnAttackSphereBeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ThrowItemAttackActor_eventOnAttackSphereBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AThrowItemAttackActor_OnAttackSphereBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((ThrowItemAttackActor_eventOnAttackSphereBeginOverlap_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AThrowItemAttackActor_OnAttackSphereBeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ThrowItemAttackActor_eventOnAttackSphereBeginOverlap_Parms), &Z_Construct_UFunction_AThrowItemAttackActor_OnAttackSphereBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AThrowItemAttackActor_OnAttackSphereBeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ThrowItemAttackActor_eventOnAttackSphereBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AThrowItemAttackActor_OnAttackSphereBeginOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AThrowItemAttackActor_OnAttackSphereBeginOverlap_Statics::NewProp_OverlappedComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AThrowItemAttackActor_OnAttackSphereBeginOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AThrowItemAttackActor_OnAttackSphereBeginOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AThrowItemAttackActor_OnAttackSphereBeginOverlap_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AThrowItemAttackActor_OnAttackSphereBeginOverlap_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AThrowItemAttackActor_OnAttackSphereBeginOverlap_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AThrowItemAttackActor_OnAttackSphereBeginOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AThrowItemAttackActor_OnAttackSphereBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AThrowItemAttackActor, nullptr, "OnAttackSphereBeginOverlap", nullptr, nullptr, Z_Construct_UFunction_AThrowItemAttackActor_OnAttackSphereBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AThrowItemAttackActor_OnAttackSphereBeginOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_AThrowItemAttackActor_OnAttackSphereBeginOverlap_Statics::ThrowItemAttackActor_eventOnAttackSphereBeginOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AThrowItemAttackActor_OnAttackSphereBeginOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AThrowItemAttackActor_OnAttackSphereBeginOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AThrowItemAttackActor_OnAttackSphereBeginOverlap_Statics::ThrowItemAttackActor_eventOnAttackSphereBeginOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AThrowItemAttackActor_OnAttackSphereBeginOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AThrowItemAttackActor_OnAttackSphereBeginOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AThrowItemAttackActor::execOnAttackSphereBeginOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnAttackSphereBeginOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// End Class AThrowItemAttackActor Function OnAttackSphereBeginOverlap

// Begin Class AThrowItemAttackActor
void AThrowItemAttackActor::StaticRegisterNativesAThrowItemAttackActor()
{
	UClass* Class = AThrowItemAttackActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnAttackSphereBeginOverlap", &AThrowItemAttackActor::execOnAttackSphereBeginOverlap },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AThrowItemAttackActor);
UClass* Z_Construct_UClass_AThrowItemAttackActor_NoRegister()
{
	return AThrowItemAttackActor::StaticClass();
}
struct Z_Construct_UClass_AThrowItemAttackActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ThrowItemAttackActor.h" },
		{ "ModuleRelativePath", "ThrowItemAttackActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackSphere_MetaData[] = {
		{ "Category", "Item|Attack" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ThrowItemAttackActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ElectricParticle_MetaData[] = {
		{ "Category", "Item|Attack" },
		{ "ModuleRelativePath", "ThrowItemAttackActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IceParticle_MetaData[] = {
		{ "Category", "Item|Attack" },
		{ "ModuleRelativePath", "ThrowItemAttackActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackParticleComponent_MetaData[] = {
		{ "Category", "Item|Attack" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ThrowItemAttackActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainCharacter_MetaData[] = {
		{ "ModuleRelativePath", "ThrowItemAttackActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttackSphere;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ElectricParticle;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IceParticle;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttackParticleComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MainCharacter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AThrowItemAttackActor_OnAttackSphereBeginOverlap, "OnAttackSphereBeginOverlap" }, // 98904529
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AThrowItemAttackActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AThrowItemAttackActor_Statics::NewProp_AttackSphere = { "AttackSphere", nullptr, (EPropertyFlags)0x002008000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThrowItemAttackActor, AttackSphere), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackSphere_MetaData), NewProp_AttackSphere_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AThrowItemAttackActor_Statics::NewProp_ElectricParticle = { "ElectricParticle", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThrowItemAttackActor, ElectricParticle), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ElectricParticle_MetaData), NewProp_ElectricParticle_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AThrowItemAttackActor_Statics::NewProp_IceParticle = { "IceParticle", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThrowItemAttackActor, IceParticle), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IceParticle_MetaData), NewProp_IceParticle_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AThrowItemAttackActor_Statics::NewProp_AttackParticleComponent = { "AttackParticleComponent", nullptr, (EPropertyFlags)0x002008000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThrowItemAttackActor, AttackParticleComponent), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackParticleComponent_MetaData), NewProp_AttackParticleComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AThrowItemAttackActor_Statics::NewProp_MainCharacter = { "MainCharacter", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThrowItemAttackActor, MainCharacter), Z_Construct_UClass_AMainCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainCharacter_MetaData), NewProp_MainCharacter_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AThrowItemAttackActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThrowItemAttackActor_Statics::NewProp_AttackSphere,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThrowItemAttackActor_Statics::NewProp_ElectricParticle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThrowItemAttackActor_Statics::NewProp_IceParticle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThrowItemAttackActor_Statics::NewProp_AttackParticleComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThrowItemAttackActor_Statics::NewProp_MainCharacter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AThrowItemAttackActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AThrowItemAttackActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_HorrorGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AThrowItemAttackActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AThrowItemAttackActor_Statics::ClassParams = {
	&AThrowItemAttackActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AThrowItemAttackActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AThrowItemAttackActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AThrowItemAttackActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AThrowItemAttackActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AThrowItemAttackActor()
{
	if (!Z_Registration_Info_UClass_AThrowItemAttackActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AThrowItemAttackActor.OuterSingleton, Z_Construct_UClass_AThrowItemAttackActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AThrowItemAttackActor.OuterSingleton;
}
template<> HORRORGAME_API UClass* StaticClass<AThrowItemAttackActor>()
{
	return AThrowItemAttackActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AThrowItemAttackActor);
AThrowItemAttackActor::~AThrowItemAttackActor() {}
// End Class AThrowItemAttackActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_HorrorGame_Source_HorrorGame_ThrowItemAttackActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AThrowItemAttackActor, AThrowItemAttackActor::StaticClass, TEXT("AThrowItemAttackActor"), &Z_Registration_Info_UClass_AThrowItemAttackActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AThrowItemAttackActor), 2498362370U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HorrorGame_Source_HorrorGame_ThrowItemAttackActor_h_3720473830(TEXT("/Script/HorrorGame"),
	Z_CompiledInDeferFile_FID_HorrorGame_Source_HorrorGame_ThrowItemAttackActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HorrorGame_Source_HorrorGame_ThrowItemAttackActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
