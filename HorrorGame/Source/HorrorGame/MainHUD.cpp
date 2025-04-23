// Fill out your copyright notice in the Description page of Project Settings.


#include "MainHUD.h"
#include "MainCharacter.h"
#include "Kismet/GameplayStatics.h"

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

		AMainCharacter* MainCharacter = Cast<AMainCharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
		if (MainCharacter)
		{
			InventoryComponent = MainCharacter->InventoryComponent;

			if (InventoryComponent && MainWidget && MainWidget->InventoryWidget)
			{
				InventoryComponent->SetInventoryWidget(MainWidget->InventoryWidget);
			}
		}
	}
}
