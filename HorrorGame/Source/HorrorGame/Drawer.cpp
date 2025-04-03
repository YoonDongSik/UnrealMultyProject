// Fill out your copyright notice in the Description page of Project Settings.


#include "Drawer.h"
#include "Components/TimelineComponent.h"
#include "Kismet/KismetMathLibrary.h"

// Sets default values
ADrawer::ADrawer()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

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

	Floor1DrawerMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Floor1Drawer"));
	Floor1DrawerMesh->SetupAttachment(RootComponent);
	Floor1DrawerMesh->ComponentTags.Add(FName("Drawer"));

	Floor2DrawerMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Floor2Drawer"));
	Floor2DrawerMesh->SetupAttachment(RootComponent);
	Floor2DrawerMesh->ComponentTags.Add(FName("Drawer"));

	Floor3DrawerMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Floor3Drawer"));
	Floor3DrawerMesh->SetupAttachment(RootComponent);
	Floor3DrawerMesh->ComponentTags.Add(FName("Drawer"));

	Floor4DrawerMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Floor4Drawer"));
	Floor4DrawerMesh->SetupAttachment(RootComponent);
	Floor4DrawerMesh->ComponentTags.Add(FName("Drawer"));

	TimelineComponent = CreateDefaultSubobject<UTimelineComponent>(TEXT("TimelineComponent"));

}

// Called when the game starts or when spawned
void ADrawer::BeginPlay()
{
	Super::BeginPlay();
	
	FOnTimelineFloat DrawerMoveFunction;
	DrawerMoveFunction.BindUFunction(this, FName("DrawerMove"));
	TimelineComponent->AddInterpFloat(CurveFloat, DrawerMoveFunction);
}

void ADrawer::DrawerMove(float Value)
{
	if (!TargetMesh) return;

	FVector NewLocation = UKismetMathLibrary::VLerp(StartLocation, EndLocation, Value);
	TargetMesh->SetRelativeLocation(NewLocation);
}

void ADrawer::ToggleDrawer(UStaticMeshComponent* TargetDrawer)
{
	if (!TargetDrawer || !CurveFloat) return;

	TargetMesh = TargetDrawer;
	StartLocation = TargetMesh->GetRelativeLocation();

	if (bIsOpen)
	{
		EndLocation = StartLocation - FVector(0.f, 50.f, 0.f);
		TimelineComponent->Reverse();
	}
	else
	{
		EndLocation = StartLocation + FVector(0.f, 50.f, 0.f);
		TimelineComponent->PlayFromStart();
	}

	bIsOpen = !bIsOpen;
}

// Called every frame
void ADrawer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


