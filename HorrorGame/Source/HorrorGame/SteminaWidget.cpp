// Fill out your copyright notice in the Description page of Project Settings.


#include "SteminaWidget.h"

void USteminaWidget::SteminaUpdate(float SteminaPercent)
{
	//GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Yellow, FString::Printf(TEXT("SteminaUpdate called with value: %.2f"), SteminaPercent));
	if (SteminaBar)
	{
		SteminaBar->SetPercent(SteminaPercent);
	}

	if (SteminaPercent >= 1.0f)
	{
		SetVisibility(ESlateVisibility::Hidden);
	}
	else
	{
		SetVisibility(ESlateVisibility::Visible);
	}
}
