// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/TimelineComponent.h"
#include "DoorActor.generated.h"

UCLASS()
class HORRORGAME_API ADoorActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADoorActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION()
	void UpdateDoorRotation(float Value);

	UFUNCTION()
	void OnTimelineFinished();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void ToggleDoor();

	void OpenDoor();

	void CloseDoor();

protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Components")
	UStaticMeshComponent* DoorMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TimeLine")
	UCurveFloat* DoorCurve;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "TimeLine")
	UTimelineComponent* DoorTimeline;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Door Properties")
	FRotator OpenAngle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Door Properties")
	FRotator CloseAngle;

private:
	bool bIsOpen = false;
};
