// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HorrorGame/UserbleItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUserbleItem() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
HORRORGAME_API UClass* Z_Construct_UClass_UUserbleItem();
HORRORGAME_API UClass* Z_Construct_UClass_UUserbleItem_NoRegister();
UPackage* Z_Construct_UPackage__Script_HorrorGame();
// End Cross Module References

// Begin Class UUserbleItem
void UUserbleItem::StaticRegisterNativesUUserbleItem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUserbleItem);
UClass* Z_Construct_UClass_UUserbleItem_NoRegister()
{
	return UUserbleItem::StaticClass();
}
struct Z_Construct_UClass_UUserbleItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UserbleItem.h" },
		{ "ModuleRelativePath", "UserbleItem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUserbleItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UUserbleItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_HorrorGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUserbleItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUserbleItem_Statics::ClassParams = {
	&UUserbleItem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUserbleItem_Statics::Class_MetaDataParams), Z_Construct_UClass_UUserbleItem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUserbleItem()
{
	if (!Z_Registration_Info_UClass_UUserbleItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUserbleItem.OuterSingleton, Z_Construct_UClass_UUserbleItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUserbleItem.OuterSingleton;
}
template<> HORRORGAME_API UClass* StaticClass<UUserbleItem>()
{
	return UUserbleItem::StaticClass();
}
UUserbleItem::UUserbleItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUserbleItem);
UUserbleItem::~UUserbleItem() {}
// End Class UUserbleItem

// Begin Registration
struct Z_CompiledInDeferFile_FID_HorrorGame_Source_HorrorGame_UserbleItem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUserbleItem, UUserbleItem::StaticClass, TEXT("UUserbleItem"), &Z_Registration_Info_UClass_UUserbleItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUserbleItem), 2176245935U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HorrorGame_Source_HorrorGame_UserbleItem_h_3671899248(TEXT("/Script/HorrorGame"),
	Z_CompiledInDeferFile_FID_HorrorGame_Source_HorrorGame_UserbleItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HorrorGame_Source_HorrorGame_UserbleItem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
