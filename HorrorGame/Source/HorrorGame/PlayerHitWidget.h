// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "PlayerHitWidget.generated.h"

/**
 * 
 */
UCLASS()
class HORRORGAME_API UPlayerHitWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:

	void NativeConstruct() override;

	UFUNCTION()
	void TakeDamageEffect();


protected:
	UPROPERTY(meta = (BindWidget))
	class UImage* HitEffectImage;
};
