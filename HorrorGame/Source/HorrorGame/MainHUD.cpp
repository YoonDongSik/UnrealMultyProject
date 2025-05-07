// Fill out your copyright notice in the Description page of Project Settings.


#include "MainHUD.h"
#include "MainCharacter.h"
#include "Kismet/GameplayStatics.h"
#include "InventoryWidget.h"
#include "MainPlayerController.h"

void AMainHUD::BeginPlay()
{
	Super::BeginPlay();

	if (MainWidgetClass)
	{
		UWorld* World = GetWorld();

		MainWidget = CreateWidget<UMainWidget>(World, MainWidgetClass);
		if (MainWidget)
		{
			MainWidget->AddToViewport();
			// ✅ PlayerController에 MainWidget 전달
			if (AMainPlayerController* PC = Cast<AMainPlayerController>(UGameplayStatics::GetPlayerController(World, 0)))
			{
				PC->SetMainWidget(MainWidget);
			}

			// ✅ InventoryWidget 유효성 체크 후 SetVisibility 및 아이템 슬롯 클래스 설정
			if (MainWidget->InventoryWidget)
			{
				MainWidget->InventoryWidget->SetVisibility(ESlateVisibility::Collapsed);
				MainWidget->InventoryWidget->ItemSlotClass = WBP_ItemSlotClass;
				MainWidget->SetupInventorySlotClass(WBP_ItemSlotClass);
			}
			else
			{
				UE_LOG(LogTemp, Error, TEXT("❌ InventoryWidget가 nullptr입니다! 바인딩 확인 필요!"));
			}
		}
		// ✅ 인벤토리 컴포넌트 연결
		if (AMainCharacter* MainCharacter = Cast<AMainCharacter>(UGameplayStatics::GetPlayerCharacter(World, 0)))
		{
			InventoryComponent = MainCharacter->InventoryComponent;

			if (InventoryComponent && MainWidget && MainWidget->InventoryWidget)
			{
				InventoryComponent->SetInventoryWidget(MainWidget->InventoryWidget);
			}
		}
	}
}
