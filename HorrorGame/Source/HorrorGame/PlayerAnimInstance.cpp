// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerAnimInstance.h"
#include "MainCharacter.h"
#include "ItemBaseActor.h"
#include "ItemDataAsset.h"

void UPlayerAnimInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();
	PlayerCharacter = Cast<AMainCharacter>(TryGetPawnOwner());
}

void UPlayerAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);
	
	if (PlayerCharacter)
	{
		Speed = PlayerCharacter->GetVelocity().Size();
		bIsCrouchAnim = PlayerCharacter->bIsCrouched;
		if (PlayerCharacter->CurrentItem && PlayerCharacter->CurrentItem->ItemDataAsset->ItemType == EItemType::HandLight)
		{
			FlashItem = true;
		}
		else
		{
			FlashItem = false;
		}
		if (FlashItem)
		{
			bIsPickUp = true;
		}
		else
		{
			bIsPickUp = false;
		}
	}

}

void UPlayerAnimInstance::AnimNotify_ThrowTiming()
{
	if (PlayerCharacter)
	{
		AItemBaseActor* ItemActor = Cast<AItemBaseActor>(PlayerCharacter->CurrentItem);
		if (ItemActor)
		{
			ItemActor->ThrowItem(PlayerCharacter);
			PlayerCharacter->CurrentItem = nullptr;
		}
	}
}
