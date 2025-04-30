#include "ItemBaseActor.h"
#include "MainCharacter.h"

AItemBaseActor::AItemBaseActor()
{
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

void AItemBaseActor::BeginPlay()
{
	Super::BeginPlay();
}

void AItemBaseActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// ✅ 아이템 데이터 적용
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

// ✅ 손에 장착
void AItemBaseActor::OnPickup(AMainCharacter* MainCharacter)
{
	if (!MainCharacter) return;

	AttachToComponent(MainCharacter->GetMesh(), FAttachmentTransformRules::SnapToTargetNotIncludingScale, FName("ItemSocket"));

	SetActorRelativeLocation(ItemDataAsset->CollisionOffset);
	SetActorRelativeRotation(ItemDataAsset->CollisionRotation);
	SetActorScale3D(ItemDataAsset->ItemScale);
}

// ✅ 에디터에서 실시간 미리보기용
void AItemBaseActor::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);

	if (ItemDataAsset)
	{
		ItemMesh->SetSkeletalMesh(ItemDataAsset->ItemMesh);
		ItemMesh->SetWorldScale3D(ItemDataAsset->ItemScale);

		// 충돌 전부 초기화
		BoxCollision->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		CapsuleCollision->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		SphereCollision->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		ItemMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);

		// 타입에 따라 콜리전 설정
		switch (ItemDataAsset->ItemCollisionType)
		{
		case EItemCollisionType::Box:
			BoxCollision->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
			BoxCollision->SetBoxExtent(ItemDataAsset->BoxExtent);
			BoxCollision->SetRelativeLocation(ItemDataAsset->CollisionOffset);
			BoxCollision->SetRelativeRotation(ItemDataAsset->CollisionRotation);
			BoxCollision->SetCollisionProfileName("BlockAll");
			break;

		case EItemCollisionType::Capsule:
			CapsuleCollision->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
			CapsuleCollision->SetCapsuleRadius(ItemDataAsset->CapsuleRadius);
			CapsuleCollision->SetCapsuleHalfHeight(ItemDataAsset->CapsuleHalfHeight);
			CapsuleCollision->SetRelativeLocation(ItemDataAsset->CollisionOffset);
			CapsuleCollision->SetRelativeRotation(ItemDataAsset->CollisionRotation);
			CapsuleCollision->SetCollisionProfileName("BlockAll");
			break;

		case EItemCollisionType::Sphere:
			SphereCollision->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
			SphereCollision->SetSphereRadius(ItemDataAsset->SphereRadius);
			SphereCollision->SetRelativeLocation(ItemDataAsset->CollisionOffset);
			SphereCollision->SetRelativeRotation(ItemDataAsset->CollisionRotation);
			SphereCollision->SetCollisionProfileName("BlockAll");
			break;
		}
	}
}
