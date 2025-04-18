// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "PlayerAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class HORRORGAME_API UPlayerAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

public:
	virtual void NativeInitializeAnimation() override;

	virtual void NativeUpdateAnimation(float DeltaSeconds) override;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	bool bIsCrouchAnim = false;

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Movement")
	float Speed = 0.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "PickUp")
	bool bIsPickUp = false;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "PickUp")
	bool FlashItem = false;

	UPROPERTY()
	class AMainCharacter* PlayerCharacter = nullptr;
};
