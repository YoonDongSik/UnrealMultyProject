// Fill out your copyright notice in the Description page of Project Settings.


#include "ClearWidget.h"
#include "Kismet/GameplayStatics.h"

void UClearWidget::NativeConstruct()
{
	Super::NativeConstruct();

	SetVisibility(ESlateVisibility::Hidden);

	if (MainButton)
	{
		MainButton->OnClicked.AddDynamic(this, &UClearWidget::OnMainButtonClicked);
	}
	if (QuitButton)
	{
		QuitButton->OnClicked.AddDynamic(this, &UClearWidget::OnQuitButtonClicked);
	}
}

void UClearWidget::OnMainButtonClicked()
{
	RemoveFromViewport();
	UGameplayStatics::OpenLevel(this, "StartMap");
}

void UClearWidget::OnQuitButtonClicked()
{
	if (PlayerController)
	{
		UKismetSystemLibrary::QuitGame(this, PlayerController, EQuitPreference::Quit, true);
	}
}
