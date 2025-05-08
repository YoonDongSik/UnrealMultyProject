// Fill out your copyright notice in the Description page of Project Settings.


#include "MainPlayerController.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "MainCharacter.h"
#include "Drawer.h"
#include "LadderActor.h"
#include "Components/SceneComponent.h"
#include "DoorActor.h"
#include "ItemBaseActor.h"

AMainPlayerController::AMainPlayerController()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AMainPlayerController::SetMouseSensitivity(float NewSensitivity)
{
	MouseSensitivity = NewSensitivity;
}

void AMainPlayerController::SetMainWidget(UMainWidget* InWidget)
{
	MainWidget = InWidget;
}

void AMainPlayerController::ToggleInventory()
{
	if (!bCanToggleInventory)
	{
		//UE_LOG(LogTemp, Warning, TEXT("⛔ 중복 호출 차단됨"));
		return;
	}

	bCanToggleInventory = false;
	GetWorldTimerManager().SetTimerForNextTick([this]()
		{
			bCanToggleInventory = true;
		});

	//UE_LOG(LogTemp, Warning, TEXT("🟡 ToggleInventory 함수 호출됨"));
	//UE_LOG(LogTemp, Warning, TEXT("🔁 토글 실행 시간: %f"), GetWorld()->GetTimeSeconds());
	if (!MainWidget || !MainWidget->InventoryWidget)
	{
		//UE_LOG(LogTemp, Error, TEXT("❌ MainWidget 또는 InventoryWidget이 nullptr입니다!"));
		return;
	}

	ESlateVisibility CurrentVisibility = MainWidget->InventoryWidget->GetVisibility();
	//UE_LOG(LogTemp, Warning, TEXT("현재 InventoryWidget Visibility: %d"), (int32)CurrentVisibility);

	if (CurrentVisibility == ESlateVisibility::Visible)
	{

		MainWidget->InventoryWidget->SetVisibility(ESlateVisibility::Collapsed);
		bShowMouseCursor = false;
		SetInputMode(FInputModeGameOnly());
		//UE_LOG(LogTemp, Warning, TEXT("🔒 인벤토리 닫힘, 마우스 커서 끔"));

		//UE_LOG(LogTemp, Warning, TEXT("📌 MainWidget = %s"), *GetNameSafe(MainWidget));
		//UE_LOG(LogTemp, Warning, TEXT("📌 InventoryWidget = %s"), *GetNameSafe(MainWidget ? MainWidget->InventoryWidget : nullptr));
	}
	else
	{
		MainWidget->InventoryWidget->SetVisibility(ESlateVisibility::Visible);

		// 새로고침
		MainWidget->InventoryWidget->RefreshInventory();
		//UE_LOG(LogTemp, Warning, TEXT("✅ 인벤토리 새로고침 호출됨"));

		bShowMouseCursor = true;
		FInputModeUIOnly InputMode;
		InputMode.SetWidgetToFocus(MainWidget->InventoryWidget->TakeWidget());
		InputMode.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);
		SetInputMode(InputMode);

		//UE_LOG(LogTemp, Warning, TEXT("📦 인벤토리 열림, 마우스 커서 켬"));
		//UE_LOG(LogTemp, Warning, TEXT("📌 MainWidget = %s"), *GetNameSafe(MainWidget));
		//UE_LOG(LogTemp, Warning, TEXT("📌 InventoryWidget = %s"), *GetNameSafe(MainWidget ? MainWidget->InventoryWidget : nullptr));
	}
}

void AMainPlayerController::BeginPlay()
{
	Super::BeginPlay();

	//ULocalPlayer* LocalPlayer = GetLocalPlayer();
	//if (LocalPlayer)
	//{
	//	UEnhancedInputLocalPlayerSubsystem* LocalPlayerSubsystem = LocalPlayer->GetSubsystem<UEnhancedInputLocalPlayerSubsystem>();
	//	if (LocalPlayerSubsystem && InputMappingContext)
	//	{
	//		LocalPlayerSubsystem->AddMappingContext(InputMappingContext, 0);
	//	}
	//}
	//if (MainWidgetClass)
	//{
	//	MainWidget = CreateWidget<UMainWidget>(this, MainWidgetClass);
	//	if (MainWidget)
	//	{
	//		MainWidget->AddToViewport();

	//		// 인벤토리 시작할 때 안 보이게
	//		MainWidget->InventoryWidget->SetVisibility(ESlateVisibility::Collapsed);
	//	}
	//}
}

void AMainPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(InputComponent);
	if (EnhancedInputComponent)
	{
		if (MoveAction)
		{
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AMainPlayerController::InputMove);
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Completed, this, &AMainPlayerController::ResetMove);
		}

		if (LookAction)
		{
		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &AMainPlayerController::InputLook);
		}

		if (LookOffsetMoveAction)
		{
		EnhancedInputComponent->BindAction(LookOffsetMoveAction, ETriggerEvent::Started, this, &AMainPlayerController::InputLookOffsetMove);
		}

		if (RunAction)
		{
			EnhancedInputComponent->BindAction(RunAction, ETriggerEvent::Started, this, &AMainPlayerController::InputRun);
			EnhancedInputComponent->BindAction(RunAction, ETriggerEvent::Completed, this, &AMainPlayerController::InputRun);
		}

		if (JumpAction)
		{
			EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Started, this, &AMainPlayerController::InputJump);
		}

		if (CrouchAction)
		{
			EnhancedInputComponent->BindAction(CrouchAction, ETriggerEvent::Started, this, &AMainPlayerController::InputCrouching);
		}

		if (DrawerAction)
		{
			EnhancedInputComponent->BindAction(DrawerAction, ETriggerEvent::Started, this, &AMainPlayerController::InputClick);
		}

		if (InterectionAction)
		{
			EnhancedInputComponent->BindAction(InterectionAction, ETriggerEvent::Started, this, &AMainPlayerController::InputInterection);
		}

		if (EnhancedInputComponent && IA_ToggleInventory)
		{
			EnhancedInputComponent->BindAction(IA_ToggleInventory, ETriggerEvent::Started, this, &AMainPlayerController::ToggleInventory);
			//UE_LOG(LogTemp, Warning, TEXT("🟢 I 키에 인벤토리 토글 바인딩 완료"));
		}
	}
}

void AMainPlayerController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);
	MainCharacter = Cast<AMainCharacter>(InPawn);
}

void AMainPlayerController::OnUnPossess()
{
	MainCharacter = nullptr;
	Super::OnUnPossess();
}

void AMainPlayerController::InputMove(const FInputActionValue& Value)
{
	bIsMoving = true;
	if (MainCharacter)
	{
		MoveValue = Value.Get<FVector2D>();

		float Size = MoveValue.Size();
		if (Size > 1.0f)
		{
			MoveValue /= Size;
		}

		FVector MoveDirection = FVector(MoveValue.Y, MoveValue.X, 0.0f);

		FQuat YawRotation = FRotator(0.0f, GetControlRotation().Yaw, 0.0f).Quaternion();
		MoveDirection = YawRotation.RotateVector(MoveDirection);

		MainCharacter->Movement(MoveDirection);
	}
}

void AMainPlayerController::ResetMove(const FInputActionValue& Value)
{
	bIsMoving = false;
	MainCharacter->SetWalkMode();
	//GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Green, FString::Printf(TEXT("WalkMode")));
}

void AMainPlayerController::InputLook(const FInputActionValue& Value)
{
	FVector2D InputValue = Value.Get<FVector2D>();

	AddYawInput(InputValue.X * MouseSensitivity);
	AddPitchInput(InputValue.Y * MouseSensitivity);
}

void AMainPlayerController::InputLookOffsetMove(const FInputActionValue& Value)
{
	bLookOffsetMove = !bLookOffsetMove;
	if (bLookOffsetMove)
	{
	USpringArmComponent* SpringArmOffset = MainCharacter->GetSpringArm();
	SpringArmOffset->TargetArmLength = 300.0f;
	MainCharacter->GetCharacterMovement()->bOrientRotationToMovement = true;
	MainCharacter->bUseControllerRotationYaw = false;
	}
	else
	{
		USpringArmComponent* SpringArmOffset = MainCharacter->GetSpringArm();
		SpringArmOffset->TargetArmLength = 50.0f;
		MainCharacter->GetCharacterMovement()->bOrientRotationToMovement = false;
		MainCharacter->bUseControllerRotationYaw = true;
	}

}

void AMainPlayerController::InputRun(const FInputActionValue& Value)
{
	bIsPressed = !bIsPressed;
	if (!bIsCrouch)
	{
		if (bIsPressed)
		{
			if (bIsMoving)
			{
				MainCharacter->SetRunMode();
				//GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Green, FString::Printf(TEXT("RunMode")));
			}
			else
			{
				MainCharacter->SetWalkMode();
				//GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Green, FString::Printf(TEXT("WalkMode")));
			}
		}
		else
		{
			MainCharacter->SetWalkMode();
			//GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Green, FString::Printf(TEXT("WalkMode")));
		}
	}
}

void AMainPlayerController::InputJump(const FInputActionValue& Value)
{
	if (MainCharacter)
	{
		float Stemina = MainCharacter->GetStemina();
		if (!bIsCrouch && !MainCharacter->GetCharacterMovement()->IsFalling() && Stemina >= 5)
		{
			MainCharacter->Jump();
			//GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Black, FString::Printf(TEXT("Play Jump")));
			MainCharacter->PlayJumpMontage();
		}
	}
}

