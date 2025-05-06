// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Slider.h"
#include "Components/TextBlock.h"
#include "Components/Button.h"
#include "OptionWidget.generated.h"

/**
 * 
 */
UCLASS()
class HORRORGAME_API UOptionWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:
    virtual void NativeConstruct() override;

protected:
    UPROPERTY(meta = (BindWidget))
    USlider* SensitivitySlider;

    UPROPERTY(meta = (BindWidgetOptional))
    UTextBlock* SensitivityValueText;

    UPROPERTY(meta = (BindWidget))
    UButton* CloseButton;

private:
    UFUNCTION()
    void OnSensitivityChanged(float Value);

    UFUNCTION()
    void OnClickCloseButton();
};
