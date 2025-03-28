// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/ProgressBar.h"
#include "MainCharacter.h"
#include "SteminaWidget.generated.h"

/**
 * 
 */
UCLASS()
class HORRORGAME_API USteminaWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	UFUNCTION()
	void SteminaUpdate(float SteminaPercent);

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Stat", meta = (BindWidget))
	class UProgressBar* SteminaBar;

private:
	UPROPERTY()
	AMainCharacter* MainCharacter;
};
