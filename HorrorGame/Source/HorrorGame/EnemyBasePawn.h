// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "MainCharacter.h"
#include "AIController.h"
#include "Components/SphereComponent.h"
#include "EnemyBasePawn.generated.h"

UCLASS()
class HORRORGAME_API AEnemyBasePawn : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AEnemyBasePawn();

	void Stun();

	void Unstun();
	virtual void PlayAttack();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	bool ViewPlayer();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION()
	void OnAttackRangeBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
		UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep,
		const FHitResult& SweepResult);

	UFUNCTION()
	void OnAttackRangeEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
		UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

public:
	bool bIsPlayerInAttack = false;

	bool bIsStun = false;

protected:
	/*UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
	UCapsuleComponent* MyCapsuleComponent;*/

	UPROPERTY()
	AActor* TargetActor = nullptr;

	UPROPERTY(EditAnywhere, Category = "AI")
	float RotationSpeed = 5.0f;

private:
	UPROPERTY(EditAnywhere, Category = "EnemyView")
	float ViewDistance = 1000.0f;

	UPROPERTY(EditAnywhere, Category = "EnemyView")
	float ViewAngle = 90.0f;

	UPROPERTY(EditAnywhere, Category = "Attack")
	USphereComponent* AttackRangeSphere;

	AMainCharacter* PlayerCharacter;
};
