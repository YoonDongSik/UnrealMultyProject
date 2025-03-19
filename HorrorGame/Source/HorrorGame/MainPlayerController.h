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
	void InputLook(const FInputActionValue& Value);
	void InputLookOffsetMove(const FInputActionValue& Value);
	void InputRun(const FInputActionValue& Value);

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Mapping")
	class UInputMappingContext* InputMappingContext = nullptr;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Mapping")
	class UInputAction* MoveAction = nullptr;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Mapping")
	class UInputAction* LookAction = nullptr;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Mapping")
	class UInputAction* LookOffsetMoveAction = nullptr;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Mapping")
	class UInputAction* RunAction = nullptr;
private:
	class AMainCharacter* MainCharacter = nullptr;

	bool bLookOffsetMove = false;
};
