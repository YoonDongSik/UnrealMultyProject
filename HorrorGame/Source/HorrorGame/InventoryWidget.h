#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
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
	TSubclassOf<UItemSlotWidget> ItemSlotClass; // 👈 이거 있어야 함

	void RefreshInventory();

protected:
	UPROPERTY(meta = (BindWidget))
	UUniformGridPanel* InventoryPanel;

	
};
