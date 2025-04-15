// Fill out your copyright notice in the Description page of Project Settings.


#include "MainPlayerController.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "MainCharacter.h"
#include "Drawer.h"
#include "Components/SceneComponent.h"
#include "ItemBaseActor.h"

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
		if (MoveAction)
		{
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AMainPlayerController::InputMove);
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Completed, this, &AMainPlayerController::ResetMove);
		}

		if (LookAction)
		{
		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &AMainPlayerController::InputLook);
		}

		if (LookOffsetMoveAction)
		{
		EnhancedInputComponent->BindAction(LookOffsetMoveAction, ETriggerEvent::Started, this, &AMainPlayerController::InputLookOffsetMove);
		}

		if (RunAction)
		{
			EnhancedInputComponent->BindAction(RunAction, ETriggerEvent::Started, this, &AMainPlayerController::InputRun);
			EnhancedInputComponent->BindAction(RunAction, ETriggerEvent::Completed, this, &AMainPlayerController::InputRun);
		}

		if (JumpAction)
		{
			EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Started, this, &AMainPlayerController::InputJump);
		}

		if (CrouchAction)
		{
			EnhancedInputComponent->BindAction(CrouchAction, ETriggerEvent::Started, this, &AMainPlayerController::InputCrouching);
		}

		if (DrawerAction)
		{
			EnhancedInputComponent->BindAction(DrawerAction, ETriggerEvent::Started, this, &AMainPlayerController::InputClick);
		}

		if (InterectionAction)
		{
			EnhancedInputComponent->BindAction(InterectionAction, ETriggerEvent::Started, this, &AMainPlayerController::InputInterection);
		}
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
	bIsMoving = true;
	if (MainCharacter)
	{
		MoveValue = Value.Get<FVector2D>();

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

void AMainPlayerController::ResetMove(const FInputActionValue& Value)
{
	bIsMoving = false;
	MainCharacter->SetWalkMode();
	GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Green, FString::Printf(TEXT("WalkMode")));
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
	MainCharacter->GetCharacterMovement()->bOrientRotationToMovement = true;
	MainCharacter->bUseControllerRotationYaw = false;
	}
	else
	{
		USpringArmComponent* SpringArmOffset = MainCharacter->GetSpringArm();
		SpringArmOffset->TargetArmLength = 50.0f;
		MainCharacter->GetCharacterMovement()->bOrientRotationToMovement = false;
		MainCharacter->bUseControllerRotationYaw = true;
	}

}

void AMainPlayerController::InputRun(const FInputActionValue& Value)
{
	bIsPressed = !bIsPressed;
	if (!bIsCrouch)
	{
		if (bIsPressed)
		{
			if (bIsMoving)
			{
				MainCharacter->SetRunMode();
				GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Green, FString::Printf(TEXT("RunMode")));
			}
			else
			{
				MainCharacter->SetWalkMode();
				GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Green, FString::Printf(TEXT("WalkMode")));
			}
		}
		else
		{
			MainCharacter->SetWalkMode();
			GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Green, FString::Printf(TEXT("WalkMode")));
		}
	}
}

void AMainPlayerController::InputJump(const FInputActionValue& Value)
{
	if (MainCharacter)
	{
		float Stemina = MainCharacter->GetStemina();
		if (!bIsCrouch && !MainCharacter->GetCharacterMovement()->IsFalling() && Stemina >= 5)
		{
			MainCharacter->Jump();
			GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Black, FString::Printf(TEXT("Play Jump")));
			MainCharacter->PlayJumpMontage();
		}
	}
}

void AMainPlayerController::InputCrouching(const FInputActionValue& Value)
{
	bIsCrouch = !bIsCrouch;

	if (bIsCrouch)
	{
		MainCharacter->DoCrouching();
		MainCharacter->SetCrouchMode();
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Green, FString::Printf(TEXT("CrouchMode")));
	}
	else
	{
		MainCharacter->DoCrouching();
		MainCharacter->SetWalkMode();
	}
}

void AMainPlayerController::InputClick(const FInputActionValue& Value)
{
	if (MainCharacter->CheckDrawerTag())
	{
		AActor* TargetDrawer = MainCharacter->CheckDrawerTag();
		if (TargetDrawer->ActorHasTag("Drawer") && TargetDrawer)
		{
			ADrawer* DrawerActor = Cast<ADrawer>(TargetDrawer);

			DrawerActor->ToggleDrawer(TargetDrawer);
		}
	}
}

void AMainPlayerController::InputInterection(const FInputActionValue& Value)
{
	if (MainCharacter->CheckDrawerTag())
	{
		AActor* TargetItem = MainCharacter->CheckDrawerTag();
		if (TargetItem->ActorHasTag("Item") && TargetItem)
		{
			AItemBaseActor* ItemActor = Cast<AItemBaseActor>(TargetItem);
			if (ItemActor && ItemActor->ItemDataAsset && !bIsPickUp)
			{
				MainCharacter->PlayHighPriorityMontage(MainCharacter->PickUpMontage);
				ItemActor->SetActorEnableCollision(false);
				ItemActor->AttachToComponent(
					MainCharacter->GetMesh(),
					FAttachmentTransformRules(
						EAttachmentRule::SnapToTarget,
						EAttachmentRule::SnapToTarget,
						EAttachmentRule::KeepWorld
					),
					TEXT("ItemSocket"));
				bIsPickUp = true;
			}
		}
	}

}
