// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "EnemyAIController.generated.h"

/**
 * 
 */
UCLASS()
class HORRORGAME_API AEnemyAIController : public AAIController
{
	GENERATED_BODY()

public:
	AEnemyAIController();

	void RandomMove();

	void StopRandomMove();

	void FollowPlayer(APawn* PlayerPawn);
	
protected:
	virtual void BeginPlay() override;

	/*virtual void OnPossess(APawn* InPawn) override;*/

	void OnMoveCompleted(FAIRequestID RequestID, const FPathFollowingResult& Result) override;

public:
	bool bIsPlayerFollow = false;

protected:
	FTimerHandle RandomMoveTimerHandle;

	bool bIsMoving = false;
};
