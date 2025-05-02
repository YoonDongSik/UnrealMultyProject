// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "Components/SpotLightComponent.h"
#include "ItemBaseActor.h"
#include "HandLightComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class HORRORGAME_API UHandLightComponent : public USceneComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UHandLightComponent();

	UFUNCTION(BlueprintCallable)
	void ToggleLight();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

protected:
	UPROPERTY(EditAnywhere, Category = "Light")
	AItemBaseActor* ItemBaseActor;

private:
	UPROPERTY(EditAnywhere, Category = "Light")
	USpotLightComponent* HandLight;

	UPROPERTY(EditAnywhere, Category = "Light")
	bool bIsLightOn = false;
};
