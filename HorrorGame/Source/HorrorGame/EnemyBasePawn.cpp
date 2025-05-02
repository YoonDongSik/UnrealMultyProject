// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyBasePawn.h"
#include "Kismet/GameplayStatics.h"
#include "EnemyAIController.h"
#include "MainCharacter.h"
#include "GhostEnemyPawn.h"


// Sets default values
AEnemyBasePawn::AEnemyBasePawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	/*MyCapsuleComponent = GetCapsuleComponent();*/

	AttackRangeSphere = CreateDefaultSubobject<USphereComponent>(TEXT("AttackRangeSphere"));
	AttackRangeSphere->SetupAttachment(RootComponent);

	AIControllerClass = AEnemyAIController::StaticClass();
	AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;

	Tags.Add(FName("Enemy"));
}

void AEnemyBasePawn::Stun()
{
	AEnemyAIController* AIController = Cast<AEnemyAIController>(GetController());

	bIsStun = true;
	if (AIController)
	{
		AIController->bIsMoving = true;
	}

	GetCharacterMovement()->StopMovementImmediately();

	FTimerHandle StunTimerHandle;
	GetWorld()->GetTimerManager().SetTimer(StunTimerHandle, this, &AEnemyBasePawn::Unstun, 10.0f, false);
}

void AEnemyBasePawn::Unstun()
{
	bIsStun = false;
	AEnemyAIController* AIController = Cast<AEnemyAIController>(GetController());
	if (AIController)
	{
		AIController->RandomMove();
		AIController->bIsMoving = false;
	}
}

void AEnemyBasePawn::PlayAttack()
{
}

// Called when the game starts or when spawned
void AEnemyBasePawn::BeginPlay()
{
	Super::BeginPlay();

	PlayerCharacter = Cast<AMainCharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));

	AttackRangeSphere->OnComponentBeginOverlap.AddDynamic(this, &AEnemyBasePawn::OnAttackRangeBeginOverlap);
	AttackRangeSphere->OnComponentEndOverlap.AddDynamic(this, &AEnemyBasePawn::OnAttackRangeEndOverlap);
	
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

	//DrawDebugCone(
	//	GetWorld(),
	//	EnemyLocation + FVector(0, 0, 50), // �� ���� ����
	//	ForwardVector,
	//	ViewDistance,
	//	FMath::DegreesToRadians(ViewAngle * 0.3f),
	//	FMath::DegreesToRadians(ViewAngle * 0.3f),
	//	16,
	//	FColor::Green,
	//	true,
	//	0.0f // 0.1�� ���� ǥ�õǰ� (Tick���� ���� ȣ��� ���)
	//);

	return Angle <= ViewAngle * 0.3f;
}

// Called every frame
void AEnemyBasePawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	AEnemyAIController* AIController = Cast<AEnemyAIController>(GetController());

	if (ViewPlayer())
	{
		if (!bIsPlayerInAttack && !bIsStun)
		{
			AIController->StopRandomMove();
			AIController->FollowPlayer(PlayerCharacter);
		}
		else if (bIsPlayerInAttack)
		{
			AIController->StopRandomMove();
			AIController->StopMovement();
			AIController->bIsPlayerFollow = false;
		}
	}
	else
	{
		if (!bIsPlayerInAttack && !bIsStun)
		{
			AIController->RandomMove();
			AIController->bIsPlayerFollow = false;
		}
		else if (bIsPlayerInAttack)
		{
			AIController->StopRandomMove();
			AIController->StopMovement();
		}
		/*GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Red, TEXT("Player out of view!"));*/
	}

	if (bIsPlayerInAttack && TargetActor)
	{
		FRotator LookAtRotation = FRotationMatrix::MakeFromX(TargetActor->GetActorLocation() - GetActorLocation()).Rotator();
		SetActorRotation(FMath::RInterpTo(GetActorRotation(), LookAtRotation, DeltaTime, RotationSpeed));
	}

	if (bIsPlayerInAttack)
	{
		PlayAttack();
	}
}

// Called to bind functionality to input
void AEnemyBasePawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AEnemyBasePawn::OnAttackRangeBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep,const FHitResult& SweepResult)
{
	if (OtherActor && OtherActor != this)
	{
		if (OtherActor->ActorHasTag("Player"))
		{
			GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Green, FString::Printf(TEXT("Overlap Actor: %s, Comp: %s"), *OtherActor->GetName(), *OtherComp->GetName()));
			bIsPlayerInAttack = true;
			TargetActor = OtherActor;
			PlayAttack();
		}
	}
}

void AEnemyBasePawn::OnAttackRangeEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Red, TEXT("OverlapEnd!"));
	if (OtherActor && OtherActor != this)
	{
		if (OtherActor->ActorHasTag("Player"))
		{
			GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Red, FString::Printf(TEXT("OverlapEnd Actor: %s, Comp: %s"), *OtherActor->GetName(), *OtherComp->GetName()));
			bIsPlayerInAttack = false;
			TargetActor = nullptr;
		}
	}
}

