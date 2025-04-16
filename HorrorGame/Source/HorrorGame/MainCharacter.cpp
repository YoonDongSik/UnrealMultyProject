// Fill out your copyright notice in the Description page of Project Settings.


#include "MainCharacter.h"
#include "PlayerAnimInstance.h"
#include "Camera/CameraComponent.h"

// Sets default values
AMainCharacter::AMainCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CharacterMesh = GetMesh();

	GetCharacterMovement()->NavAgentProps.bCanCrouch = true;

	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArm->SetupAttachment(RootComponent);
	SpringArm->TargetArmLength = 50.0f;
	SpringArm->SocketOffset = FVector(0.0f);
	SpringArm->bUsePawnControlRotation = true;

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(SpringArm);
	Camera->SetRelativeLocation(FVector(-20.0f, 0.0f, 0.0f));

	bUseControllerRotationYaw = true;
	GetCharacterMovement()->bOrientRotationToMovement = false;
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 360.0f, 0.0f);

	

	Tags.Add("Player");
	InventoryComponent = CreateDefaultSubobject<UInventoryComponent>(TEXT("InventoryComponent"));
}

void AMainCharacter::Movement(const FVector& MoveValue)
{
	AddMovementInput(MoveValue);
}

void AMainCharacter::PlayJumpMontage()
{
	PlayHighPriorityMontage(JumpMontage);
	Stemina -= 5;
}

void AMainCharacter::DoCrouching()
{
	bIsCrouched = !bIsCrouched;

	UPlayerAnimInstance* PlayerAnimInstance = Cast<UPlayerAnimInstance>(AnimInstance);
	if (PlayerAnimInstance)
	{
		PlayerAnimInstance->bIsCrouchAnim = bIsCrouched;
	}

	if (bIsCrouched)
	{
		Crouch();
		SpringArm->SetRelativeLocation(FVector(60.0f, 0.0f, 0.0f));
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::White, FString::Printf(TEXT("Crouching True")));
	}
	else
	{
		UnCrouch();
		SpringArm->SetRelativeLocation(FVector(50.0f, 0.0f, 70.0f));
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::White, FString::Printf(TEXT("Crouching false")));
	}
}

// Called when the game starts or when spawned
void AMainCharacter::BeginPlay()
{
	Super::BeginPlay();

	AnimInstance = GetMesh()->GetAnimInstance();
	bUseControllerRotationYaw = true;

	Health = MaxHealth;
	OnHealthChanged.Broadcast(Health / MaxHealth);
	/*FString DebugMessage = FString::Printf(TEXT("bUseControllerRotationYaw: %s"), bUseControllerRotationYaw ? TEXT("true") : TEXT("false"));
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, DebugMessage);*/

	if (InventoryComponent)
	{
		UE_LOG(LogTemp, Warning, TEXT("인벤토리 컴포넌트 활성화됨"));

		// 인벤토리에 들어있는 아이템들 순회해서 출력
		for (UItemDataAsset* Item : InventoryComponent->InventoryItems)
		{
			if (Item)
			{
				UE_LOG(LogTemp, Warning, TEXT("미리 설정된 아이템 있음: %s"), *Item->ItemName.ToString());
			}
		}
	}
}

void AMainCharacter::PlayHighPriorityMontage(UAnimMontage* Montage, FName StartSectionName)
{
	if (!AnimInstance->Montage_IsPlaying(Montage))	// Montage가 재생 중이 아니면
	{
		CurrentMontage = Montage;					// Montage를 CurrentMontage로 지정
		PlayAnimMontage(CurrentMontage, 1.0f, StartSectionName);	// Montage 재생
	}
}

void AMainCharacter::UseCurrentItem()
{

}

AActor* AMainCharacter::CheckDrawerTag()
{
	APlayerController* PlayerController = Cast<APlayerController>(GetController());

	if (PlayerController)
	{
		int32 ViewportSizeX, ViewportSizeY;
		PlayerController->GetViewportSize(ViewportSizeX, ViewportSizeY);

		FVector WorldLocation, WorldDirection;
		PlayerController->DeprojectScreenPositionToWorld(ViewportSizeX / 2, ViewportSizeY / 2, WorldLocation, WorldDirection);

		FHitResult HitResult;
		FVector TraceEnd = WorldLocation + (WorldDirection * 200.f);

		FCollisionQueryParams CollisionParams;
		CollisionParams.AddIgnoredActor(this);

		bool bHit = GetWorld()->LineTraceSingleByChannel(HitResult, WorldLocation, TraceEnd, ECC_Visibility, CollisionParams);

		if (bHit)
		{
			AActor* HitActor = HitResult.GetActor();

			if (HitActor->ActorHasTag("Drawer"))
			{
				return HitActor;
			}
			else if (HitActor->ActorHasTag("Item"))
			{
				return HitActor;
			}

			
		}

	//	if (bHit)
	//	{
	//		// 히트된 컴포넌트를 직접 가져오기
	//		if (HitResult.GetComponent())
	//		{
	//			UStaticMeshComponent* HitMesh = Cast<UStaticMeshComponent>(HitResult.GetComponent());


	//			// 히트된 컴포넌트가 "Drawer" 태그를 가지고 있는지 확인
	//			if (HitMesh && HitMesh->ComponentHasTag(TEXT("Drawer")))
	//			{
	//				return HitMesh;
	//			}
	//			else
	//			{
	//				GEngine->AddOnScreenDebugMessage(-1, 5, FColor::White, FString::Printf(TEXT("HitMesh is not a Drawer")));
	//			}
	//		}
	//	}
	}
	return nullptr;
}

//UStaticMeshComponent* AMainCharacter::FindTaggedMesh(AActor* Actor, FName Tag)
//{
//	if (!Actor) return nullptr;
//
//	TInlineComponentArray<UStaticMeshComponent*> MeshComponents;
//	Actor->GetComponents(MeshComponents);
//
//	for (UActorComponent* Component : MeshComponents)
//	{
//		UStaticMeshComponent* MeshComp = Cast<UStaticMeshComponent>(Component);
//		if (MeshComp && MeshComp->ComponentHasTag(Tag))
//		{
//			return MeshComp;
//		}
//	}
//	return nullptr;
//}

// Called every frame
void AMainCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (bIsRunning)
	{
		Stemina -= 10 * DeltaTime;
		if (Stemina < 0)
		{
			Stemina = 0;
			SetWalkMode();
		}
	}
	else
	{
		Stemina += 5 * DeltaTime;
		if (Stemina > 100)
		{
			Stemina = 100;
		}
	}

	if (Health >= MaxHealth)
	{
		Health = MaxHealth;
		OnHealthChanged.Broadcast(Health / MaxHealth);
	}

	//GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Yellow, FString::Printf(TEXT("Current Stemina : %.f"), Stemina));
	OnStaminaChanged.Broadcast(Stemina / 100);
}

// Called to bind functionality to input
void AMainCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}