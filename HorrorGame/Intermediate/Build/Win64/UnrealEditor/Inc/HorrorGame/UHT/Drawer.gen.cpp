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
ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTimelineComponent_NoRegister();
HORRORGAME_API UClass* Z_Construct_UClass_ADrawer();
HORRORGAME_API UClass* Z_Construct_UClass_ADrawer_NoRegister();
UPackage* Z_Construct_UPackage__Script_HorrorGame();
// End Cross Module References

// Begin Class ADrawer Function DrawerMove
struct Z_Construct_UFunction_ADrawer_DrawerMove_Statics
{
	struct Drawer_eventDrawerMove_Parms
	{
		float Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Drawer" },
		{ "ModuleRelativePath", "Drawer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADrawer_DrawerMove_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Drawer_eventDrawerMove_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADrawer_DrawerMove_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADrawer_DrawerMove_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADrawer_DrawerMove_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADrawer_DrawerMove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADrawer, nullptr, "DrawerMove", nullptr, nullptr, Z_Construct_UFunction_ADrawer_DrawerMove_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADrawer_DrawerMove_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADrawer_DrawerMove_Statics::Drawer_eventDrawerMove_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADrawer_DrawerMove_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADrawer_DrawerMove_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADrawer_DrawerMove_Statics::Drawer_eventDrawerMove_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADrawer_DrawerMove()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADrawer_DrawerMove_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADrawer::execDrawerMove)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DrawerMove(Z_Param_Value);
	P_NATIVE_END;
}
// End Class ADrawer Function DrawerMove

// Begin Class ADrawer
void ADrawer::StaticRegisterNativesADrawer()
{
	UClass* Class = ADrawer::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DrawerMove", &ADrawer::execDrawerMove },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrawerMesh_MetaData[] = {
		{ "Category", "Drawer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Drawer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurveFloat_MetaData[] = {
		{ "Category", "Drawer" },
		{ "ModuleRelativePath", "Drawer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimelineComponent_MetaData[] = {
		{ "Category", "Drawer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Drawer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DrawerMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurveFloat;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TimelineComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ADrawer_DrawerMove, "DrawerMove" }, // 2527595202
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADrawer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADrawer_Statics::NewProp_DrawerMesh = { "DrawerMesh", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADrawer, DrawerMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrawerMesh_MetaData), NewProp_DrawerMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADrawer_Statics::NewProp_CurveFloat = { "CurveFloat", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADrawer, CurveFloat), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurveFloat_MetaData), NewProp_CurveFloat_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADrawer_Statics::NewProp_TimelineComponent = { "TimelineComponent", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADrawer, TimelineComponent), Z_Construct_UClass_UTimelineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimelineComponent_MetaData), NewProp_TimelineComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADrawer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADrawer_Statics::NewProp_DrawerMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADrawer_Statics::NewProp_CurveFloat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADrawer_Statics::NewProp_TimelineComponent,
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
	FuncInfo,
	Z_Construct_UClass_ADrawer_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
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
		{ Z_Construct_UClass_ADrawer, ADrawer::StaticClass, TEXT("ADrawer"), &Z_Registration_Info_UClass_ADrawer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADrawer), 3072606192U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HorrorGame_Source_HorrorGame_Drawer_h_1308935053(TEXT("/Script/HorrorGame"),
	Z_CompiledInDeferFile_FID_HorrorGame_Source_HorrorGame_Drawer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HorrorGame_Source_HorrorGame_Drawer_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
