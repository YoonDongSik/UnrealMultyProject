// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "OptionWidget.h"
#include "Components/Button.h"
#include "StartTitleWidget.generated.h"

/**
 * 
 */
UCLASS()
class HORRORGAME_API UStartTitleWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	void NativeConstruct() override;

protected:
	UFUNCTION()
	void OnStartButtonClicked();

	UFUNCTION()
	void OnQuitButtonClicked();

	UFUNCTION()
	void OnOptionButtonClicked();

protected:
	UPROPERTY(meta = (BindWidget))
	UButton* StartButton;

	UPROPERTY(meta = (BindWidget))
	UButton* OptionButton;

	UPROPERTY(meta = (BindWidget))
	UButton* QuitButton;

	UPROPERTY(meta = (BindWidget))
	UOptionWidget* OptionWidget;

	APlayerController* PlayerController = nullptr;
};
