// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "SmallEnemyAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class HORRORGAME_API USmallEnemyAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
	
public:
	void NativeInitializeAnimation() override;
	void NativeUpdateAnimation(float DeltaSeconds) override;


protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	class ASmallEnemy* EnemyPawn;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Movement")
	float EnemySpeed = 0.0f;
};
