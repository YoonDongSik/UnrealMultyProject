// Fill out your copyright notice in the Description page of Project Settings.


#include "Adrenaline.h"

// Sets default values
AAdrenaline::AAdrenaline()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	USceneComponent* Root = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	SetRootComponent(Root);

	CapsuleComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CapsuleComponent"));
	CapsuleComponent->SetupAttachment(Root);
	/*CapsuleComponent->SetCollisionProfileName(TEXT("OverlapOnlyPawn"));*/

	SkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMesh"));
	SkeletalMesh->SetupAttachment(CapsuleComponent);



	Tags.Add(FName("KitItem"));
}

// Called when the game starts or when spawned
void AAdrenaline::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAdrenaline::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

