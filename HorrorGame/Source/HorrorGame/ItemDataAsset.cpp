// Fill out your copyright notice in the Description page of Project Settings.

#include "ItemDataAsset.h"

UItemDataAsset::UItemDataAsset()
{
	ItemName = FText::FromString(TEXT("아이템"));
	ItemDescription = FText::FromString(TEXT("아이템 설명"));
	ItemIcon = nullptr;
	ItemMesh = nullptr;
	ItemID = EItemID::None;
	ItemType = EItemType::None;
	AttackSpawnClass = nullptr;
	ItemScale = FVector(1.0f, 1.0f, 1.0f);
}
