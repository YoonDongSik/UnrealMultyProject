#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Button.h"  // ✅ 이거 꼭 추가해야 UButton 인식됨
#include "InventoryWidget.generated.h"

class UUniformGridPanel;
class UItemSlotWidget;

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
	class UButton* CloseButton;  // 위젯에 있는 X 버튼

	UFUNCTION()
	void OnCloseButtonClicked();

	void RefreshInventory();

protected:
	UPROPERTY(meta = (BindWidget))
	UUniformGridPanel* InventoryPanel;

	
};
