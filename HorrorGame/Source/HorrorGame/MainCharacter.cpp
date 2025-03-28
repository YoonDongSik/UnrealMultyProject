// Fill out your copyright notice in the Description page of Project Settings.


#include "MainCharacter.h"
#include "PlayerAnimInstance.h"

// Sets default values
AMainCharacter::AMainCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CharacterMesh = GetMesh();

	GetCharacterMovement()->NavAgentProps.bCanCrouch = true;

	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArm->SetupAttachment(RootComponent);
	SpringArm->TargetArmLength = 50.0f;
	SpringArm->SocketOffset = FVector(0.0f);
	SpringArm->bUsePawnControlRotation = true;

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(SpringArm);
	Camera->SetRelativeLocation(FVector(-20.0f, 0.0f, 0.0f));

	bUseControllerRotationYaw = true;
	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 360.0f, 0.0f);

	Tags.Add("Player");
}

void AMainCharacter::Movement(const FVector& MoveValue)
{
	AddMovementInput(MoveValue);
}

void AMainCharacter::PlayJumpMontage()
{
	PlayHighPriorityMontage(JumpMontage);
	Stemina -= 5;
}

void AMainCharacter::DoCrouching()
{
	bIsCrouched = !bIsCrouched;

	UPlayerAnimInstance* PlayerAnimInstance = Cast<UPlayerAnimInstance>(AnimInstance);
	if (PlayerAnimInstance)
	{
		PlayerAnimInstance->bIsCrouchAnim = bIsCrouched;
	}

	if (bIsCrouched)
	{
		Crouch();
		SpringArm->AddRelativeLocation(FVector(50.0f, 0.0f, 0.0f));
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::White, FString::Printf(TEXT("Crouching True")));
	}
	else
	{
		UnCrouch();
		SpringArm->AddRelativeLocation(FVector(50.0f, 0.0f, 70.0f));
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::White, FString::Printf(TEXT("Crouching false")));
	}
}

// Called when the game starts or when spawned
void AMainCharacter::BeginPlay()
{
	Super::BeginPlay();

	AnimInstance = GetMesh()->GetAnimInstance();
}

void AMainCharacter::PlayHighPriorityMontage(UAnimMontage* Montage, FName StartSectionName)
{
	if (!AnimInstance->Montage_IsPlaying(Montage))	// Montage가 재생 중이 아니면
	{
		CurrentMontage = Montage;					// Montage를 CurrentMontage로 지정
		PlayAnimMontage(CurrentMontage, 1.0f, StartSectionName);	// Montage 재생
	}
}

// Called every frame
void AMainCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (bIsRunning)
	{
		Stemina -= 10 * DeltaTime;
		if (Stemina < 0)
		{
			Stemina = 0;
			SetWalkMode();
		}
	}
	else
	{
		Stemina += 5 * DeltaTime;
		if (Stemina > 100)
		{
			Stemina = 100;
		}
	}
	//GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Yellow, FString::Printf(TEXT("Current Stemina : %.f"), Stemina));
	OnStaminaChanged.Broadcast(Stemina / 100);
}

// Called to bind functionality to input
void AMainCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

