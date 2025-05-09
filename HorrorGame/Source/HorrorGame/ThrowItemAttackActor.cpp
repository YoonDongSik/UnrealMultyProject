// Fill out your copyright notice in the Description page of Project Settings.


#include "ThrowItemAttackActor.h"
#include "Kismet/GameplayStatics.h"
#include "ItemBaseActor.h"
#include "EnemyBasePawn.h"
#include "GhostEnemyPawn.h"

// Sets default values
AThrowItemAttackActor::AThrowItemAttackActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	AttackSphere = CreateDefaultSubobject<USphereComponent>(TEXT("AttackSphere"));
	AttackSphere->SetupAttachment(RootComponent);
	AttackSphere->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	AttackSphere->SetCollisionProfileName(FName("OverlapAll"));
	AttackSphere->SetSphereRadius(170.0f);

	AttackParticleComponent = CreateDefaultSubobject<UNiagaraComponent>(TEXT("AttackParticleComponent"));
	AttackParticleComponent->SetupAttachment(AttackSphere);
	AttackParticleComponent->SetAutoActivate(false);

}

// Called when the game starts or when spawned
void AThrowItemAttackActor::BeginPlay()
{
	Super::BeginPlay();

	MainCharacter = Cast<AMainCharacter>(GetOwner());

	EffectAndAttack();

	AttackSphere->OnComponentBeginOverlap.AddDynamic(this, &AThrowItemAttackActor::OnAttackSphereBeginOverlap);
}

void AThrowItemAttackActor::EffectAndAttack()
{
	// Spawn the particle system at the location of the actor
	if (ElectricParticle || IceParticle)
	{
		if(MainCharacter->CurrentItem->ItemDataAsset->ItemID == EItemID::ElectricOrb)
		{
			AttackParticleComponent->SetAsset(ElectricParticle);
		}
		else if (MainCharacter->CurrentItem->ItemDataAsset->ItemID == EItemID::IceOrb)
		{
			AttackParticleComponent->SetAsset(IceParticle);
		}
		MainCharacter->CurrentItem = nullptr;
		AttackParticleComponent->Activate(true);
	}
	//// Perform attack logic here
	//TArray<AActor*> OverlappingActors;
	//AttackSphere->GetOverlappingActors(OverlappingActors);
	//for (AActor* Actor : OverlappingActors)
	//{
	//	if (Actor && Actor != this)
	//	{
	//		if (Actor->ActorHasTag("Enemy"))
	//		{
	//			AGhostEnemyPawn* Enemy = Cast<AGhostEnemyPawn>(Actor);
	//			Enemy->Stun();
	//		}
	//	}
	//}

	SetLifeSpan(4.0f); // Destroy the actor after 1 second
}

void AThrowItemAttackActor::OnAttackSphereBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor && OtherActor != this)
	{
		if (OtherActor->ActorHasTag("Enemy"))
		{
			AGhostEnemyPawn* Enemy = Cast<AGhostEnemyPawn>(OtherActor);
			if (Enemy)
			{
				Enemy->Stun();
			}
		}
	}
}

// Called every frame
void AThrowItemAttackActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

