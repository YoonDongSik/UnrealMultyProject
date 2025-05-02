// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EnemyBasePawn.h"
#include "SmallEnemy.generated.h"

/**
 * 
 */
UCLASS()
class HORRORGAME_API ASmallEnemy : public AEnemyBasePawn
{
	GENERATED_BODY()
	
public:
	ASmallEnemy();

protected:
	virtual void BeginPlay() override;
};
