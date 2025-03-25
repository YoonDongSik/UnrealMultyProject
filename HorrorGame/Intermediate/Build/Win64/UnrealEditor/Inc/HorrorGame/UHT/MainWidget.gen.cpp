// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HorrorGame/MainWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainWidget() {}

// Begin Cross Module References
HORRORGAME_API UClass* Z_Construct_UClass_AMainCharacter_NoRegister();
HORRORGAME_API UClass* Z_Construct_UClass_UMainWidget();
HORRORGAME_API UClass* Z_Construct_UClass_UMainWidget_NoRegister();
HORRORGAME_API UClass* Z_Construct_UClass_USteminaWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_HorrorGame();
// End Cross Module References

// Begin Class UMainWidget
void UMainWidget::StaticRegisterNativesUMainWidget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMainWidget);
UClass* Z_Construct_UClass_UMainWidget_NoRegister()
{
	return UMainWidget::StaticClass();
}
struct Z_Construct_UClass_UMainWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "MainWidget.h" },
		{ "ModuleRelativePath", "MainWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteminaWidget_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Stat" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MainWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainCharacter_MetaData[] = {
		{ "ModuleRelativePath", "MainWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SteminaWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MainCharacter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMainWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainWidget_Statics::NewProp_SteminaWidget = { "SteminaWidget", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainWidget, SteminaWidget), Z_Construct_UClass_USteminaWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteminaWidget_MetaData), NewProp_SteminaWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainWidget_Statics::NewProp_MainCharacter = { "MainCharacter", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainWidget, MainCharacter), Z_Construct_UClass_AMainCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainCharacter_MetaData), NewProp_MainCharacter_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMainWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainWidget_Statics::NewProp_SteminaWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainWidget_Statics::NewProp_MainCharacter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMainWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMainWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_HorrorGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMainWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMainWidget_Statics::ClassParams = {
	&UMainWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMainWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMainWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMainWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UMainWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMainWidget()
{
	if (!Z_Registration_Info_UClass_UMainWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMainWidget.OuterSingleton, Z_Construct_UClass_UMainWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMainWidget.OuterSingleton;
}
template<> HORRORGAME_API UClass* StaticClass<UMainWidget>()
{
	return UMainWidget::StaticClass();
}
UMainWidget::UMainWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMainWidget);
UMainWidget::~UMainWidget() {}
// End Class UMainWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_HorrorGame_Source_HorrorGame_MainWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMainWidget, UMainWidget::StaticClass, TEXT("UMainWidget"), &Z_Registration_Info_UClass_UMainWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMainWidget), 2771531858U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HorrorGame_Source_HorrorGame_MainWidget_h_1342423868(TEXT("/Script/HorrorGame"),
	Z_CompiledInDeferFile_FID_HorrorGame_Source_HorrorGame_MainWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HorrorGame_Source_HorrorGame_MainWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
