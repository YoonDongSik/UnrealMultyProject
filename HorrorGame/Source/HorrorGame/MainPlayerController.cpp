// Fill out your copyright notice in the Description page of Project Settings.


#include "MainPlayerController.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "MainCharacter.h"

AMainPlayerController::AMainPlayerController()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AMainPlayerController::BeginPlay()
{
	Super::BeginPlay();

	ULocalPlayer* LocalPlayer = GetLocalPlayer();
	if (LocalPlayer)
	{
		UEnhancedInputLocalPlayerSubsystem* LocalPlayerSubsystem = LocalPlayer->GetSubsystem<UEnhancedInputLocalPlayerSubsystem>();
		if (LocalPlayerSubsystem && InputMappingContext)
		{
			LocalPlayerSubsystem->AddMappingContext(InputMappingContext, 0);
		}
	}
}

void AMainPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(InputComponent);
	if (EnhancedInputComponent)
	{
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AMainPlayerController::InputMove);
		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &AMainPlayerController::InputLook);
		EnhancedInputComponent->BindAction(LookOffsetMoveAction, ETriggerEvent::Started, this, &AMainPlayerController::InputLookOffsetMove);
	}
}

void AMainPlayerController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);
	MainCharacter = Cast<AMainCharacter>(InPawn);
}

void AMainPlayerController::OnUnPossess()
{
	MainCharacter = nullptr;
	Super::OnUnPossess();
}

void AMainPlayerController::InputMove(const FInputActionValue& Value)
{
	if (MainCharacter)
	{
		FVector2D MoveValue = Value.Get<FVector2D>();

		float Size = MoveValue.Size();
		if (Size > 1.0f)
		{
			MoveValue /= Size;
		}

		FVector MoveDirection = FVector(MoveValue.Y, MoveValue.X, 0.0f);

		FQuat YawRotation = FRotator(0.0f, GetControlRotation().Yaw, 0.0f).Quaternion();
		MoveDirection = YawRotation.RotateVector(MoveDirection);

		MainCharacter->Movement(MoveDirection);
	}
}

void AMainPlayerController::InputLook(const FInputActionValue& Value)
{
	FVector2D InputValue = Value.Get<FVector2D>();

	AddYawInput(InputValue.X);
	AddPitchInput(InputValue.Y);
}

void AMainPlayerController::InputLookOffsetMove(const FInputActionValue& Value)
{
	bLookOffsetMove = !bLookOffsetMove;
	if (bLookOffsetMove)
	{
	USpringArmComponent* SpringArmOffset = MainCharacter->GetSpringArm();
	SpringArmOffset->TargetArmLength = 300.0f;

	}
	else
	{
		USpringArmComponent* SpringArmOffset = MainCharacter->GetSpringArm();
		SpringArmOffset->TargetArmLength = 100.0f;
	}

}
