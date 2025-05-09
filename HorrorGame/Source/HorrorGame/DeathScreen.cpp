#include "DeathScreen.h"
#include "Components/Button.h"
#include "Components/Image.h"
#include "MainCharacter.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetSystemLibrary.h"

void UDeathScreen::NativeConstruct()
{
    Super::NativeConstruct();

    // 버튼 연결
    if (RespawnButton)
    {
        RespawnButton->OnClicked.AddDynamic(this, &UDeathScreen::OnRespawnButtonClicked);
    }
    if (MainMenuButton)
    {
        MainMenuButton->OnClicked.AddDynamic(this, &UDeathScreen::OnMainMenuButtonClicked);
    }
    if (QuitButton)
    {
        QuitButton->OnClicked.AddDynamic(this, &UDeathScreen::OnQuitButtonClicked);
    }

    PC = GetWorld()->GetFirstPlayerController();

	SetVisibility(ESlateVisibility::Hidden);
}

void UDeathScreen::OnRespawnButtonClicked()
{
    UGameplayStatics::OpenLevel(this, "MainStage1");
}

void UDeathScreen::OnMainMenuButtonClicked()
{

    // 메인 메뉴 맵으로 이동
    UGameplayStatics::OpenLevel(this, "StartMap");
}

void UDeathScreen::OnQuitButtonClicked()
{
    if (PC)
    {
        UKismetSystemLibrary::QuitGame(this, PC, EQuitPreference::Quit, true);
    }
}

void UDeathScreen::OnDie()
{
    if (PC)
    {
		SetVisibility(ESlateVisibility::Visible);
		PC->bShowMouseCursor = true;
		FInputModeUIOnly InputMode;
        /*PC->SetInputMode(InputMode);*/
    }
}
