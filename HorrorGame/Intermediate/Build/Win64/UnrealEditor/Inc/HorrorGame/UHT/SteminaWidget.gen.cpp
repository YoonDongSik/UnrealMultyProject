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
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteminaWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
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
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
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
		{ Z_Construct_UClass_USteminaWidget, USteminaWidget::StaticClass, TEXT("USteminaWidget"), &Z_Registration_Info_UClass_USteminaWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteminaWidget), 3610360057U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HorrorGame_Source_HorrorGame_SteminaWidget_h_2378905283(TEXT("/Script/HorrorGame"),
	Z_CompiledInDeferFile_FID_HorrorGame_Source_HorrorGame_SteminaWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HorrorGame_Source_HorrorGame_SteminaWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
