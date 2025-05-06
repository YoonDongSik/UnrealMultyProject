// Fill out your copyright notice in the Description page of Project Settings.


#include "StartTitleWidget.h"
#include "Kismet/GameplayStatics.h"

void UStartTitleWidget::NativeConstruct()
{
	Super::NativeConstruct();

	PlayerController = GetWorld()->GetFirstPlayerController();

	StartButton->OnClicked.AddDynamic(this, &UStartTitleWidget::OnStartButtonClicked);
	OptionButton->OnClicked.AddDynamic(this, &UStartTitleWidget::OnOptionButtonClicked);
	QuitButton->OnClicked.AddDynamic(this, &UStartTitleWidget::OnQuitButtonClicked);

}

void UStartTitleWidget::OnStartButtonClicked()
{
	if (PlayerController)
	{
		PlayerController->bShowMouseCursor = false;
	}
	RemoveFromViewport();
	UGameplayStatics::OpenLevel(this, "MainStage1");
}

void UStartTitleWidget::OnQuitButtonClicked()
{
	if (PlayerController)
	{
		UKismetSystemLibrary::QuitGame(this, PlayerController, EQuitPreference::Quit, true);
	}
}

void UStartTitleWidget::OnOptionButtonClicked()
{
	if (OptionWidget)
	{
		OptionWidget->SetVisibility(ESlateVisibility::Visible);
	}
}
