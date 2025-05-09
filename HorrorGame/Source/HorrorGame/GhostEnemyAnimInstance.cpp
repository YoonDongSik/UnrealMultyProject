// Fill out your copyright notice in the Description page of Project Settings.


#include "GhostEnemyAnimInstance.h"
#include "GhostEnemyPawn.h"

void UGhostEnemyAnimInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();
	EnemyPawn = Cast<AGhostEnemyPawn>(TryGetPawnOwner());
}

void UGhostEnemyAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);
	if (EnemyPawn)
	{
		EnemySpeed = EnemyPawn->GetVelocity().Size();
	}
}
