// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SteminaWidget.h"
#include "CrosshairWidget.h"
#include "HealthWidget.h"
#include "InventoryWidget.h"
#include "ItemSlotWidget.h"
#include "PlayerHitWidget.h"
#include "ClearWidget.h"
#include "DeathScreen.h"
#include "MainWidget.generated.h"

class UInventoryWidget;

/**
 * 
 */
UCLASS()
class HORRORGAME_API UMainWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	virtual void NativeConstruct() override;
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI", meta = (BindWidget))
	UClearWidget* ClearWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI", meta = (BindWidget))
	UDeathScreen* DeathScreen;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI", meta = (BindWidget))
	UPlayerHitWidget* PlayerHitWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI", meta = (BindWidget))
	UCanvasPanel* InventoryPanel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI", meta = (BindWidget))
	UInventoryWidget* InventoryWidget;

	UFUNCTION(BlueprintCallable)
	void SetupInventorySlotClass(TSubclassOf<UItemSlotWidget> InSlotClass);

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stat", meta = (BindWidget))
	USteminaWidget* SteminaWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CrossHair", meta = (BindWidget))
	UCrosshairWidget* CrosshairWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stat", meta = (BindWidget))
	UHealthWidget* HealthWidget;

private:
	UPROPERTY()
	class AMainCharacter* MainCharacter;
};
