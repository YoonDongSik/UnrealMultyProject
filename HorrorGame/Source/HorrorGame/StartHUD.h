// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "StartTitleWidget.h"
#include "StartHUD.generated.h"

/**
 * 
 */
UCLASS()
class HORRORGAME_API AStartHUD : public AHUD
{
	GENERATED_BODY()
	
protected:
	virtual void BeginPlay() override;

public:
	UPROPERTY()
	UStartTitleWidget* StartTitleWidget = nullptr;

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "UI")
	TSubclassOf<UUserWidget> StartTitleClass;
};
