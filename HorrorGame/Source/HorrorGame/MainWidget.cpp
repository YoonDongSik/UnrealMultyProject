#include "MainWidget.h"
#include "MainCharacter.h"
#include "SteminaWidget.h"
#include "HealthWidget.h"
#include "InventoryWidget.h"

void UMainWidget::NativeConstruct()
{
	Super::NativeConstruct();

	APlayerController* PlayerController = GetOwningPlayer();
	if (PlayerController)
	{
		MainCharacter = Cast<AMainCharacter>(PlayerController->GetPawn());
	}

	if (MainCharacter && StaminaWidget)
	{
		MainCharacter->OnStaminaChanged.AddDynamic(StaminaWidget, &USteminaWidget::SteminaUpdate);
	}
	if (MainCharacter && HealthWidget)
	{
		MainCharacter->OnHealthChanged.AddDynamic(HealthWidget, &UHealthWidget::HealthUpdate);
	}

	if (InventoryWidget)
	{
		UE_LOG(LogTemp, Warning, TEXT("✅ InventoryWidget 바인딩 성공"));
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("❌ InventoryWidget 바인딩 실패"));
	}
}

void UMainWidget::SetupInventorySlotClass(TSubclassOf<UItemSlotWidget> InSlotClass)
{
	if (InventoryWidget)
	{
		InventoryWidget->ItemSlotClass = InSlotClass;
		UE_LOG(LogTemp, Warning, TEXT("✅ ItemSlotClass 전달 완료: %s"), *InSlotClass->GetName());
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("❌ InventoryWidget가 nullptr"));
	}
}
