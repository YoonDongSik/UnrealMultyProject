// Fill out your copyright notice in the Description page of Project Settings.


#include "MainHUD.h"

void AMainHUD::BeginPlay()
{
	Super::BeginPlay();

	if (MainWidgetClass)
	{
		UWorld* World = GetWorld();

		MainWidget = CreateWidget<UMainWidget>(World, MainWidgetClass);
		if (MainWidget)
		{
			MainWidget->AddToViewport();
		}
	}
}
