// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DrawerBody.generated.h"

UCLASS()
class HORRORGAME_API ADrawerBody : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADrawerBody();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

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

	UPROPERTY(EditAnywhere, Category = "Drawer")
	UChildActorComponent* DrawerChild1;
	UPROPERTY(EditAnywhere, Category = "Drawer")
	UChildActorComponent* DrawerChild2;
	UPROPERTY(EditAnywhere, Category = "Drawer")
	UChildActorComponent* DrawerChild3;
	UPROPERTY(EditAnywhere, Category = "Drawer")
	UChildActorComponent* DrawerChild4;
};
