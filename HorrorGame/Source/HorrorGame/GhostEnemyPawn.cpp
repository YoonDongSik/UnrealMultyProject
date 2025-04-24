// Fill out your copyright notice in the Description page of Project Settings.


#include "GhostEnemyPawn.h"

// Sets default values
AGhostEnemyPawn::AGhostEnemyPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AGhostEnemyPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGhostEnemyPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AGhostEnemyPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

