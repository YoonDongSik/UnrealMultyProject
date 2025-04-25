// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Components/CapsuleComponent.h"
#include "Components/ArrowComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "MainCharacter.h"
#include "AIController.h"
#include "EnemyBasePawn.generated.h"

UCLASS()
class HORRORGAME_API AEnemyBasePawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AEnemyBasePawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	bool ViewPlayer();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "EnemyBase")
	UCapsuleComponent* CapsuleComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "EnemyBase")
	UArrowComponent* ArrowComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "EnemyBase")
	USkeletalMeshComponent* MeshComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "EnemyBase")
	UCharacterMovementComponent* CharacterMovementComponent;

private:
	UPROPERTY(EditAnywhere, Category = "EnemyView")
	float ViewDistance = 1000.0f;

	UPROPERTY(EditAnywhere, Category = "EnemyView")
	float ViewAngle = 90.0f;

	AMainCharacter* PlayerCharacter;
};
