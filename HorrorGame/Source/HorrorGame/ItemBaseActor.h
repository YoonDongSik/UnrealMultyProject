// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ItemDataAsset.h"
#include "Maincharacter.h"
#include "ItemBaseActor.generated.h"

UCLASS()
class HORRORGAME_API AItemBaseActor : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AItemBaseActor();

	UPROPERTY(VisibleAnywhere)
	USkeletalMeshComponent* ItemMesh;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Item")
	UItemDataAsset* ItemDataAsset;

	void OnPickup(class AMainCharacter* MainCharacter);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void OnConstruction(const FTransform& Transform) override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
