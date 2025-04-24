// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyBasePawn.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AEnemyBasePawn::AEnemyBasePawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CapsuleComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CapsuleComponent"));
	RootComponent = CapsuleComponent;

	ArrowComponent = CreateDefaultSubobject<UArrowComponent>(TEXT("ArrowComponent"));
	ArrowComponent->SetupAttachment(RootComponent);

	MeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("MeshComponent"));
	MeshComponent->SetupAttachment(RootComponent);

	CharacterMovementComponent = CreateDefaultSubobject<UCharacterMovementComponent>(TEXT("CharacterMovementComponent"));
	CharacterMovementComponent->bOrientRotationToMovement = true;

	Tags.Add(FName("Enemy"));
}

// Called when the game starts or when spawned
void AEnemyBasePawn::BeginPlay()
{
	Super::BeginPlay();

	PlayerCharacter = Cast<AMainCharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
	
}

bool AEnemyBasePawn::ViewPlayer()
{
	if (!PlayerCharacter) return false;

	FVector EnemyLocation = GetActorLocation();
	FVector ForwardVector = GetActorForwardVector();
	FVector PlayerLocation = PlayerCharacter->GetActorLocation();
	FVector DirectionToPlayer = PlayerLocation - EnemyLocation;

	float DistanceToPlayer = DirectionToPlayer.Size();
	if (DistanceToPlayer > ViewDistance) return false;

	DirectionToPlayer.Normalize();
	float DotProduct = FVector::DotProduct(ForwardVector, DirectionToPlayer);
	float Angle = FMath::RadiansToDegrees(FMath::Acos(DotProduct));

	return Angle <= ViewAngle * 0.5f;
}

// Called every frame
void AEnemyBasePawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (ViewPlayer())
	{
		GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Blue, TEXT("Player in view!"));
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Red, TEXT("Player out of view!"));
	}

}

// Called to bind functionality to input
void AEnemyBasePawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

