// Fill out your copyright notice in the Description page of Project Settings.


#include "StartHUD.h"

void AStartHUD::BeginPlay()
{
	Super::BeginPlay();

	if (StartTitleClass)
	{
		UWorld* World = GetWorld();

		StartTitleWidget = CreateWidget<UStartTitleWidget>(World, StartTitleClass);
		if (StartTitleWidget)
		{
			StartTitleWidget->AddToViewport();
		}
		APlayerController* PlayerController = GetWorld()->GetFirstPlayerController();
		if (PlayerController)
		{
			PlayerController->bShowMouseCursor = true;
		}
	}
}

