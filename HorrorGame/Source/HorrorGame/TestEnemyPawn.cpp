// Fill out your copyright notice in the Description page of Project Settings.


#include "TestEnemyPawn.h"

// Sets default values
ATestEnemyPawn::ATestEnemyPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATestEnemyPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATestEnemyPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ATestEnemyPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

