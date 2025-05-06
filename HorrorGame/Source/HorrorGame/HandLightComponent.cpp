// Fill out your copyright notice in the Description page of Project Settings.


#include "HandLightComponent.h"

// Sets default values for this component's properties
UHandLightComponent::UHandLightComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...

	HandLight = CreateDefaultSubobject<USpotLightComponent>(TEXT("HandLight"));

	HandLight->SetIntensity(3000.0f);
	HandLight->SetLightColor(FLinearColor::Yellow);
	HandLight->SetAttenuationRadius(500.0f);
	HandLight->SetOuterConeAngle(45.0f);
	HandLight->SetVisibility(false);

}

void UHandLightComponent::ToggleLight()
{
	if (HandLight)
	{
		bIsLightOn = !bIsLightOn;
		HandLight->SetVisibility(bIsLightOn);
	}
}


// Called when the game starts
void UHandLightComponent::BeginPlay()
{
	Super::BeginPlay();
	ItemBaseActor = Cast<AItemBaseActor>(GetOwner());
	if (ItemBaseActor)
	{
		if (ItemBaseActor->ItemDataAsset)
		{
			if (ItemBaseActor->ItemDataAsset->ItemType == EItemType::HandLight)
			{
				if (ItemBaseActor->ItemMesh)
				{
					HandLight->AttachToComponent(ItemBaseActor->ItemMesh, FAttachmentTransformRules::SnapToTargetNotIncludingScale, FName("SporLightSocket"));
				}
			}
		}
	}
}


