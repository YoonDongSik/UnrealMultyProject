// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/ProgressBar.h"
#include "Components/TextBlock.h"
#include "MainCharacter.h"
#include "HealthWidget.generated.h"

/**
 * 
 */
UCLASS()
class HORRORGAME_API UHealthWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:
	UFUNCTION()
	void HealthUpdate(float HealthPercent);

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Stat", meta = (BindWidget))
	class UProgressBar* HealthBar;

	UPROPERTY()
	class AMainCharacter* MainCharacter;
};
