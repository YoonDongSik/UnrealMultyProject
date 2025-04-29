#include "UserbleItem.h"
#include "MainCharacter.h"
#include "ItemDataAsset.h" // 꼭 include 해야 함!!

void UUserbleItem::UseItem(AMainCharacter* Character, UItemDataAsset* DataAsset)
{
	if (!Character || !DataAsset) return;

	const FString ItemName = DataAsset->ItemName.ToString();

	if (ItemName == "Adrenaline")
	{
		// 아드레날린 사용 로직
		UE_LOG(LogTemp, Warning, TEXT("아드레날린 사용!"));
		// 예시: 체력 증가
		// Character->Health += 20;
	}
	else if (ItemName == "Bandage")
	{
		// 붕대 사용 로직
		UE_LOG(LogTemp, Warning, TEXT("붕대 사용!"));
		// Character->Health += 10;
	}
	else if (ItemName == "HealthKit")
	{
		// 의료 키트 사용 로직
		UE_LOG(LogTemp, Warning, TEXT("의료 키트 사용!"));
		// Character->Health += 50;
	}
	else if (ItemName == "Painkiller")
	{
		// 진통제 사용 로직
		UE_LOG(LogTemp, Warning, TEXT("진통제 사용!"));
		// Character->DamageResistance += 10;
	}
	else if (ItemName == "ElectricOrb")
	{
		// 전기 오브 사용 로직
		UE_LOG(LogTemp, Warning, TEXT("전기 오브 사용!"));
	}
	else if (ItemName == "IceOrb")
	{
		// 얼음 오브 사용 로직
		UE_LOG(LogTemp, Warning, TEXT("얼음 오브 사용!"));
	}
	else if (ItemName == "HandLight")
	{
		// 손전등 장착 로직
		UE_LOG(LogTemp, Warning, TEXT("손전등 장착!"));
	}
	else
	{
		// 알 수 없는 아이템
		UE_LOG(LogTemp, Warning, TEXT("알 수 없는 아이템 사용 시도: %s"), *ItemName);
	}
}
