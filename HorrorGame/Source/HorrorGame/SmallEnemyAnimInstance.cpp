// Fill out your copyright notice in the Description page of Project Settings.


#include "SmallEnemyAnimInstance.h"
#include "SmallEnemy.h"

void USmallEnemyAnimInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();
	EnemyPawn = Cast<ASmallEnemy>(TryGetPawnOwner());
	if (EnemyPawn)
	{
		EnemySpeed = EnemyPawn->GetVelocity().Size();
	}
}

void USmallEnemyAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);
	if (EnemyPawn)
	{
		EnemySpeed = EnemyPawn->GetVelocity().Size();
	}
}
