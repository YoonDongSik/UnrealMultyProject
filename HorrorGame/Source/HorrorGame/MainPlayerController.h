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
	void ResetMove(const FInputActionValue& Value);
	void InputJump(const FInputActionValue& Value);
	void InputCrouching(const FInputActionValue& Value);
	void InputDrawer(const FInputActionValue& Value);
	void InputInterection(const FInputActionValue& Value);

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

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Mapping")
	class UInputAction* JumpAction = nullptr;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Mapping")
	class UInputAction* CrouchAction = nullptr;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Mapping")
	class UInputAction* DrawerAction = nullptr;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Mapping")
	class UInputAction* InterectionAction = nullptr;

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	bool bIsCrouch = false;

private:
	class AMainCharacter* MainCharacter = nullptr;

	bool bLookOffsetMove = false;

	bool bIsPressed = false;

	bool bIsMoving = false;

	FVector2D MoveValue;
};
