#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ItemDataAsset.h"
#include "Components/CapsuleComponent.h"
#include "Components/BoxComponent.h"
#include "Components/SphereComponent.h"
#include "ItemBaseActor.generated.h"

UCLASS()
class HORRORGAME_API AItemBaseActor : public AActor
{
	GENERATED_BODY()

public:
	AItemBaseActor();

	// 아이템 데이터 적용
	void SetItemData(UItemDataAsset* NewItemData);

	// 플레이어 손에 붙이기
	void OnPickup(class AMainCharacter* MainCharacter);

protected:
	virtual void BeginPlay() override;
	virtual void OnConstruction(const FTransform& Transform) override;
	virtual void Tick(float DeltaTime) override;

public:
	UPROPERTY(VisibleAnywhere)
	USkeletalMeshComponent* ItemMesh;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Item")
	UItemDataAsset* ItemDataAsset;


protected:
	UPROPERTY(VisibleAnywhere, Category = "Item|Collision")
	UCapsuleComponent* CapsuleCollision;

	UPROPERTY(VisibleAnywhere, Category = "Item|Collision")
	UBoxComponent* BoxCollision;

	UPROPERTY(VisibleAnywhere, Category = "Item|Collision")
	USphereComponent* SphereCollision;
};
