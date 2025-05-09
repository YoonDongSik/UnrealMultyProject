// Fill out your copyright notice in the Description page of Project Settings.


#include "DoorActor.h"

// Sets default values
ADoorActor::ADoorActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	DoorMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("DoorMesh"));
	RootComponent = DoorMesh;

	DoorTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("DoorTimeline"));

	Tags.Add("Door");
}

// Called when the game starts or when spawned
void ADoorActor::BeginPlay()
{
	Super::BeginPlay();

	if (DoorCurve)
	{
		FOnTimelineFloat TimelineCallback;
		TimelineCallback.BindUFunction(this, FName("UpdateDoorRotation"));
		DoorTimeline->AddInterpFloat(DoorCurve, TimelineCallback);
		FOnTimelineEvent TimelineFinishedCallback;
		TimelineFinishedCallback.BindUFunction(this, FName("OnTimelineFinished"));
		DoorTimeline->SetTimelineFinishedFunc(TimelineFinishedCallback);
	}

	CloseAngle = DoorMesh->GetRelativeRotation();
	OpenAngle = CloseAngle + FRotator(0.0f, -90.0f, 0.0f);
	
}

void ADoorActor::UpdateDoorRotation(float Value)
{
	FRotator NewRotation = FMath::Lerp(CloseAngle, OpenAngle, Value);
	DoorMesh->SetRelativeRotation(NewRotation);
}

void ADoorActor::OnTimelineFinished()
{
	bIsOpen = !bIsOpen;
}

// Called every frame
void ADoorActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ADoorActor::ToggleDoor()
{
	if (bIsOpen)
	{
		CloseDoor();
	}
	else
	{
		OpenDoor();
	}
}

void ADoorActor::OpenDoor()
{
	if (DoorCurve)
	{
		DoorTimeline->PlayFromStart();
	}
}

void ADoorActor::CloseDoor()
{
	if (DoorCurve)
	{
		DoorTimeline->Reverse();
	}
}

