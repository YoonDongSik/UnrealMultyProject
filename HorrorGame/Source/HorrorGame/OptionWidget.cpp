// Fill out your copyright notice in the Description page of Project Settings.


#include "OptionWidget.h"
#include "Kismet/GameplayStatics.h"
#include "MainPlayerController.h"

void UOptionWidget::NativeConstruct()
{
    Super::NativeConstruct();

    SetVisibility(ESlateVisibility::Hidden);

    if (SensitivitySlider)
    {
        SensitivitySlider->OnValueChanged.AddDynamic(this, &UOptionWidget::OnSensitivityChanged);
    }

    if (CloseButton)
    {
        CloseButton->OnClicked.AddDynamic(this, &UOptionWidget::OnClickCloseButton);
    }
}

void UOptionWidget::OnSensitivityChanged(float Value)
{
    if (SensitivityValueText)
    {
        SensitivityValueText->SetText(FText::AsNumber(Value));
    }

    APlayerController* PC = GetWorld()->GetFirstPlayerController();
    if (AMainPlayerController* MPC = Cast<AMainPlayerController>(PC))
    {
        MPC->SetMouseSensitivity(Value);
    }
}

void UOptionWidget::OnClickCloseButton()
{
    SetVisibility(ESlateVisibility::Hidden);
}
