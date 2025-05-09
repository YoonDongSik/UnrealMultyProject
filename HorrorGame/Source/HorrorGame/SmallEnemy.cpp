// Fill out your copyright notice in the Description page of Project Settings.


#include "SmallEnemy.h"
#include "SmallEnemyAnimInstance.h"
#include "Kismet/GameplayStatics.h"
#include "NiagaraFunctionLibrary.h"

ASmallEnemy::ASmallEnemy()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	BreathCapsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("BreathCapsule"));
	BreathCapsule->SetupAttachment(GetMesh(), TEXT("FX_FireBreath"));
}

void ASmallEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (bIsPlayerInAttack)
	{
		BreathCapsule->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	}
	else
	{
		BreathCapsule->SetCollisionEnabled(ECollisionEnabled::NoCollision);

		if (AnimInstance && AnimInstance->Montage_IsPlaying(AttackMontage))
		{
			AnimInstance->Montage_Stop(0.2f, AttackMontage);
		}

		if (BreathEffectComp)
		{
			BreathEffectComp->Deactivate();
			BreathEffectComp->DestroyComponent();
			BreathEffectComp = nullptr;
		}

	}
}

void ASmallEnemy::PlayAttack()
{
	PlayHighPriorityMontage(AttackMontage);

	if (BreathFX)
	{
		FTransform SocketTransform = Mesh->GetSocketTransform(TEXT("FX_FireBreath"), RTS_World);
		BreathEffectComp = UNiagaraFunctionLibrary::SpawnSystemAtLocation(GetWorld(), 
		BreathFX, SocketTransform.GetLocation(),
		SocketTransform.GetRotation().Rotator(), FVector(0.5f, 0.5f, 0.5f), true);
	}
}

void ASmallEnemy::BeginPlay()
{
	Super::BeginPlay();

	AnimInstance = GetMesh()->GetAnimInstance();

	Mesh = GetMesh();

	BreathCapsule->OnComponentBeginOverlap.AddDynamic(this, &ASmallEnemy::OnHitAttackBeginOverlap);
	BreathCapsule->OnComponentEndOverlap.AddDynamic(this, &ASmallEnemy::OnHitAttackEndOverlap);
}

void ASmallEnemy::PlayHighPriorityMontage(UAnimMontage* Montage, FName StartSectionName)
{
	if (!AnimInstance->Montage_IsPlaying(Montage))	// Montage가 재생 중이 아니면
	{
		CurrentMontage = Montage;					// Montage를 CurrentMontage로 지정
		PlayAnimMontage(CurrentMontage, 1.0f, StartSectionName);	// Montage 재생
	}
}

void ASmallEnemy::OnHitAttackBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor && OtherActor != this)
	{
		if (OtherActor->ActorHasTag("Player"))
		{
			if (!bIsBurningPlayer)
			{
				bIsBurningPlayer = true;
				DamagedActor = OtherActor;

				// 0.5초마다 틱 데미지 적용
				GetWorld()->GetTimerManager().SetTimer(BurningTimerHandle, this, &ASmallEnemy::BurningDamage, 0.2f, true);
			}
		}
	}
}

void ASmallEnemy::OnHitAttackEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (OtherActor && OtherActor != this)
	{
		if (OtherActor->ActorHasTag("Player"))
		{
			bIsBurningPlayer = false;
			DamagedActor = nullptr;
			GetWorld()->GetTimerManager().ClearTimer(BurningTimerHandle);
		}
	}
}

void ASmallEnemy::BurningDamage()
{
	if (DamagedActor && bIsBurningPlayer)
	{
		UGameplayStatics::ApplyDamage(DamagedActor, 1.0f, GetController(), this, UDamageType::StaticClass());
	}
	else
	{
		bIsBurningPlayer = false;
		GetWorld()->GetTimerManager().ClearTimer(BurningTimerHandle);
	}
}
