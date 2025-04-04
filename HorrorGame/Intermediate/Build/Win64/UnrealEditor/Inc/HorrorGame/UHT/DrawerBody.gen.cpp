// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HorrorGame/DrawerBody.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDrawerBody() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UChildActorComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
HORRORGAME_API UClass* Z_Construct_UClass_ADrawerBody();
HORRORGAME_API UClass* Z_Construct_UClass_ADrawerBody_NoRegister();
UPackage* Z_Construct_UPackage__Script_HorrorGame();
// End Cross Module References

// Begin Class ADrawerBody
void ADrawerBody::StaticRegisterNativesADrawerBody()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADrawerBody);
UClass* Z_Construct_UClass_ADrawerBody_NoRegister()
{
	return ADrawerBody::StaticClass();
}
struct Z_Construct_UClass_ADrawerBody_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "DrawerBody.h" },
		{ "ModuleRelativePath", "DrawerBody.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpMesh_MetaData[] = {
		{ "Category", "DrawerBody" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DrawerBody.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DownMesh_MetaData[] = {
		{ "Category", "DrawerBody" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DrawerBody.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftMesh_MetaData[] = {
		{ "Category", "DrawerBody" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DrawerBody.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightMesh_MetaData[] = {
		{ "Category", "DrawerBody" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DrawerBody.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackMesh_MetaData[] = {
		{ "Category", "DrawerBody" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DrawerBody.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Floor1Mesh_MetaData[] = {
		{ "Category", "DrawerBody" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DrawerBody.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Floor2Mesh_MetaData[] = {
		{ "Category", "DrawerBody" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DrawerBody.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Floor3Mesh_MetaData[] = {
		{ "Category", "DrawerBody" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DrawerBody.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrawerChild1_MetaData[] = {
		{ "Category", "Drawer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DrawerBody.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrawerChild2_MetaData[] = {
		{ "Category", "Drawer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DrawerBody.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrawerChild3_MetaData[] = {
		{ "Category", "Drawer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DrawerBody.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrawerChild4_MetaData[] = {
		{ "Category", "Drawer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DrawerBody.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UpMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DownMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LeftMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RightMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BackMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Floor1Mesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Floor2Mesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Floor3Mesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DrawerChild1;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DrawerChild2;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DrawerChild3;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DrawerChild4;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADrawerBody>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADrawerBody_Statics::NewProp_UpMesh = { "UpMesh", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADrawerBody, UpMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpMesh_MetaData), NewProp_UpMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADrawerBody_Statics::NewProp_DownMesh = { "DownMesh", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADrawerBody, DownMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DownMesh_MetaData), NewProp_DownMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADrawerBody_Statics::NewProp_LeftMesh = { "LeftMesh", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADrawerBody, LeftMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftMesh_MetaData), NewProp_LeftMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADrawerBody_Statics::NewProp_RightMesh = { "RightMesh", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADrawerBody, RightMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightMesh_MetaData), NewProp_RightMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADrawerBody_Statics::NewProp_BackMesh = { "BackMesh", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADrawerBody, BackMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackMesh_MetaData), NewProp_BackMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADrawerBody_Statics::NewProp_Floor1Mesh = { "Floor1Mesh", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADrawerBody, Floor1Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Floor1Mesh_MetaData), NewProp_Floor1Mesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADrawerBody_Statics::NewProp_Floor2Mesh = { "Floor2Mesh", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADrawerBody, Floor2Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Floor2Mesh_MetaData), NewProp_Floor2Mesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADrawerBody_Statics::NewProp_Floor3Mesh = { "Floor3Mesh", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADrawerBody, Floor3Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Floor3Mesh_MetaData), NewProp_Floor3Mesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADrawerBody_Statics::NewProp_DrawerChild1 = { "DrawerChild1", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADrawerBody, DrawerChild1), Z_Construct_UClass_UChildActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrawerChild1_MetaData), NewProp_DrawerChild1_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADrawerBody_Statics::NewProp_DrawerChild2 = { "DrawerChild2", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADrawerBody, DrawerChild2), Z_Construct_UClass_UChildActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrawerChild2_MetaData), NewProp_DrawerChild2_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADrawerBody_Statics::NewProp_DrawerChild3 = { "DrawerChild3", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADrawerBody, DrawerChild3), Z_Construct_UClass_UChildActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrawerChild3_MetaData), NewProp_DrawerChild3_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADrawerBody_Statics::NewProp_DrawerChild4 = { "DrawerChild4", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADrawerBody, DrawerChild4), Z_Construct_UClass_UChildActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrawerChild4_MetaData), NewProp_DrawerChild4_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADrawerBody_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADrawerBody_Statics::NewProp_UpMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADrawerBody_Statics::NewProp_DownMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADrawerBody_Statics::NewProp_LeftMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADrawerBody_Statics::NewProp_RightMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADrawerBody_Statics::NewProp_BackMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADrawerBody_Statics::NewProp_Floor1Mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADrawerBody_Statics::NewProp_Floor2Mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADrawerBody_Statics::NewProp_Floor3Mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADrawerBody_Statics::NewProp_DrawerChild1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADrawerBody_Statics::NewProp_DrawerChild2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADrawerBody_Statics::NewProp_DrawerChild3,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADrawerBody_Statics::NewProp_DrawerChild4,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADrawerBody_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADrawerBody_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_HorrorGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADrawerBody_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADrawerBody_Statics::ClassParams = {
	&ADrawerBody::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ADrawerBody_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ADrawerBody_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADrawerBody_Statics::Class_MetaDataParams), Z_Construct_UClass_ADrawerBody_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADrawerBody()
{
	if (!Z_Registration_Info_UClass_ADrawerBody.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADrawerBody.OuterSingleton, Z_Construct_UClass_ADrawerBody_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADrawerBody.OuterSingleton;
}
template<> HORRORGAME_API UClass* StaticClass<ADrawerBody>()
{
	return ADrawerBody::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADrawerBody);
ADrawerBody::~ADrawerBody() {}
// End Class ADrawerBody

// Begin Registration
struct Z_CompiledInDeferFile_FID_HorrorGame_Source_HorrorGame_DrawerBody_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADrawerBody, ADrawerBody::StaticClass, TEXT("ADrawerBody"), &Z_Registration_Info_UClass_ADrawerBody, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADrawerBody), 2328398790U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HorrorGame_Source_HorrorGame_DrawerBody_h_1163944116(TEXT("/Script/HorrorGame"),
	Z_CompiledInDeferFile_FID_HorrorGame_Source_HorrorGame_DrawerBody_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HorrorGame_Source_HorrorGame_DrawerBody_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
