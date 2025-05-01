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
HORRORGAME_API UClass* Z_Construct_UClass_AMainCharacter_NoRegister();
HORRORGAME_API UClass* Z_Construct_UClass_USteminaWidget();
HORRORGAME_API UClass* Z_Construct_UClass_USteminaWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_HorrorGame();
// End Cross Module References

// Begin Class USteminaWidget Function SteminaUpdate
struct Z_Construct_UFunction_USteminaWidget_SteminaUpdate_Statics
{
	struct SteminaWidget_eventSteminaUpdate_Parms
	{
		float SteminaPercent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SteminaWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SteminaPercent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteminaWidget_SteminaUpdate_Statics::NewProp_SteminaPercent = { "SteminaPercent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteminaWidget_eventSteminaUpdate_Parms, SteminaPercent), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteminaWidget_SteminaUpdate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteminaWidget_SteminaUpdate_Statics::NewProp_SteminaPercent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteminaWidget_SteminaUpdate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteminaWidget_SteminaUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteminaWidget, nullptr, "SteminaUpdate", nullptr, nullptr, Z_Construct_UFunction_USteminaWidget_SteminaUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteminaWidget_SteminaUpdate_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteminaWidget_SteminaUpdate_Statics::SteminaWidget_eventSteminaUpdate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteminaWidget_SteminaUpdate_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteminaWidget_SteminaUpdate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteminaWidget_SteminaUpdate_Statics::SteminaWidget_eventSteminaUpdate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteminaWidget_SteminaUpdate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteminaWidget_SteminaUpdate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteminaWidget::execSteminaUpdate)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_SteminaPercent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SteminaUpdate(Z_Param_SteminaPercent);
	P_NATIVE_END;
}
// End Class USteminaWidget Function SteminaUpdate

// Begin Class USteminaWidget
void USteminaWidget::StaticRegisterNativesUSteminaWidget()
{
	UClass* Class = USteminaWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SteminaUpdate", &USteminaWidget::execSteminaUpdate },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainCharacter_MetaData[] = {
		{ "ModuleRelativePath", "SteminaWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SteminaBar;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MainCharacter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteminaWidget_SteminaUpdate, "SteminaUpdate" }, // 3540980167
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteminaWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USteminaWidget_Statics::NewProp_SteminaBar = { "SteminaBar", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteminaWidget, SteminaBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteminaBar_MetaData), NewProp_SteminaBar_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USteminaWidget_Statics::NewProp_MainCharacter = { "MainCharacter", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteminaWidget, MainCharacter), Z_Construct_UClass_AMainCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainCharacter_MetaData), NewProp_MainCharacter_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteminaWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteminaWidget_Statics::NewProp_SteminaBar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteminaWidget_Statics::NewProp_MainCharacter,
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
	FuncInfo,
	Z_Construct_UClass_USteminaWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
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
		{ Z_Construct_UClass_USteminaWidget, USteminaWidget::StaticClass, TEXT("USteminaWidget"), &Z_Registration_Info_UClass_USteminaWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteminaWidget), 2181702776U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HorrorGame_Source_HorrorGame_SteminaWidget_h_2117625463(TEXT("/Script/HorrorGame"),
	Z_CompiledInDeferFile_FID_HorrorGame_Source_HorrorGame_SteminaWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HorrorGame_Source_HorrorGame_SteminaWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
