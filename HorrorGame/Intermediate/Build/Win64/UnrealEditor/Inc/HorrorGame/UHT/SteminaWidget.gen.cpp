// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HorrorGame/SteminaWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteminaWidget() {}

// Begin Cross Module References
HORRORGAME_API UClass* Z_Construct_UClass_USteminaWidget();
HORRORGAME_API UClass* Z_Construct_UClass_USteminaWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_HorrorGame();
// End Cross Module References

// Begin Class USteminaWidget
void USteminaWidget::StaticRegisterNativesUSteminaWidget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteminaWidget);
UClass* Z_Construct_UClass_USteminaWidget_NoRegister()
{
	return USteminaWidget::StaticClass();
}
struct Z_Construct_UClass_USteminaWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "SteminaWidget.h" },
		{ "ModuleRelativePath", "SteminaWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteminaBar_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Stat" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SteminaWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SteminaBar;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteminaWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USteminaWidget_Statics::NewProp_SteminaBar = { "SteminaBar", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteminaWidget, SteminaBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteminaBar_MetaData), NewProp_SteminaBar_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteminaWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteminaWidget_Statics::NewProp_SteminaBar,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteminaWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USteminaWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_HorrorGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteminaWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteminaWidget_Statics::ClassParams = {
	&USteminaWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USteminaWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USteminaWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteminaWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_USteminaWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USteminaWidget()
{
	if (!Z_Registration_Info_UClass_USteminaWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteminaWidget.OuterSingleton, Z_Construct_UClass_USteminaWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteminaWidget.OuterSingleton;
}
template<> HORRORGAME_API UClass* StaticClass<USteminaWidget>()
{
	return USteminaWidget::StaticClass();
}
USteminaWidget::USteminaWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USteminaWidget);
USteminaWidget::~USteminaWidget() {}
// End Class USteminaWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_HorrorGame_Source_HorrorGame_SteminaWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USteminaWidget, USteminaWidget::StaticClass, TEXT("USteminaWidget"), &Z_Registration_Info_UClass_USteminaWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteminaWidget), 4205887689U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HorrorGame_Source_HorrorGame_SteminaWidget_h_2256160607(TEXT("/Script/HorrorGame"),
	Z_CompiledInDeferFile_FID_HorrorGame_Source_HorrorGame_SteminaWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HorrorGame_Source_HorrorGame_SteminaWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
