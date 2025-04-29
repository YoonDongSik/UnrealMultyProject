// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EItemType.h"
#include "Engine/DataAsset.h"
#include "EItemType.h"
#include "EItemCollisionType.h"
#include "ItemDataAsset.generated.h"

/**
 *
 */
UCLASS(Blueprintable)
class HORRORGAME_API UItemDataAsset : public UDataAsset
{
	GENERATED_BODY()

public:
	UItemDataAsset();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
	FText ItemName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
	FText ItemDescription;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
	class UTexture2D* ItemIcon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
	class USkeletalMesh* ItemMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
	EItemType ItemType;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Visual")
	FVector ItemScale = FVector(1.0f, 1.0f, 1.0f);

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Collision")
	float CapsuleRadius = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Collision")
	float CapsuleHalfHeight = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Collision")
	float SphereRadius = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Collision")
	FVector BoxExtent = FVector(0.0f, 0.0f, 0.0f);

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Collision")
	EItemCollisionType ItemCollisionType = EItemCollisionType::None;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Collision")
	FRotator CollisionRotation = FRotator::ZeroRotator;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Collision")
	FVector CollisionOffset = FVector::ZeroVector;
};