void AMainPlayerController::InputCrouching(const FInputActionValue& Value)
{
	bIsCrouch = !bIsCrouch;

	if (bIsCrouch)
	{
		MainCharacter->DoCrouching();
		MainCharacter->SetCrouchMode();
		//GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Green, FString::Printf(TEXT("CrouchMode")));
	}
	else
	{
		MainCharacter->DoCrouching();
		MainCharacter->SetWalkMode();
	}
}

void AMainPlayerController::InputClick(const FInputActionValue& Value)
{
	if (MainCharacter->CheckDrawerTag())
	{
		AActor* TargetDrawer = MainCharacter->CheckDrawerTag();
		if (TargetDrawer->ActorHasTag("Drawer") && TargetDrawer)
		{
			ADrawer* DrawerActor = Cast<ADrawer>(TargetDrawer);

			DrawerActor->ToggleDrawer(TargetDrawer);
		}
	}
	else if (bIsPickUp)
	{
		MainCharacter->UseCurrentItem();
		if (MainCharacter->CurrentItem != nullptr && MainCharacter->CurrentItem->ItemDataAsset->ItemID == EItemID::HandLight)
		{
			bIsPickUp = true;
		}
		else
		{
			bIsPickUp = false;
		}
	}
}

void AMainPlayerController::InputInterection(const FInputActionValue& Value)
{
	//if (MainCharacter->CheckDrawerTag())
	//{
	//	
	//	if (MainCharacter->CheckDrawerTag())
	//	{
	//		AActor* TargetItem = MainCharacter->CheckDrawerTag();
	//		if (TargetItem && TargetItem->ActorHasTag("Item"))
	//		{
	//			AItemBaseActor* ItemActor = Cast<AItemBaseActor>(TargetItem);
	//			if (ItemActor && ItemActor->ItemDataAsset)
	//			{
	//				// ✅ 인벤토리에만 추가
	//				if (MainCharacter->InventoryComponent)
	//				{
	//					MainCharacter->InventoryComponent->AddItem(ItemActor->ItemDataAsset);
	//					UE_LOG(LogTemp, Warning, TEXT("인벤토리에 추가됨: %s"), *ItemActor->ItemDataAsset->ItemName.ToString());
	//				}

	//				if (!MainCharacter->CurrentItem)
	//				{
	//					MainCharacter->PlayHighPriorityMontage(MainCharacter->PickUpMontage);
	//					
	//				}

	//				// ✅ 바닥에서 제거
	//				ItemActor->Destroy();
	//			}
	//		}
	//	}
	//}

	AActor* TargetItem = MainCharacter->CheckDrawerTag();
	if (TargetItem && TargetItem->ActorHasTag("Item"))
	{
		AItemBaseActor* ItemActor = Cast<AItemBaseActor>(TargetItem);
		if (ItemActor && ItemActor->ItemDataAsset)
		{
			// ✅ 인벤토리에 빈칸이 있는지 확인
			if (MainCharacter->InventoryComponent)
			{
				int32 EmptyIndex = MainCharacter->InventoryComponent->InventoryItems.Find(nullptr);
				if (EmptyIndex == INDEX_NONE)
				{
					//UE_LOG(LogTemp, Warning, TEXT("❌ 인벤토리가 가득 차서 아이템을 먹을 수 없습니다: %s"), *ItemActor->ItemDataAsset->ItemName.ToString());
					return;
				}

				// ✅ 아이템 추가
				MainCharacter->InventoryComponent->AddItem(ItemActor->ItemDataAsset);
				//UE_LOG(LogTemp, Warning, TEXT("인벤토리에 추가됨: %s"), *ItemActor->ItemDataAsset->ItemName.ToString());
			}

			// ✅ 손이 비어있을 때만 애니메이션 출력
			if (!MainCharacter->CurrentItem)
			{
				MainCharacter->PlayHighPriorityMontage(MainCharacter->PickUpMontage);
			}

			// ✅ 바닥에서 제거
			ItemActor->Destroy();
		}
	}
	if (TargetItem && TargetItem->ActorHasTag("Door"))
	{
		ADoorActor* DoorActor = Cast<ADoorActor>(TargetItem);
		if (DoorActor)
		{
			DoorActor->ToggleDoor();
		}
	}
	if (TargetItem && TargetItem->ActorHasTag("Ladder"))
	{
		ALadderActor* LadderActor = Cast<ALadderActor>(TargetItem);
		if (LadderActor)
		{
			LadderActor->ClimbLadder();
		}
	}
}
