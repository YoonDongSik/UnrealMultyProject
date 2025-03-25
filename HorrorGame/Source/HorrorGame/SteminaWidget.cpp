// Fill out your copyright notice in the Description page of Project Settings.


#include "SteminaWidget.h"

void USteminaWidget::SteminaUpdate(float SteminaPercent)
{
	if (SteminaBar)
	{
		SteminaBar->SetPercent(SteminaPercent);
	}
}
