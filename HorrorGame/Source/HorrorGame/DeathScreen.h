#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "DeathScreen.generated.h"

class UButton;
class UImage;  // 이미지 위젯

UCLASS()
class HORRORGAME_API UDeathScreen : public UUserWidget
{
    GENERATED_BODY()

protected:
    virtual void NativeConstruct() override;

    UFUNCTION()
    void OnRespawnButtonClicked();

    UFUNCTION()
    void OnMainMenuButtonClicked();

    UFUNCTION()
    void OnQuitButtonClicked();

public:
    // 버튼
    UPROPERTY(meta = (BindWidget))
    UButton* RespawnButton;

    UPROPERTY(meta = (BindWidget))
    UButton* MainMenuButton;

    UPROPERTY(meta = (BindWidget))
    UButton* QuitButton;

    // 버튼 안의 이미지
    UPROPERTY(meta = (BindWidget))
    UImage* RespawnImage;

    UPROPERTY(meta = (BindWidget))
    UImage* MainMenuImage;

    UPROPERTY(meta = (BindWidget))
    UImage* QuitImage;
};
