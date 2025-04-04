// Fill out your copyright notice in the Description page of Project Settings.


#include "DrawerBody.h"

// Sets default values
ADrawerBody::ADrawerBody()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	USceneComponent* Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	RootComponent = Root;

	UpMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BaseUp"));
	UpMesh->SetupAttachment(RootComponent);

	DownMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BaseDown"));
	DownMesh->SetupAttachment(RootComponent);

	LeftMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BaseLeft"));
	LeftMesh->SetupAttachment(RootComponent);

	RightMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BaseRight"));
	RightMesh->SetupAttachment(RootComponent);

	BackMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BaseBack"));
	BackMesh->SetupAttachment(RootComponent);

	Floor1Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BaseFloor1"));
	Floor1Mesh->SetupAttachment(RootComponent);

	Floor2Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BaseFloor2"));
	Floor2Mesh->SetupAttachment(RootComponent);

	Floor3Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BaseFloor3"));
	Floor3Mesh->SetupAttachment(RootComponent);

	DrawerChild1 = CreateDefaultSubobject<UChildActorComponent>(TEXT("DrawerChild1"));
	DrawerChild1->SetupAttachment(RootComponent);

	DrawerChild2 = CreateDefaultSubobject<UChildActorComponent>(TEXT("DrawerChild2"));
	DrawerChild2->SetupAttachment(RootComponent);

	DrawerChild3 = CreateDefaultSubobject<UChildActorComponent>(TEXT("DrawerChild3"));
	DrawerChild3->SetupAttachment(RootComponent);

	DrawerChild4 = CreateDefaultSubobject<UChildActorComponent>(TEXT("DrawerChild4"));
	DrawerChild4->SetupAttachment(RootComponent);

}

// Called when the game starts or when spawned
void ADrawerBody::BeginPlay()
{
	Super::BeginPlay();
	
}

