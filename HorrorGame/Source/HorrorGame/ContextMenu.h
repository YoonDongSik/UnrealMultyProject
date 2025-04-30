#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MainPlayerController.h"
#include "ContextMenu.generated.h"


class UButton;
class UTextBlock;
class UItemSlotWidget;

UCLASS()
class HORRORGAME_API UContextMenu : public UUserWidget
{
	GENERATED_BODY()

public:
	// 메뉴 열 때 슬롯을 넘겨줌
	void SetupContextMenu(UItemSlotWidget* TargetSlot);

protected:
	virtual void NativeConstruct() override;


	// 버튼 클릭 시
	UFUNCTION()
	void OnUseOrEquipButtonClicked();

protected:
	UPROPERTY(meta = (BindWidget))
	UButton* Button_UseOrEquip;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* Text_UseOrEquip;

	UPROPERTY()
	UItemSlotWidget* TargetItemSlot; // 어떤 슬롯을 눌렀는지 기억
};
