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
	BreathCapsule->OnComponentBeginOverlap.AddDynamic(this, &ASmallEnemy::OnHitAttackBeginOverlap);
}

void ASmallEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ASmallEnemy::PlayAttack()
{
	PlayHighPriorityMontage(AttackMontage);

	if (BreathFX)
	{
		FTransform SocketTransform = Mesh->GetSocketTransform(TEXT("FX_FireBreath"), RTS_World);
	UNiagaraFunctionLibrary::SpawnSystemAtLocation(GetWorld(), 
		BreathFX, SocketTransform.GetLocation(),
		SocketTransform.GetRotation().Rotator());
	}
}

void ASmallEnemy::BeginPlay()
{
	Super::BeginPlay();

	AnimInstance = GetMesh()->GetAnimInstance();

	Mesh = GetMesh();
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
			UGameplayStatics::ApplyDamage(OtherActor, 30.0f, GetController(), this, nullptr);
		}
	}
}
