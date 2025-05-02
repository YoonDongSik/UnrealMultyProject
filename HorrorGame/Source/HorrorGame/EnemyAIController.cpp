// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyAIController.h"
#include "NavigationSystem.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Navigation/PathFollowingComponent.h"

void AEnemyAIController::StopRandomMove()
{
	GetWorld()->GetTimerManager().ClearTimer(RandomMoveTimerHandle);
	bIsMoving = false;
}

void AEnemyAIController::FollowPlayer(APawn* PlayerPawn)
{
    APawn* ControlledPawn = GetPawn();
    if (!ControlledPawn) return;
    ACharacter* ConCharacter = Cast<ACharacter>(ControlledPawn);
    if (ConCharacter)
    {
        UCharacterMovementComponent* CharacterMovement = ConCharacter->GetCharacterMovement();
        if (CharacterMovement)
        {
            CharacterMovement->MaxWalkSpeed = 600.0f;
        }
    }

	if (PlayerPawn)
	{
		MoveToActor(PlayerPawn);
		bIsPlayerFollow = true;
	}
}

void AEnemyAIController::BeginPlay()
{
	Super::BeginPlay();

	GetWorld()->GetTimerManager().SetTimer(RandomMoveTimerHandle, this, &AEnemyAIController::RandomMove, 3.0f, true);
}

//void AEnemyAIController::OnPossess(APawn* InPawn)
//{
//	Super::OnPossess(InPawn);
//}


AEnemyAIController::AEnemyAIController()
{

}

void AEnemyAIController::RandomMove()
{
    APawn* ControlledPawn = GetPawn();
    if (!ControlledPawn) return;

    if (bIsMoving)
    {
        return;
    }

    ACharacter* ConCharacter = Cast<ACharacter>(ControlledPawn);
    if (ConCharacter)
    {
        UCharacterMovementComponent* CharacterMovement = ConCharacter->GetCharacterMovement();
        if (CharacterMovement)
        {
			CharacterMovement->MaxWalkSpeed = 200.0f;
        }
    }

    UNavigationSystemV1* NavSystem = UNavigationSystemV1::GetCurrent(GetWorld());
    if (NavSystem)
    {
        FVector Origin = ControlledPawn->GetActorLocation();
        GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, FString::Printf(TEXT("Origin: %s"), *Origin.ToString()));

        FNavLocation RandomLocation;
        if (NavSystem->GetRandomReachablePointInRadius(Origin, 10000.0f, RandomLocation))
        {
            FVector NewLocation = RandomLocation.Location;
            NewLocation.Z = 150.0f;

            /*ControlledPawn->SetActorLocation(RandomLocation.Location);*/
			MoveToLocation(NewLocation);
			bIsMoving = true;
            GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("Random Move location: %s"), *NewLocation.ToString()));
        }
        else
        {
            GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("No reachable random location found!"));
        }
    }
}

void AEnemyAIController::OnMoveCompleted(FAIRequestID RequestID, const FPathFollowingResult& Result)
{
	Super::OnMoveCompleted(RequestID, Result);
	if (Result.IsSuccess())
	{
        bIsMoving = false;

        GetWorld()->GetTimerManager().SetTimer(RandomMoveTimerHandle, this, &AEnemyAIController::RandomMove, 3.0f, false);
	}
}

