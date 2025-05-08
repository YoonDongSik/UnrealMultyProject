// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "CineCameraActor.h"
#include "LadderActor.generated.h"

UCLASS()
class HORRORGAME_API ALadderActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ALadderActor();
	
	void ClimbLadder();

	void ClimbStep();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Mesh")
	UStaticMeshComponent* LadderMesh;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Ladder")
	USphereComponent* StartSphere;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ladder|Camera")
	ACineCameraActor* LadderClimbCamera;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Climbing")
	float ClimbSpeed = 2.0f;

	bool bIsClimbing = false;

	FVector FinishLocation;

	float ClimbStepHeight = 55.0f; // 한 칸 올라가는 높이

	UPROPERTY()
	class AMainCharacter* MainCharacter;

};
