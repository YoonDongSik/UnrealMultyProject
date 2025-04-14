// Fill out your copyright notice in the Description page of Project Settings.


#include "ItemBaseActor.h"
#include "Maincharacter.h"

// Sets default values
AItemBaseActor::AItemBaseActor()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ItemMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("ItemMesh"));
	SetRootComponent(ItemMesh);


}

void AItemBaseActor::OnPickup(class AMainCharacter* MainCharacter)
{
	AttachToComponent(MainCharacter->GetMesh(), FAttachmentTransformRules::SnapToTargetNotIncludingScale, FName("hand_r"));
}

// Called when the game starts or when spawned
void AItemBaseActor::BeginPlay()
{
	Super::BeginPlay();

}

void AItemBaseActor::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);
	if (ItemDataAsset)
	{
		ItemMesh->SetSkeletalMesh(ItemDataAsset->ItemMesh);
		ItemMesh->SetWorldScale3D(ItemDataAsset->ItemScale);
	}
}

// Called every frame
void AItemBaseActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

