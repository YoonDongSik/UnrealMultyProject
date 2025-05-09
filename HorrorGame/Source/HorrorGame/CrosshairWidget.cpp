// Fill out your copyright notice in the Description page of Project Settings.


#include "CrosshairWidget.h"

void UCrosshairWidget::NativeConstruct()
{
    Super::NativeConstruct();

    if (CrosshairImage && CrosshairTexture)
    {
        CrosshairImage->SetBrushFromTexture(CrosshairTexture);
    }
}
