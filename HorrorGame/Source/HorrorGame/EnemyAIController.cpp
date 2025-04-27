// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyAIController.h"
#include "NavigationSystem.h"

void AEnemyAIController::BeginPlay()
{
	Super::BeginPlay();

	GetWorld()->GetTimerManager().SetTimer(RandomMoveTimerHandle, this, &AEnemyAIController::RandomMove, 3.0f, true);
}

void AEnemyAIController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);
}

void AEnemyAIController::RandomMove()
{
    APawn* ControlledPawn = GetPawn();
    if (!ControlledPawn) return;

    UNavigationSystemV1* NavSystem = UNavigationSystemV1::GetCurrent(GetWorld());
    if (NavSystem)
    {
        FVector Origin = ControlledPawn->GetActorLocation();
        GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, FString::Printf(TEXT("Origin: %s"), *Origin.ToString()));

        FNavLocation RandomLocation;
        if (NavSystem->GetRandomReachablePointInRadius(Origin, 1000.0f, RandomLocation))
        {
            FVector NewLocation = RandomLocation.Location;
            NewLocation.Z = 150.0f;

            /*ControlledPawn->SetActorLocation(RandomLocation.Location);*/
			MoveToLocation(NewLocation);
            GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("Random Move location: %s"), *NewLocation.ToString()));
        }
        else
        {
            GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("No reachable random location found!"));
        }
    }
}
