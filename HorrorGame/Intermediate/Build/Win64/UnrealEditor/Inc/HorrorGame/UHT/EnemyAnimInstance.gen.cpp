// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HorrorGame/EnemyAnimInstance.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyAnimInstance() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
HORRORGAME_API UClass* Z_Construct_UClass_AGhostEnemyPawn_NoRegister();
HORRORGAME_API UClass* Z_Construct_UClass_UEnemyAnimInstance();
HORRORGAME_API UClass* Z_Construct_UClass_UEnemyAnimInstance_NoRegister();
UPackage* Z_Construct_UPackage__Script_HorrorGame();
// End Cross Module References

// Begin Class UEnemyAnimInstance
void UEnemyAnimInstance::StaticRegisterNativesUEnemyAnimInstance()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnemyAnimInstance);
UClass* Z_Construct_UClass_UEnemyAnimInstance_NoRegister()
{
	return UEnemyAnimInstance::StaticClass();
}
struct Z_Construct_UClass_UEnemyAnimInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "EnemyAnimInstance.h" },
		{ "ModuleRelativePath", "EnemyAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnemyPawn_MetaData[] = {
		{ "Category", "EnemyAnimInstance" },
		{ "ModuleRelativePath", "EnemyAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnemySpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "EnemyAnimInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EnemyPawn;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EnemySpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnemyAnimInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_EnemyPawn = { "EnemyPawn", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnemyAnimInstance, EnemyPawn), Z_Construct_UClass_AGhostEnemyPawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnemyPawn_MetaData), NewProp_EnemyPawn_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_EnemySpeed = { "EnemySpeed", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnemyAnimInstance, EnemySpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnemySpeed_MetaData), NewProp_EnemySpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnemyAnimInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_EnemyPawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_EnemySpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyAnimInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEnemyAnimInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_HorrorGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyAnimInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnemyAnimInstance_Statics::ClassParams = {
	&UEnemyAnimInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UEnemyAnimInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyAnimInstance_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnemyAnimInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEnemyAnimInstance()
{
	if (!Z_Registration_Info_UClass_UEnemyAnimInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnemyAnimInstance.OuterSingleton, Z_Construct_UClass_UEnemyAnimInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEnemyAnimInstance.OuterSingleton;
}
template<> HORRORGAME_API UClass* StaticClass<UEnemyAnimInstance>()
{
	return UEnemyAnimInstance::StaticClass();
}
UEnemyAnimInstance::UEnemyAnimInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEnemyAnimInstance);
UEnemyAnimInstance::~UEnemyAnimInstance() {}
// End Class UEnemyAnimInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_HorrorGame_Source_HorrorGame_EnemyAnimInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEnemyAnimInstance, UEnemyAnimInstance::StaticClass, TEXT("UEnemyAnimInstance"), &Z_Registration_Info_UClass_UEnemyAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnemyAnimInstance), 3880926944U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HorrorGame_Source_HorrorGame_EnemyAnimInstance_h_558926985(TEXT("/Script/HorrorGame"),
	Z_CompiledInDeferFile_FID_HorrorGame_Source_HorrorGame_EnemyAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HorrorGame_Source_HorrorGame_EnemyAnimInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
