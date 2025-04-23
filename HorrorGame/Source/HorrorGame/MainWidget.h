// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SteminaWidget.h"
#include "CrosshairWidget.h"
#include "HealthWidget.h"
#include "InventoryWidget.h"
#include "MainWidget.generated.h"

/**
 * 
 */
UCLASS()
class HORRORGAME_API UMainWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	virtual void NativeConstruct() override;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "InventoryWidget", meta = (BindWidget))
	UInventoryWidget* InventoryWidget;
protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stat", meta = (BindWidget))
	USteminaWidget* SteminaWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CrossHair", meta = (BindWidget))
	UCrosshairWidget* CrosshairWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stat", meta = (BindWidget))
	UHealthWidget* HealthWidget;

	/*UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "InventoryWidget", meta = (BindWidget))
	UInventoryWidget* InventoryWidget;*/

private:
	UPROPERTY()
	class AMainCharacter* MainCharacter;
};
