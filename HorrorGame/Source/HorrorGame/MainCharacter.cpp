// Fill out your copyright notice in the Description page of Project Settings.


#include "MainCharacter.h"

// Sets default values
AMainCharacter::AMainCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	USkeletalMeshComponent* CharacterMesh = GetMesh();

	FootMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Foot"));
	FootMesh->SetupAttachment(CharacterMesh);
	NeckMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Neck"));
	NeckMesh->SetupAttachment(CharacterMesh);
	HoodMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Hood"));
	HoodMesh->SetupAttachment(CharacterMesh);
	JarketMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Jarket"));
	JarketMesh->SetupAttachment(CharacterMesh);
	PantsMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Pants"));
	PantsMesh->SetupAttachment(CharacterMesh);
	SweaterMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Sweater"));
	SweaterMesh->SetupAttachment(CharacterMesh);
	GlassesMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Glasses"));
	GlassesMesh->SetupAttachment(CharacterMesh);

	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArm->SetupAttachment(RootComponent);
	SpringArm->TargetArmLength = 50.0f;
	SpringArm->SocketOffset = FVector(0.0f);
	SpringArm->bUsePawnControlRotation = true;

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(SpringArm);
	Camera->SetRelativeLocation(FVector(-20.0f, 0.0f, 0.0f));

	bUseControllerRotationYaw = false;
	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 360.0f, 0.0f);

	Tags.Add("Player");
}

void AMainCharacter::Movement(const FVector& MoveValue)
{
	AddMovementInput(MoveValue);
}

// Called when the game starts or when spawned
void AMainCharacter::BeginPlay()
{
	Super::BeginPlay();
	
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
}

// Called to bind functionality to input
void AMainCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

