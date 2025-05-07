// Fill out your copyright notice in the Description page of Project Settings.


#include "MainWidget.h"
#include "MainCharacter.h"
#include "SteminaWidget.h"
#include "HealthWidget.h"
#include "InventoryWidget.h"

void UMainWidget::NativeConstruct()
{
	Super::NativeConstruct();

	APlayerController* PlayerController = GetOwningPlayer();
	if (PlayerController)
	{
		MainCharacter = Cast<AMainCharacter>(PlayerController->GetPawn());
	}
	if (MainCharacter && SteminaWidget)
	{
		MainCharacter->OnStaminaChanged.AddDynamic(SteminaWidget, &USteminaWidget::SteminaUpdate);
	}
	if (MainCharacter && HealthWidget)
	{
		MainCharacter->OnHealthChanged.AddDynamic(HealthWidget, &UHealthWidget::HealthUpdate);
	}
}

void UMainWidget::SetupInventorySlotClass(TSubclassOf<UItemSlotWidget> InSlotClass)
{
	if (InventoryWidget)
	{
		InventoryWidget->ItemSlotClass = InSlotClass;
		//UE_LOG(LogTemp, Warning, TEXT("✅ ItemSlotClass 전달 완료: %s"), *InSlotClass->GetName());
	}
	//else
	//{
	//	UE_LOG(LogTemp, Error, TEXT("❌ InventoryWidget가 nullptr"));
	//}
}

