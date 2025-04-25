// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyAIController.h"
#include "NavigationSystem.h"

void AEnemyAIController::BeginPlay()
{
	Super::BeginPlay();

	GetWorld()->GetTimerManager().SetTimer(RandomMoveTimerHandle, this, &AEnemyAIController::RandomMove, 10.0f, true);
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
		FNavLocation RandomLocation;

		if (NavSystem->GetRandomReachablePointInRadius(Origin, 1000.0f, RandomLocation))
		{
			MoveToLocation(RandomLocation.Location);
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("random Move location: %s"), *RandomLocation.Location.ToString()));
		}
	}
}
