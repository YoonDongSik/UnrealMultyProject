// Fill out your copyright notice in the Description page of Project Settings.


#include "GhostEnemyPawn.h"
#include "GhostEnemyAnimInstance.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AGhostEnemyPawn::AGhostEnemyPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	HammerBox = CreateDefaultSubobject<UBoxComponent>(TEXT("HammerBox"));
	HammerBox->SetupAttachment(GetMesh(), TEXT("HammerSocket"));

	HammerBox->OnComponentBeginOverlap.AddDynamic(this, &AGhostEnemyPawn::OnHitAttackBeginOverlap);

}

// Called when the game starts or when spawned
void AGhostEnemyPawn::BeginPlay()
{
	Super::BeginPlay();
	AnimInstance = GetMesh()->GetAnimInstance();
	
}

void AGhostEnemyPawn::PlayAttack()
{
	PlayHighPriorityMontage(AttackMontage);
}

void AGhostEnemyPawn::PlayHighPriorityMontage(UAnimMontage* Montage, FName StartSectionName)
{
	if (!AnimInstance->Montage_IsPlaying(Montage))	// Montage가 재생 중이 아니면
	{
		CurrentMontage = Montage;					// Montage를 CurrentMontage로 지정
		PlayAnimMontage(CurrentMontage, 1.0f, StartSectionName);	// Montage 재생
	}
}

void AGhostEnemyPawn::OnHitAttackBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor && OtherActor != this)
	{
		if (OtherActor->ActorHasTag("Player"))
		{
			UGameplayStatics::ApplyDamage(OtherActor, 30.0f, GetController(), this, nullptr);
		}
	}
}

// Called every frame
void AGhostEnemyPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void AGhostEnemyPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

