// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HorrorGame/MainHUD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainHUD() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AHUD();
HORRORGAME_API UClass* Z_Construct_UClass_AMainHUD();
HORRORGAME_API UClass* Z_Construct_UClass_AMainHUD_NoRegister();
HORRORGAME_API UClass* Z_Construct_UClass_UMainWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_HorrorGame();
// End Cross Module References

// Begin Class AMainHUD
void AMainHUD::StaticRegisterNativesAMainHUD()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMainHUD);
UClass* Z_Construct_UClass_AMainHUD_NoRegister()
{
	return AMainHUD::StaticClass();
}
struct Z_Construct_UClass_AMainHUD_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "MainHUD.h" },
		{ "ModuleRelativePath", "MainHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainWidgetClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "MainHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MainHUD.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_MainWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MainWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMainHUD>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMainHUD_Statics::NewProp_MainWidgetClass = { "MainWidgetClass", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainHUD, MainWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainWidgetClass_MetaData), NewProp_MainWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainHUD_Statics::NewProp_MainWidget = { "MainWidget", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainHUD, MainWidget), Z_Construct_UClass_UMainWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainWidget_MetaData), NewProp_MainWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMainHUD_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainHUD_Statics::NewProp_MainWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainHUD_Statics::NewProp_MainWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMainHUD_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMainHUD_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AHUD,
	(UObject* (*)())Z_Construct_UPackage__Script_HorrorGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMainHUD_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMainHUD_Statics::ClassParams = {
	&AMainHUD::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMainHUD_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMainHUD_Statics::PropPointers),
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMainHUD_Statics::Class_MetaDataParams), Z_Construct_UClass_AMainHUD_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMainHUD()
{
	if (!Z_Registration_Info_UClass_AMainHUD.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMainHUD.OuterSingleton, Z_Construct_UClass_AMainHUD_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMainHUD.OuterSingleton;
}
template<> HORRORGAME_API UClass* StaticClass<AMainHUD>()
{
	return AMainHUD::StaticClass();
}
AMainHUD::AMainHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMainHUD);
AMainHUD::~AMainHUD() {}
// End Class AMainHUD

// Begin Registration
struct Z_CompiledInDeferFile_FID_HorrorGame_Source_HorrorGame_MainHUD_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMainHUD, AMainHUD::StaticClass, TEXT("AMainHUD"), &Z_Registration_Info_UClass_AMainHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMainHUD), 170020585U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HorrorGame_Source_HorrorGame_MainHUD_h_3200391656(TEXT("/Script/HorrorGame"),
	Z_CompiledInDeferFile_FID_HorrorGame_Source_HorrorGame_MainHUD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HorrorGame_Source_HorrorGame_MainHUD_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
