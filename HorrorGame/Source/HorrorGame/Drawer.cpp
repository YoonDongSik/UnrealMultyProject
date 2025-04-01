// Fill out your copyright notice in the Description page of Project Settings.


#include "Drawer.h"
#include "Components/SkeletalMeshComponent.h"

// Sets default values
ADrawer::ADrawer()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SkeletalMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMesh"));
	SkeletalMeshComponent->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void ADrawer::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADrawer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


