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
		SpringArm->SetRelativeLocation(FVector(60.0f, 0.0f, 0.0f));
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::White, FString::Printf(TEXT("Crouching True")));
	}
	else
	{
		UnCrouch();
		SpringArm->SetRelativeLocation(FVector(50.0f, 0.0f, 70.0f));
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

FVector AMainCharacter::AimLine()
{
	APlayerController* PlayerController = Cast<APlayerController>(GetController());

	if (PlayerController)
	{
		int32 ViewportSizeX, ViewportSizeY;
		PlayerController->GetViewportSize(ViewportSizeX, ViewportSizeY);

		FVector WorldLocation, WorldDirection;
		PlayerController->DeprojectScreenPositionToWorld(ViewportSizeX / 2, ViewportSizeY / 2, WorldLocation, WorldDirection);

		FHitResult HitResult;
		FVector TraceEnd = WorldLocation + (WorldDirection * 5000.f);
		bool bHit = GetWorld()->LineTraceSingleByChannel(HitResult, WorldLocation, TraceEnd, ECC_Visibility);

		if (bHit)
		{
			//// 충돌이 발생하면 빨간색으로 라인을 그립니다
			//DrawDebugLine(GetWorld(), WorldLocation, HitResult.Location, FColor::Red, false, 1.0f, 0, 1.0f);
			return HitResult.Location;  // 충돌된 위치 반환
		}
		else
		{
			//// 충돌이 없으면 TraceEnd까지의 라인을 녹색으로 그립니다
			//DrawDebugLine(GetWorld(), WorldLocation, TraceEnd, FColor::Green, false, 1.0f, 0, 1.0f);
			return TraceEnd;  // 충돌이 없으면 끝 위치 반환
		}

		/*return TraceEnd;*/
	}

	return FVector::ZeroVector;
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

	FVector AimLocation = AimLine();
}

// Called to bind functionality to input
void AMainCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

