// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HorrorGame/Drawer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDrawer() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
HORRORGAME_API UClass* Z_Construct_UClass_ADrawer();
HORRORGAME_API UClass* Z_Construct_UClass_ADrawer_NoRegister();
UPackage* Z_Construct_UPackage__Script_HorrorGame();
// End Cross Module References

// Begin Class ADrawer
void ADrawer::StaticRegisterNativesADrawer()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADrawer);
UClass* Z_Construct_UClass_ADrawer_NoRegister()
{
	return ADrawer::StaticClass();
}
struct Z_Construct_UClass_ADrawer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Drawer.h" },
		{ "ModuleRelativePath", "Drawer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshComponent_MetaData[] = {
		{ "Category", "Drawer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Drawer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMeshComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADrawer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADrawer_Statics::NewProp_SkeletalMeshComponent = { "SkeletalMeshComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADrawer, SkeletalMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkeletalMeshComponent_MetaData), NewProp_SkeletalMeshComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADrawer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADrawer_Statics::NewProp_SkeletalMeshComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADrawer_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADrawer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_HorrorGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADrawer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADrawer_Statics::ClassParams = {
	&ADrawer::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ADrawer_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ADrawer_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADrawer_Statics::Class_MetaDataParams), Z_Construct_UClass_ADrawer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADrawer()
{
	if (!Z_Registration_Info_UClass_ADrawer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADrawer.OuterSingleton, Z_Construct_UClass_ADrawer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADrawer.OuterSingleton;
}
template<> HORRORGAME_API UClass* StaticClass<ADrawer>()
{
	return ADrawer::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADrawer);
ADrawer::~ADrawer() {}
// End Class ADrawer

// Begin Registration
struct Z_CompiledInDeferFile_FID_HorrorGame_Source_HorrorGame_Drawer_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADrawer, ADrawer::StaticClass, TEXT("ADrawer"), &Z_Registration_Info_UClass_ADrawer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADrawer), 3502591784U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HorrorGame_Source_HorrorGame_Drawer_h_3054859722(TEXT("/Script/HorrorGame"),
	Z_CompiledInDeferFile_FID_HorrorGame_Source_HorrorGame_Drawer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HorrorGame_Source_HorrorGame_Drawer_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
