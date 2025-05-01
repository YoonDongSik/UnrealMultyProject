// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HorrorGame/ItemBaseActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemBaseActor() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
HORRORGAME_API UClass* Z_Construct_UClass_AItemBaseActor();
HORRORGAME_API UClass* Z_Construct_UClass_AItemBaseActor_NoRegister();
HORRORGAME_API UClass* Z_Construct_UClass_UItemDataAsset_NoRegister();
UPackage* Z_Construct_UPackage__Script_HorrorGame();
// End Cross Module References

// Begin Class AItemBaseActor
void AItemBaseActor::StaticRegisterNativesAItemBaseActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AItemBaseActor);
UClass* Z_Construct_UClass_AItemBaseActor_NoRegister()
{
	return AItemBaseActor::StaticClass();
}
struct Z_Construct_UClass_AItemBaseActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ItemBaseActor.h" },
		{ "ModuleRelativePath", "ItemBaseActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemMesh_MetaData[] = {
		{ "Category", "ItemBaseActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ItemBaseActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemDataAsset_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "ItemBaseActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CapsuleCollision_MetaData[] = {
		{ "Category", "Item|Collision" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ItemBaseActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoxCollision_MetaData[] = {
		{ "Category", "Item|Collision" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ItemBaseActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SphereCollision_MetaData[] = {
		{ "Category", "Item|Collision" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ItemBaseActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemAttackSpawnClass_MetaData[] = {
		{ "Category", "Item|Attack" },
		{ "ModuleRelativePath", "ItemBaseActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemDataAsset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CapsuleCollision;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoxCollision;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SphereCollision;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ItemAttackSpawnClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AItemBaseActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AItemBaseActor_Statics::NewProp_ItemMesh = { "ItemMesh", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AItemBaseActor, ItemMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemMesh_MetaData), NewProp_ItemMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AItemBaseActor_Statics::NewProp_ItemDataAsset = { "ItemDataAsset", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AItemBaseActor, ItemDataAsset), Z_Construct_UClass_UItemDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemDataAsset_MetaData), NewProp_ItemDataAsset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AItemBaseActor_Statics::NewProp_CapsuleCollision = { "CapsuleCollision", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AItemBaseActor, CapsuleCollision), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CapsuleCollision_MetaData), NewProp_CapsuleCollision_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AItemBaseActor_Statics::NewProp_BoxCollision = { "BoxCollision", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AItemBaseActor, BoxCollision), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxCollision_MetaData), NewProp_BoxCollision_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AItemBaseActor_Statics::NewProp_SphereCollision = { "SphereCollision", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AItemBaseActor, SphereCollision), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SphereCollision_MetaData), NewProp_SphereCollision_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AItemBaseActor_Statics::NewProp_ItemAttackSpawnClass = { "ItemAttackSpawnClass", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AItemBaseActor, ItemAttackSpawnClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemAttackSpawnClass_MetaData), NewProp_ItemAttackSpawnClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AItemBaseActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItemBaseActor_Statics::NewProp_ItemMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItemBaseActor_Statics::NewProp_ItemDataAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItemBaseActor_Statics::NewProp_CapsuleCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItemBaseActor_Statics::NewProp_BoxCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItemBaseActor_Statics::NewProp_SphereCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItemBaseActor_Statics::NewProp_ItemAttackSpawnClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AItemBaseActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AItemBaseActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_HorrorGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AItemBaseActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AItemBaseActor_Statics::ClassParams = {
	&AItemBaseActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AItemBaseActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AItemBaseActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AItemBaseActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AItemBaseActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AItemBaseActor()
{
	if (!Z_Registration_Info_UClass_AItemBaseActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AItemBaseActor.OuterSingleton, Z_Construct_UClass_AItemBaseActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AItemBaseActor.OuterSingleton;
}
template<> HORRORGAME_API UClass* StaticClass<AItemBaseActor>()
{
	return AItemBaseActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AItemBaseActor);
AItemBaseActor::~AItemBaseActor() {}
// End Class AItemBaseActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_HorrorGame_Source_HorrorGame_ItemBaseActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AItemBaseActor, AItemBaseActor::StaticClass, TEXT("AItemBaseActor"), &Z_Registration_Info_UClass_AItemBaseActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AItemBaseActor), 1776710458U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HorrorGame_Source_HorrorGame_ItemBaseActor_h_2720356483(TEXT("/Script/HorrorGame"),
	Z_CompiledInDeferFile_FID_HorrorGame_Source_HorrorGame_ItemBaseActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HorrorGame_Source_HorrorGame_ItemBaseActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
