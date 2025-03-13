// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "InputActionValue.h"
#include "MainPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class HORRORGAME_API AMainPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	AMainPlayerController();

protected:
	virtual void BeginPlay() override;
	virtual void SetupInputComponent() override;

	virtual void OnPossess(APawn* InPawn) override;
	virtual void OnUnPossess() override;

	void InputMove(const FInputActionValue& Value);

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Mapping")
	class UInputMappingContext* InputMappingContext = nullptr;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Mapping")
	class UInputAction* MoveAction = nullptr;

private:
	class AMainCharacter* MainCharacter = nullptr;
};
