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

	void ToggleDrawer(UStaticMeshComponent* TargetDrawer);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION(BlueprintCallable, Category = "Drawer")
	void DrawerMove(float Value);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UStaticMeshComponent* UpMesh;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UStaticMeshComponent* DownMesh;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UStaticMeshComponent* LeftMesh;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UStaticMeshComponent* RightMesh;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UStaticMeshComponent* BackMesh;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UStaticMeshComponent* Floor1Mesh;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UStaticMeshComponent* Floor2Mesh;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UStaticMeshComponent* Floor3Mesh;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UStaticMeshComponent* Floor1DrawerMesh;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UStaticMeshComponent* Floor2DrawerMesh;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UStaticMeshComponent* Floor3DrawerMesh;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UStaticMeshComponent* Floor4DrawerMesh;

private:
	UPROPERTY(EditAnywhere, Category = "Drawer")
	class UCurveFloat* CurveFloat;

	UPROPERTY(VisibleAnywhere ,Category = "Drawer")
	class UTimelineComponent* TimelineComponent;

	UStaticMeshComponent* TargetMesh;
	FVector StartLocation;
	FVector EndLocation;

	bool bIsOpen;

	TMap<UStaticMeshComponent*, bool> DrawerStates;
};
