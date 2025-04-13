// Fill out your copyright notice in the Description page of Project Settings.

#include "ItemDataAsset.h"

UItemDataAsset::UItemDataAsset()
{
	ItemName = FText::FromString(TEXT("아이템"));
	ItemDescription = FText::FromString(TEXT("아이템 설명"));
	ItemIcon = nullptr;
	ItemMesh = nullptr;
	ItemType = EItemType::None;
}
