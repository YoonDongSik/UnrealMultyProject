// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ItemDataAsset.h"
#include "MainCharacter.h"
#include "UserbleItem.generated.h"

/**
 * 
 */
UCLASS()
class HORRORGAME_API UUserbleItem : public UObject
{
	GENERATED_BODY()
	
public:
	void UseItem (AMainCharacter* Character, UItemDataAsset* DataAsset);

};
