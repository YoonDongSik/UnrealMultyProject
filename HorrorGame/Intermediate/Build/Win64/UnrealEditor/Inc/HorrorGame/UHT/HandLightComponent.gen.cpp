// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HorrorGame/HandLightComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHandLightComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
ENGINE_API UClass* Z_Construct_UClass_USpotLightComponent_NoRegister();
HORRORGAME_API UClass* Z_Construct_UClass_AItemBaseActor_NoRegister();
HORRORGAME_API UClass* Z_Construct_UClass_UHandLightComponent();
HORRORGAME_API UClass* Z_Construct_UClass_UHandLightComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_HorrorGame();
// End Cross Module References

// Begin Class UHandLightComponent Function ToggleLight
struct Z_Construct_UFunction_UHandLightComponent_ToggleLight_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HandLightComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHandLightComponent_ToggleLight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHandLightComponent, nullptr, "ToggleLight", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHandLightComponent_ToggleLight_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHandLightComponent_ToggleLight_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UHandLightComponent_ToggleLight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHandLightComponent_ToggleLight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHandLightComponent::execToggleLight)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ToggleLight();
	P_NATIVE_END;
}
// End Class UHandLightComponent Function ToggleLight

// Begin Class UHandLightComponent
void UHandLightComponent::StaticRegisterNativesUHandLightComponent()
{
	UClass* Class = UHandLightComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ToggleLight", &UHandLightComponent::execToggleLight },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHandLightComponent);
UClass* Z_Construct_UClass_UHandLightComponent_NoRegister()
{
	return UHandLightComponent::StaticClass();
}
struct Z_Construct_UClass_UHandLightComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "HandLightComponent.h" },
		{ "ModuleRelativePath", "HandLightComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemBaseActor_MetaData[] = {
		{ "Category", "Light" },
		{ "ModuleRelativePath", "HandLightComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HandLight_MetaData[] = {
		{ "Category", "Light" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HandLightComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsLightOn_MetaData[] = {
		{ "Category", "Light" },
		{ "ModuleRelativePath", "HandLightComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemBaseActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HandLight;
	static void NewProp_bIsLightOn_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLightOn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UHandLightComponent_ToggleLight, "ToggleLight" }, // 614231202
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHandLightComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHandLightComponent_Statics::NewProp_ItemBaseActor = { "ItemBaseActor", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHandLightComponent, ItemBaseActor), Z_Construct_UClass_AItemBaseActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemBaseActor_MetaData), NewProp_ItemBaseActor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHandLightComponent_Statics::NewProp_HandLight = { "HandLight", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHandLightComponent, HandLight), Z_Construct_UClass_USpotLightComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandLight_MetaData), NewProp_HandLight_MetaData) };
void Z_Construct_UClass_UHandLightComponent_Statics::NewProp_bIsLightOn_SetBit(void* Obj)
{
	((UHandLightComponent*)Obj)->bIsLightOn = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHandLightComponent_Statics::NewProp_bIsLightOn = { "bIsLightOn", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHandLightComponent), &Z_Construct_UClass_UHandLightComponent_Statics::NewProp_bIsLightOn_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsLightOn_MetaData), NewProp_bIsLightOn_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHandLightComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHandLightComponent_Statics::NewProp_ItemBaseActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHandLightComponent_Statics::NewProp_HandLight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHandLightComponent_Statics::NewProp_bIsLightOn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHandLightComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHandLightComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_HorrorGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHandLightComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHandLightComponent_Statics::ClassParams = {
	&UHandLightComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UHandLightComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UHandLightComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHandLightComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UHandLightComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHandLightComponent()
{
	if (!Z_Registration_Info_UClass_UHandLightComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHandLightComponent.OuterSingleton, Z_Construct_UClass_UHandLightComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHandLightComponent.OuterSingleton;
}
template<> HORRORGAME_API UClass* StaticClass<UHandLightComponent>()
{
	return UHandLightComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHandLightComponent);
UHandLightComponent::~UHandLightComponent() {}
// End Class UHandLightComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_HorrorGame_Source_HorrorGame_HandLightComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHandLightComponent, UHandLightComponent::StaticClass, TEXT("UHandLightComponent"), &Z_Registration_Info_UClass_UHandLightComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHandLightComponent), 2422590693U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HorrorGame_Source_HorrorGame_HandLightComponent_h_2651040532(TEXT("/Script/HorrorGame"),
	Z_CompiledInDeferFile_FID_HorrorGame_Source_HorrorGame_HandLightComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HorrorGame_Source_HorrorGame_HandLightComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
