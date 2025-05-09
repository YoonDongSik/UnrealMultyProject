// Fill out your copyright notice in the Description page of Project Settings.


#include "LadderActor.h"
#include "MainCharacter.h"
#include "Kismet/GameplayStatics.h"
#include "MainPlayerController.h"

// Sets default values
ALadderActor::ALadderActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	LadderMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("LadderMesh"));
	LadderMesh->SetupAttachment(RootComponent);

	StartSphere = CreateDefaultSubobject<USphereComponent>(TEXT("StartSphere"));
	StartSphere->SetupAttachment(LadderMesh);

	ClearSphere = CreateDefaultSubobject<USphereComponent>(TEXT("ClearSphere"));
	ClearSphere->SetupAttachment(LadderMesh);

	Tags.Add(FName("Ladder"));

}

void ALadderActor::ClimbLadder()
{
	float Distance = FVector::Dist(GetActorLocation(), MainCharacter->GetActorLocation());
	if (Distance >= 100.0f)
	{
		if (LadderClimbCamera)
		{
			APlayerController* PC = UGameplayStatics::GetPlayerController(GetWorld(), 0);
			if (PC)
			{
				PC->SetViewTargetWithBlend(LadderClimbCamera, 0.5f);
			}
		}
		FVector GetStartLocation = StartSphere->GetComponentLocation();
		FRotator GetStartRotation = StartSphere->GetComponentRotation();
		MainCharacter->SetActorLocation(GetStartLocation);
		MainCharacter->GetController()->SetControlRotation(GetStartRotation);
		MainCharacter->SetActorRotation(GetStartRotation);
		MainCharacter->GetCharacterMovement()->SetMovementMode(EMovementMode::MOVE_Flying);
		MainCharacter->PlayHighPriorityMontage(MainCharacter->ClimbMontage);
	}

	MainCharacter->LadderActor = this;
}

void ALadderActor::ClimbStep()
{
	FinishLocation = MainCharacter->GetActorLocation();
	FinishLocation.Z += ClimbStepHeight;
	bIsClimbing = true;
}

void ALadderActor::GameClear(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
 	if (OtherActor && OtherActor != this)
	{
		if (OtherActor->ActorHasTag("Player"))
		{
			AMainPlayerController* PC = Cast<AMainPlayerController>(UGameplayStatics::GetPlayerController(GetWorld(), 0));
			if (PC)
			{
				UMainWidget* MainWidget = PC->GetMainWidget();
				if (MainWidget && MainWidget->ClearWidget)
				{
					MainWidget->ClearWidget->SetVisibility(ESlateVisibility::Visible);
					PC->bShowMouseCursor = true;
					FInputModeUIOnly InputMode;
				}
			}
		}
	}
}

// Called when the game starts or when spawned
void ALadderActor::BeginPlay()
{
	Super::BeginPlay();

	MainCharacter = Cast<AMainCharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));

	ClearSphere->OnComponentBeginOverlap.AddDynamic(this, &ALadderActor::GameClear);
	
}

// Called every frame
void ALadderActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (bIsClimbing)
	{
		FVector CurrentLocation = MainCharacter->GetActorLocation();
		FVector NewLocation = FMath::VInterpTo(CurrentLocation, FinishLocation, DeltaTime, ClimbSpeed);
		MainCharacter->SetActorLocation(NewLocation);

		if (FVector::Dist(NewLocation, FinishLocation) < 1.0f)
		{
			MainCharacter->SetActorLocation(FinishLocation);
			bIsClimbing = false;
		}
	}
}

