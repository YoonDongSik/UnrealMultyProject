// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HorrorGame/EItemCollisionType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEItemCollisionType() {}

// Begin Cross Module References
HORRORGAME_API UEnum* Z_Construct_UEnum_HorrorGame_EItemCollisionType();
UPackage* Z_Construct_UPackage__Script_HorrorGame();
// End Cross Module References

// Begin Enum EItemCollisionType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EItemCollisionType;
static UEnum* EItemCollisionType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EItemCollisionType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EItemCollisionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HorrorGame_EItemCollisionType, (UObject*)Z_Construct_UPackage__Script_HorrorGame(), TEXT("EItemCollisionType"));
	}
	return Z_Registration_Info_UEnum_EItemCollisionType.OuterSingleton;
}
template<> HORRORGAME_API UEnum* StaticEnum<EItemCollisionType>()
{
	return EItemCollisionType_StaticEnum();
}
struct Z_Construct_UEnum_HorrorGame_EItemCollisionType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Box.Name", "EItemCollisionType::Box" },
		{ "Capsule.Name", "EItemCollisionType::Capsule" },
		{ "ModuleRelativePath", "EItemCollisionType.h" },
		{ "None.Name", "EItemCollisionType::None" },
		{ "Sphere.Name", "EItemCollisionType::Sphere" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EItemCollisionType::None", (int64)EItemCollisionType::None },
		{ "EItemCollisionType::Box", (int64)EItemCollisionType::Box },
		{ "EItemCollisionType::Capsule", (int64)EItemCollisionType::Capsule },
		{ "EItemCollisionType::Sphere", (int64)EItemCollisionType::Sphere },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HorrorGame_EItemCollisionType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HorrorGame,
	nullptr,
	"EItemCollisionType",
	"EItemCollisionType",
	Z_Construct_UEnum_HorrorGame_EItemCollisionType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HorrorGame_EItemCollisionType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HorrorGame_EItemCollisionType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HorrorGame_EItemCollisionType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HorrorGame_EItemCollisionType()
{
	if (!Z_Registration_Info_UEnum_EItemCollisionType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EItemCollisionType.InnerSingleton, Z_Construct_UEnum_HorrorGame_EItemCollisionType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EItemCollisionType.InnerSingleton;
}
// End Enum EItemCollisionType

// Begin Registration
struct Z_CompiledInDeferFile_FID_HorrorGame_Source_HorrorGame_EItemCollisionType_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EItemCollisionType_StaticEnum, TEXT("EItemCollisionType"), &Z_Registration_Info_UEnum_EItemCollisionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1193365791U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HorrorGame_Source_HorrorGame_EItemCollisionType_h_2953179258(TEXT("/Script/HorrorGame"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_HorrorGame_Source_HorrorGame_EItemCollisionType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HorrorGame_Source_HorrorGame_EItemCollisionType_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
