#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Button.h"  
#include "InventoryWidget.generated.h"

class UUniformGridPanel;
class UItemSlotWidget;
class UCanvasPanel; // 캔버스 패널 추가 선언

UCLASS()
class HORRORGAME_API UInventoryWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	virtual void NativeConstruct() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
	TArray<UItemSlotWidget*> ItemSlotWidgets;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
	TSubclassOf<UItemSlotWidget> ItemSlotClass;

	UPROPERTY(meta = (BindWidget))
	class UButton* CloseButton; // X 버튼

	UFUNCTION()
	void OnCloseButtonClicked();

	void RefreshInventory();

protected:
	UPROPERTY(meta = (BindWidget))
	UUniformGridPanel* InventoryPanel;

	UPROPERTY(meta = (BindWidget))
	UCanvasPanel* InventoryRootPanel;  // ✅ 수정: 이름을 정확히 맞춰줌
};
