// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NiagaraComponent.h"
#include "NiagaraSystem.h"
#include "MainCharacter.h"
#include "Components/SphereComponent.h"
#include "ThrowItemAttackActor.generated.h"

UCLASS()
class HORRORGAME_API AThrowItemAttackActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AThrowItemAttackActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void EffectAndAttack();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Item|Attack")
	USphereComponent* AttackSphere;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Item|Attack")
	UNiagaraSystem* ElectricParticle;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Item|Attack")
	UNiagaraSystem* IceParticle;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Item|Attack")
	UNiagaraComponent* AttackParticleComponent;

	UPROPERTY()
	AMainCharacter* MainCharacter;
};
