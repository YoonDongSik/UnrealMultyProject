#include "DeathScreen.h"
#include "Components/Button.h"
#include "Components/Image.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetSystemLibrary.h"

void UDeathScreen::NativeConstruct()
{
    Super::NativeConstruct();

    // 로그 찍어보기
    UE_LOG(LogTemp, Warning, TEXT("DeathScreen::NativeConstruct 시작"));

    // 버튼 연결
    if (RespawnButton)
    {
        RespawnButton->OnClicked.AddDynamic(this, &UDeathScreen::OnRespawnButtonClicked);
        UE_LOG(LogTemp, Warning, TEXT("RespawnButton 연결됨"));
    }
    if (MainMenuButton)
    {
        MainMenuButton->OnClicked.AddDynamic(this, &UDeathScreen::OnMainMenuButtonClicked);
        UE_LOG(LogTemp, Warning, TEXT("MainMenuButton 연결됨"));
    }
    if (QuitButton)
    {
        QuitButton->OnClicked.AddDynamic(this, &UDeathScreen::OnQuitButtonClicked);
        UE_LOG(LogTemp, Warning, TEXT("QuitButton 연결됨"));
    }

    // ✅ 이미지가 잘 연결됐는지 로그 찍기
    if (RespawnImage)
    {
        UE_LOG(LogTemp, Warning, TEXT("RespawnImage 연결 확인됨"));
    }
    if (MainMenuImage)
    {
        UE_LOG(LogTemp, Warning, TEXT("MainMenuImage 연결 확인됨"));
    }
    if (QuitImage)
    {
        UE_LOG(LogTemp, Warning, TEXT("QuitImage 연결 확인됨"));
    }

    // ✅ 예제: 이미지 색상 바꾸기 (화이트로 설정)
    if (RespawnImage)
    {
        RespawnImage->SetColorAndOpacity(FLinearColor::White);
    }
    if (MainMenuImage)
    {
        MainMenuImage->SetColorAndOpacity(FLinearColor::White);
    }
    if (QuitImage)
    {
        QuitImage->SetColorAndOpacity(FLinearColor::White);
    }

    // ✅ 마우스 커서 & 인풋 모드 설정
    APlayerController* PC = GetWorld()->GetFirstPlayerController();
    if (PC)
    {
        FInputModeUIOnly InputMode;
        InputMode.SetWidgetToFocus(this->TakeWidget());
        InputMode.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);
        PC->SetInputMode(InputMode);
        PC->bShowMouseCursor = true;
    }
}

void UDeathScreen::OnRespawnButtonClicked()
{
    UE_LOG(LogTemp, Warning, TEXT("리스폰 버튼 클릭됨"));

    APlayerController* PC = GetWorld()->GetFirstPlayerController();
    if (PC)
    {
        PC->bShowMouseCursor = false;
        FInputModeGameOnly InputMode;
        PC->SetInputMode(InputMode);
    }

    // 예: 현재 맵 다시 로드
    FName CurrentLevelName = *UGameplayStatics::GetCurrentLevelName(this, true);
    UGameplayStatics::OpenLevel(this, CurrentLevelName);
}

void UDeathScreen::OnMainMenuButtonClicked()
{
    UE_LOG(LogTemp, Warning, TEXT("메인 메뉴 버튼 클릭됨"));

    APlayerController* PC = GetWorld()->GetFirstPlayerController();
    if (PC)
    {
        PC->bShowMouseCursor = true;
        FInputModeUIOnly InputMode;
        InputMode.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);
        PC->SetInputMode(InputMode);
    }

    // 메인 메뉴 맵으로 이동 (StartMap 등)
    UGameplayStatics::OpenLevel(this, "StartMap");
}

void UDeathScreen::OnQuitButtonClicked()
{
    UE_LOG(LogTemp, Warning, TEXT("종료 버튼 클릭됨"));

    APlayerController* PC = GetWorld()->GetFirstPlayerController();
    if (PC)
    {
        UKismetSystemLibrary::QuitGame(this, PC, EQuitPreference::Quit, true);
    }
}
