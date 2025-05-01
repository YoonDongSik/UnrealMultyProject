// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HorrorGame/EItemType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEItemType() {}

// Begin Cross Module References
HORRORGAME_API UEnum* Z_Construct_UEnum_HorrorGame_EItemType();
UPackage* Z_Construct_UPackage__Script_HorrorGame();
// End Cross Module References

// Begin Enum EItemType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EItemType;
static UEnum* EItemType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EItemType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EItemType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HorrorGame_EItemType, (UObject*)Z_Construct_UPackage__Script_HorrorGame(), TEXT("EItemType"));
	}
	return Z_Registration_Info_UEnum_EItemType.OuterSingleton;
}
template<> HORRORGAME_API UEnum* StaticEnum<EItemType>()
{
	return EItemType_StaticEnum();
}
struct Z_Construct_UEnum_HorrorGame_EItemType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Adrenaline.Name", "EItemType::Adrenaline" },
		{ "Bandage.Name", "EItemType::Bandage" },
		{ "BlueprintType", "true" },
		{ "ElectricOrb.Name", "EItemType::ElectricOrb" },
		{ "HandLight.Name", "EItemType::HandLight" },
		{ "HealthKit.Name", "EItemType::HealthKit" },
		{ "IceOrb.Name", "EItemType::IceOrb" },
		{ "ModuleRelativePath", "EItemType.h" },
		{ "None.Name", "EItemType::None" },
		{ "Painkiller.Name", "EItemType::Painkiller" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EItemType::None", (int64)EItemType::None },
		{ "EItemType::Adrenaline", (int64)EItemType::Adrenaline },
		{ "EItemType::HealthKit", (int64)EItemType::HealthKit },
		{ "EItemType::Bandage", (int64)EItemType::Bandage },
		{ "EItemType::Painkiller", (int64)EItemType::Painkiller },
		{ "EItemType::ElectricOrb", (int64)EItemType::ElectricOrb },
		{ "EItemType::IceOrb", (int64)EItemType::IceOrb },
		{ "EItemType::HandLight", (int64)EItemType::HandLight },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HorrorGame_EItemType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HorrorGame,
	nullptr,
	"EItemType",
	"EItemType",
	Z_Construct_UEnum_HorrorGame_EItemType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HorrorGame_EItemType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HorrorGame_EItemType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HorrorGame_EItemType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HorrorGame_EItemType()
{
	if (!Z_Registration_Info_UEnum_EItemType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EItemType.InnerSingleton, Z_Construct_UEnum_HorrorGame_EItemType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EItemType.InnerSingleton;
}
// End Enum EItemType

// Begin Registration
struct Z_CompiledInDeferFile_FID_HorrorGame_Source_HorrorGame_EItemType_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EItemType_StaticEnum, TEXT("EItemType"), &Z_Registration_Info_UEnum_EItemType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1436439228U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HorrorGame_Source_HorrorGame_EItemType_h_3215597093(TEXT("/Script/HorrorGame"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_HorrorGame_Source_HorrorGame_EItemType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HorrorGame_Source_HorrorGame_EItemType_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
