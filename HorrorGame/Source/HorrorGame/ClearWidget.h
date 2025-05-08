// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Button.h"
#include "LadderActor.h"
#include "ClearWidget.generated.h"

/**
 * 
 */
UCLASS()
class HORRORGAME_API UClearWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	void NativeConstruct() override;
	
protected:
	void OnMainButtonClicked();
	void OnQuitButtonClicked();

protected:
	UPROPERTY(meta = (BindWidget))
	UButton* MainButton;
	UPROPERTY(meta = (BindWidget))
	UButton* QuitButton;

	UPROPERTY()
	ALadderActor* LadderActor;

	APlayerController* PlayerController;
};
