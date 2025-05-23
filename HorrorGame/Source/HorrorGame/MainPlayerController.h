// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "InputActionValue.h"
#include "MainWidget.h"
#include "MainPlayerController.generated.h"

class UInventoryWidget;

/**
 * 
 */
UCLASS()
class HORRORGAME_API AMainPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	AMainPlayerController();

	UFUNCTION(BlueprintCallable, Category = "Input")
	void SetMouseSensitivity(float NewSensitivity);

	void SetMainWidget(UMainWidget* InWidget);

	UFUNCTION(BlueprintCallable)
	UMainWidget* GetMainWidget() const { return MainWidget; }

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "UI")
	TSubclassOf<UMainWidget> MainWidgetClass;

	UPROPERTY()
	UMainWidget* MainWidget;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	class UInputAction* IA_ToggleInventory;

	UPROPERTY(meta = (BindWidget))   // 반드시 BindWidget 붙여야 됨
	UInventoryWidget* InventoryWidget;

	void ToggleInventory(); // 함수 선언

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	bool bIsPickUp = false;

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
	void InputClick(const FInputActionValue& Value);
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

	bool bCanToggleInventory = true;

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	bool bIsCrouch = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
	float MouseSensitivity = 1.0f;

private:
	class AMainCharacter* MainCharacter = nullptr;

	bool bLookOffsetMove = false;

	bool bIsPressed = false;

	bool bIsMoving = false;

	FVector2D MoveValue;
};
