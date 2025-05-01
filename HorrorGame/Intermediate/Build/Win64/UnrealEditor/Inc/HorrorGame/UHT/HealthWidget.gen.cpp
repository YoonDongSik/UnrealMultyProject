// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HorrorGame/HealthWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHealthWidget() {}

// Begin Cross Module References
HORRORGAME_API UClass* Z_Construct_UClass_AMainCharacter_NoRegister();
HORRORGAME_API UClass* Z_Construct_UClass_UHealthWidget();
HORRORGAME_API UClass* Z_Construct_UClass_UHealthWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_HorrorGame();
// End Cross Module References

// Begin Class UHealthWidget Function HealthUpdate
struct Z_Construct_UFunction_UHealthWidget_HealthUpdate_Statics
{
	struct HealthWidget_eventHealthUpdate_Parms
	{
		float HealthPercent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HealthWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HealthPercent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHealthWidget_HealthUpdate_Statics::NewProp_HealthPercent = { "HealthPercent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HealthWidget_eventHealthUpdate_Parms, HealthPercent), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHealthWidget_HealthUpdate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealthWidget_HealthUpdate_Statics::NewProp_HealthPercent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthWidget_HealthUpdate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHealthWidget_HealthUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHealthWidget, nullptr, "HealthUpdate", nullptr, nullptr, Z_Construct_UFunction_UHealthWidget_HealthUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthWidget_HealthUpdate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHealthWidget_HealthUpdate_Statics::HealthWidget_eventHealthUpdate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthWidget_HealthUpdate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHealthWidget_HealthUpdate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHealthWidget_HealthUpdate_Statics::HealthWidget_eventHealthUpdate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHealthWidget_HealthUpdate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHealthWidget_HealthUpdate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHealthWidget::execHealthUpdate)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_HealthPercent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HealthUpdate(Z_Param_HealthPercent);
	P_NATIVE_END;
}
// End Class UHealthWidget Function HealthUpdate

// Begin Class UHealthWidget
void UHealthWidget::StaticRegisterNativesUHealthWidget()
{
	UClass* Class = UHealthWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HealthUpdate", &UHealthWidget::execHealthUpdate },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHealthWidget);
UClass* Z_Construct_UClass_UHealthWidget_NoRegister()
{
	return UHealthWidget::StaticClass();
}
struct Z_Construct_UClass_UHealthWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "HealthWidget.h" },
		{ "ModuleRelativePath", "HealthWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthBar_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Stat" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HealthWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainCharacter_MetaData[] = {
		{ "ModuleRelativePath", "HealthWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthBar;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MainCharacter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UHealthWidget_HealthUpdate, "HealthUpdate" }, // 3815940073
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHealthWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHealthWidget_Statics::NewProp_HealthBar = { "HealthBar", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHealthWidget, HealthBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthBar_MetaData), NewProp_HealthBar_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHealthWidget_Statics::NewProp_MainCharacter = { "MainCharacter", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHealthWidget, MainCharacter), Z_Construct_UClass_AMainCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainCharacter_MetaData), NewProp_MainCharacter_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHealthWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHealthWidget_Statics::NewProp_HealthBar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHealthWidget_Statics::NewProp_MainCharacter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHealthWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHealthWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_HorrorGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHealthWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHealthWidget_Statics::ClassParams = {
	&UHealthWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UHealthWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UHealthWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHealthWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UHealthWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHealthWidget()
{
	if (!Z_Registration_Info_UClass_UHealthWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHealthWidget.OuterSingleton, Z_Construct_UClass_UHealthWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHealthWidget.OuterSingleton;
}
template<> HORRORGAME_API UClass* StaticClass<UHealthWidget>()
{
	return UHealthWidget::StaticClass();
}
UHealthWidget::UHealthWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHealthWidget);
UHealthWidget::~UHealthWidget() {}
// End Class UHealthWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_HorrorGame_Source_HorrorGame_HealthWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHealthWidget, UHealthWidget::StaticClass, TEXT("UHealthWidget"), &Z_Registration_Info_UClass_UHealthWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHealthWidget), 4003214525U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HorrorGame_Source_HorrorGame_HealthWidget_h_614593502(TEXT("/Script/HorrorGame"),
	Z_CompiledInDeferFile_FID_HorrorGame_Source_HorrorGame_HealthWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HorrorGame_Source_HorrorGame_HealthWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
