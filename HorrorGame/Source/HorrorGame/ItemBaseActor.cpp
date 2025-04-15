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

	CapsuleCollision = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CapsuleCollision"));
	CapsuleCollision->SetupAttachment(ItemMesh);
	CapsuleCollision->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	BoxCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollision"));
	BoxCollision->SetupAttachment(ItemMesh);
	BoxCollision->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	SphereCollision = CreateDefaultSubobject<USphereComponent>(TEXT("SphereCollision"));
	SphereCollision->SetupAttachment(ItemMesh);
	SphereCollision->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	Tags.Add(FName("Item"));
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

		BoxCollision->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		CapsuleCollision->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		ItemMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);

		switch (ItemDataAsset->ItemCollisionType)
		{
		case EItemCollisionType::Box:
			BoxCollision->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
			BoxCollision->SetCollisionProfileName(FName("BlockAll"));
			BoxCollision->SetBoxExtent(ItemDataAsset->BoxExtent);
			BoxCollision->SetRelativeRotation(ItemDataAsset->CollisionRotation);
			BoxCollision->SetRelativeLocation(ItemDataAsset->CollisionOffset);
			ItemMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
			break;
		case EItemCollisionType::Capsule:
			CapsuleCollision->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
			CapsuleCollision->SetCollisionProfileName(FName("BlockAll"));
			CapsuleCollision->SetCapsuleRadius(ItemDataAsset->CapsuleRadius);
			CapsuleCollision->SetCapsuleHalfHeight(ItemDataAsset->CapsuleHalfHeight);
			CapsuleCollision->SetRelativeRotation(ItemDataAsset->CollisionRotation);
			CapsuleCollision->SetRelativeLocation(ItemDataAsset->CollisionOffset);
			ItemMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
			break;
		case EItemCollisionType::Sphere:
			SphereCollision->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
			SphereCollision->SetSphereRadius(ItemDataAsset->SphereRadius);
			SphereCollision->SetRelativeRotation(ItemDataAsset->CollisionRotation);
			SphereCollision->SetRelativeLocation(ItemDataAsset->CollisionOffset);
			SphereCollision->SetCollisionProfileName(FName("BlockAll"));
			ItemMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
			break;
		}
	}
}

// Called every frame
void AItemBaseActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

