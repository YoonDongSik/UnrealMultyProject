// Fill out your copyright notice in the Description page of Project Settings.


#include "ItemBaseActor.h"
#include "MainCharacter.h"
#include "HandLightComponent.h"

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


	HandLightComponent = CreateDefaultSubobject<UHandLightComponent>(TEXT("HandLightComponent"));
	HandLightComponent->SetupAttachment(ItemMesh, FName("SpotLightSocket"));

	Tags.Add(FName("Item"));
}

void AItemBaseActor::SetItemData(UItemDataAsset* NewItemData)
{
	if (!NewItemData) return;

	ItemDataAsset = NewItemData;

	if (ItemMesh && ItemDataAsset->ItemMesh)
	{
		ItemMesh->SetSkeletalMesh(ItemDataAsset->ItemMesh);
		ItemMesh->SetRelativeLocation(FVector::ZeroVector); // 위치 초기화
		ItemMesh->SetRelativeRotation(FRotator::ZeroRotator); // 회전 초기화
		ItemMesh->SetRelativeScale3D(FVector(1.0f)); // 스케일 초기화
	}

	// 충돌 끄기 (들고 있을 땐 충돌 X)
	ItemMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	// 스케일 적용
	SetActorScale3D(ItemDataAsset->ItemScale);
}

void AItemBaseActor::OnPickup(class AMainCharacter* MainCharacter)
{
	if (!MainCharacter) return;

	AttachToComponent(MainCharacter->GetMesh(), FAttachmentTransformRules::SnapToTargetNotIncludingScale, FName("ItemSocket"));

	SetActorRelativeLocation(ItemDataAsset->CollisionOffset);
	SetActorRelativeRotation(ItemDataAsset->CollisionRotation);
	SetActorScale3D(ItemDataAsset->ItemScale);
}

void AItemBaseActor::ThrowItem(AMainCharacter* MainCharacter)
{
	if (ItemDataAsset)
	{
		ItemMesh->SetMassOverrideInKg(NAME_None, 3.0f);
		DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);

		//FVector Velocity = ItemMesh->GetPhysicsLinearVelocity();
		//UE_LOG(LogTemp, Warning, TEXT("Velocity: %s"), *Velocity.ToString());
		ItemMesh->SetPhysicsLinearVelocity(FVector::ZeroVector);
		ItemMesh->SetPhysicsAngularVelocityInDegrees(FVector::ZeroVector);

		ItemMesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
		ItemMesh->SetCollisionProfileName(FName("ThrowItem"));
		//ItemMesh->SetCollisionProfileName(FName("BlockAll"));
		ItemMesh->SetSimulatePhysics(true);
		ItemMesh->SetEnableGravity(true);

		float ThrowPower = 700.0f;

		/*FVector ForwardVector = MainCharacter->GetActorForwardVector();*/
		FVector ForwardVector = MainCharacter->GetControlRotation().Vector();
		FVector ThrowDirection = (ForwardVector + FVector(0, 0, 1.0f)).GetSafeNormal();

		ItemMesh->AddImpulse(ThrowDirection * ThrowPower, NAME_None, true);

		GetWorldTimerManager().SetTimer(AttackSpawnTimerHandle, this, &AItemBaseActor::AttackSpawn, AttackSpawnTime, false);
	}
}

// Called when the game starts or when spawned
void AItemBaseActor::BeginPlay()
{
	Super::BeginPlay();

	APlayerController* PC = GetWorld()->GetFirstPlayerController();
	if (PC)
	{
		OwnerCharacter = Cast<AMainCharacter>(PC->GetPawn());
	}
	if (ItemDataAsset)
	{
		ItemAttackSpawnClass = ItemDataAsset->AttackSpawnClass;
	}
}

void AItemBaseActor::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);
	if (ItemDataAsset)
	{
		ItemMesh->SetSkeletalMesh(ItemDataAsset->ItemMesh);
		ItemMesh->SetWorldScale3D(ItemDataAsset->ItemScale);
		/*ItemMesh->SetSimulatePhysics(true);
		ItemMesh->SetEnableGravity(true);*/
		ItemMesh->SetCollisionProfileName(FName("BlockAll"));
		ItemMesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);

		BoxCollision->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		CapsuleCollision->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		SphereCollision->SetCollisionEnabled(ECollisionEnabled::NoCollision);

		switch (ItemDataAsset->ItemCollisionType)
		{
		case EItemCollisionType::Box:
			BoxCollision->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
			BoxCollision->SetCollisionProfileName(FName("BlockAll"));
			BoxCollision->SetBoxExtent(ItemDataAsset->BoxExtent);
			BoxCollision->SetRelativeRotation(ItemDataAsset->CollisionRotation);
			BoxCollision->SetRelativeLocation(ItemDataAsset->CollisionOffset);
			break;
		case EItemCollisionType::Capsule:
			CapsuleCollision->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
			CapsuleCollision->SetCollisionProfileName(FName("BlockAll"));
			CapsuleCollision->SetCapsuleRadius(ItemDataAsset->CapsuleRadius);
			CapsuleCollision->SetCapsuleHalfHeight(ItemDataAsset->CapsuleHalfHeight);
			CapsuleCollision->SetRelativeRotation(ItemDataAsset->CollisionRotation);
			CapsuleCollision->SetRelativeLocation(ItemDataAsset->CollisionOffset);
			break;
		case EItemCollisionType::Sphere:
			SphereCollision->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
			SphereCollision->SetSphereRadius(ItemDataAsset->SphereRadius);
			SphereCollision->SetRelativeRotation(ItemDataAsset->CollisionRotation);
			SphereCollision->SetRelativeLocation(ItemDataAsset->CollisionOffset);
			SphereCollision->SetCollisionProfileName(FName("BlockAll"));
			break;
		}
	}
}

// Called every frame
void AItemBaseActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AItemBaseActor::AttackSpawn()
{
	if (!ItemAttackSpawnClass || !OwnerCharacter) return;

	FActorSpawnParameters SpawnParams;
	SpawnParams.Owner = OwnerCharacter;
	SpawnParams.Instigator = OwnerCharacter->GetInstigator();

	FVector SpawnLocation = ItemMesh->GetComponentLocation();
	FRotator SpawnRotation = ItemMesh->GetComponentRotation();

	GetWorld()->SpawnActor<AActor>(ItemAttackSpawnClass, SpawnLocation, SpawnRotation, SpawnParams);

	Destroy();
}

