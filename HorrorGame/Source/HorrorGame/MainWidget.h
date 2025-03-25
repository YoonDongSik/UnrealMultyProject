// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SteminaWidget.h"
#include "MainCharacter.h"
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

	UPROPERTY(BlueprintCallable)
	void ShowStemina();
	
protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stat", meta = (BindWidget))
	USteminaWidget* SteminaWidget;

private:
	UPROPERTY()
	AMainCharacter* MainCharacter;
};
