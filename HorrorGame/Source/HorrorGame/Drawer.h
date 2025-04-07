// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Drawer.generated.h"

UCLASS()
class HORRORGAME_API ADrawer : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADrawer();

	void ToggleDrawer(AActor* TargetDrawer);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION(BlueprintCallable, Category = "Drawer")
	void DrawerMove(float Value);

protected:
	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* DrawerMesh;

private:
	UPROPERTY(EditAnywhere, Category = "Drawer")
	class UCurveFloat* CurveFloat;

	UPROPERTY(VisibleAnywhere ,Category = "Drawer")
	class UTimelineComponent* TimelineComponent;

	AActor* TargetActor;
	FVector StartLocation;
	FVector EndLocation;

	bool bIsOpen = false;

	/*TMap<UStaticMeshComponent*, bool> DrawerStates;*/
};
