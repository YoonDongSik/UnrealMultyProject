// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ItemDataAsset.h"
#include "MainCharacter.h"
#include "Components/CapsuleComponent.h"
#include "Components/BoxComponent.h"
#include "Components/SphereComponent.h"
#include "ItemBaseActor.generated.h"

UCLASS()
class HORRORGAME_API AItemBaseActor : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AItemBaseActor();

	void SetItemData(UItemDataAsset* NewItemData);

	UPROPERTY(VisibleAnywhere)
	USkeletalMeshComponent* ItemMesh;

	/*UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Item")
	UItemDataAsset* ItemDataAsset;*/

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Item")
	TArray<UItemDataAsset*> ItemDataList;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Item")
	UItemDataAsset* ItemDataAsset;

	void OnPickup(class AMainCharacter* MainCharacter);

	void ThrowItem(class AMainCharacter* MainCharacter);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void OnConstruction(const FTransform& Transform) override;

	void RandomItemData();

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Item|Attack")
	TSubclassOf<AActor> ItemAttackSpawnClass;

protected:
	UPROPERTY(VisibleAnywhere, Category = "Item|Collision")
	UCapsuleComponent* CapsuleCollision;

	UPROPERTY(VisibleAnywhere, Category = "Item|Collision")
	UBoxComponent* BoxCollision;

	UPROPERTY(VisibleAnywhere, Category = "Item|Collision")
	USphereComponent* SphereCollision;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	class UHandLightComponent* HandLightComponent;

private:
	void AttackSpawn();

	float AttackSpawnTime = 2.0f;
	FTimerHandle AttackSpawnTimerHandle;
	AMainCharacter* OwnerCharacter;
};
