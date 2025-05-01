// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HorrorGame/CrosshairWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCrosshairWidget() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
HORRORGAME_API UClass* Z_Construct_UClass_UCrosshairWidget();
HORRORGAME_API UClass* Z_Construct_UClass_UCrosshairWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_HorrorGame();
// End Cross Module References

// Begin Class UCrosshairWidget
void UCrosshairWidget::StaticRegisterNativesUCrosshairWidget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCrosshairWidget);
UClass* Z_Construct_UClass_UCrosshairWidget_NoRegister()
{
	return UCrosshairWidget::StaticClass();
}
struct Z_Construct_UClass_UCrosshairWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "CrosshairWidget.h" },
		{ "ModuleRelativePath", "CrosshairWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CrosshairImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CrosshairWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CrosshairTexture_MetaData[] = {
		{ "Category", "Crosshair" },
		{ "ModuleRelativePath", "CrosshairWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CrosshairImage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CrosshairTexture;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCrosshairWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCrosshairWidget_Statics::NewProp_CrosshairImage = { "CrosshairImage", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCrosshairWidget, CrosshairImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CrosshairImage_MetaData), NewProp_CrosshairImage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCrosshairWidget_Statics::NewProp_CrosshairTexture = { "CrosshairTexture", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCrosshairWidget, CrosshairTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CrosshairTexture_MetaData), NewProp_CrosshairTexture_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCrosshairWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrosshairWidget_Statics::NewProp_CrosshairImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrosshairWidget_Statics::NewProp_CrosshairTexture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCrosshairWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCrosshairWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_HorrorGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCrosshairWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCrosshairWidget_Statics::ClassParams = {
	&UCrosshairWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCrosshairWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCrosshairWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCrosshairWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UCrosshairWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCrosshairWidget()
{
	if (!Z_Registration_Info_UClass_UCrosshairWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCrosshairWidget.OuterSingleton, Z_Construct_UClass_UCrosshairWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCrosshairWidget.OuterSingleton;
}
template<> HORRORGAME_API UClass* StaticClass<UCrosshairWidget>()
{
	return UCrosshairWidget::StaticClass();
}
UCrosshairWidget::UCrosshairWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCrosshairWidget);
UCrosshairWidget::~UCrosshairWidget() {}
// End Class UCrosshairWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_HorrorGame_Source_HorrorGame_CrosshairWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCrosshairWidget, UCrosshairWidget::StaticClass, TEXT("UCrosshairWidget"), &Z_Registration_Info_UClass_UCrosshairWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCrosshairWidget), 1394918250U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HorrorGame_Source_HorrorGame_CrosshairWidget_h_391966396(TEXT("/Script/HorrorGame"),
	Z_CompiledInDeferFile_FID_HorrorGame_Source_HorrorGame_CrosshairWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HorrorGame_Source_HorrorGame_CrosshairWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
