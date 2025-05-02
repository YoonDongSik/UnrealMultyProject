// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "EnemyBasePawn.h"
#include "Components/BoxComponent.h"
#include "GhostEnemyPawn.generated.h"

UCLASS()
class HORRORGAME_API AGhostEnemyPawn : public AEnemyBasePawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AGhostEnemyPawn();

	UFUNCTION()
	virtual void PlayAttack() override;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void PlayHighPriorityMontage(UAnimMontage* Montage, FName StartSectionName = NAME_None);

	UFUNCTION()
	void OnHitAttackBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
		UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep,
		const FHitResult& SweepResult);

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Player|Montage")
	UAnimMontage* AttackMontage = nullptr;

private:
	UPROPERTY()
	UAnimInstance* AnimInstance = nullptr;

	UPROPERTY()
	UAnimMontage* CurrentMontage = nullptr;

	UPROPERTY(EditAnywhere, Category = "Collision")
	UBoxComponent* HammerBox = nullptr;
};
