// Fill out your copyright notice in the Description page of Project Settings.


#include "Drawer.h"
#include "Components/TimelineComponent.h"
#include "Kismet/KismetMathLibrary.h"

// Sets default values
ADrawer::ADrawer()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	DrawerMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("DrawerMesh"));
	DrawerMesh->SetupAttachment(RootComponent);
	Tags.Add(FName("Drawer"));

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
	if (!TargetActor) return;

	FVector NewLocation = UKismetMathLibrary::VLerp(StartLocation, EndLocation, Value);
	TargetActor->SetActorRelativeLocation(NewLocation);
}

void ADrawer::ToggleDrawer(AActor* TargetDrawer)
{
	if (!TargetDrawer || !CurveFloat) return;

	TargetActor = TargetDrawer;
	StartLocation = TargetActor->GetActorLocation();

	/*if (DrawerStates.Contains(TargetDrawer))
	{
		bCurrentlyOpen = DrawerStates[TargetDrawer];
	}*/

	if (bIsOpen)
	{
		EndLocation = StartLocation - FVector(0.f, 50.f, 0.f);
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::White, TEXT("Drawer Is Closed"));
	}
	else
	{
		EndLocation = StartLocation + FVector(0.f, 50.f, 0.f);
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::White, TEXT("Drawer Is Opened"));
	}

	// 상태 업데이트
	/*DrawerStates.Add(TargetDrawer, !bCurrentlyOpen);*/

	TimelineComponent->PlayFromStart();
	bIsOpen = !bIsOpen;
}

