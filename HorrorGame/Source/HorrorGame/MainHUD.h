// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "MainWidget.h"
#include "UInventoryComponent.h"
#include "MainHUD.generated.h"

/**
 * 
 */
UCLASS()
class HORRORGAME_API AMainHUD : public AHUD
{
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;

public:
	UPROPERTY()
	UMainWidget* MainWidget = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "UI")
	TSubclassOf<UItemSlotWidget> WBP_ItemSlotClass;
	
protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "UI")
	TSubclassOf<UUserWidget> MainWidgetClass;

	UPROPERTY()
	UInventoryComponent* InventoryComponent;
};
