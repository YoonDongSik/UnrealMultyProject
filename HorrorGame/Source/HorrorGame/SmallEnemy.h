// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EnemyBasePawn.h"
#include "Components/CapsuleComponent.h"
#include "NiagaraComponent.h"
#include "NiagaraSystem.h"
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

	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
	virtual void PlayAttack() override;

protected:
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
	UCapsuleComponent* BreathCapsule = nullptr;

	UPROPERTY(EditAnywhere, Category = "Attack")
	UNiagaraSystem* BreathFX = nullptr;

	USkeletalMeshComponent* Mesh = nullptr;
};
