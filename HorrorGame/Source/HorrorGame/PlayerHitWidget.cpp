// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerHitWidget.h"
#include "Components/Image.h"

void UPlayerHitWidget::NativeConstruct()
{
	Super::NativeConstruct();
	if (HitEffectImage)
	{
		HitEffectImage->SetVisibility(ESlateVisibility::Hidden);
	}
}

void UPlayerHitWidget::TakeDamageEffect()
{
	if (HitEffectImage)
	{
		HitEffectImage->SetVisibility(ESlateVisibility::Visible);
		FTimerHandle TimerHandle;
		GetWorld()->GetTimerManager().SetTimer(TimerHandle, [this]()
			{
				if (HitEffectImage)
				{
					HitEffectImage->SetVisibility(ESlateVisibility::Hidden);
				}
			}, 0.2f, false);
	}
}
