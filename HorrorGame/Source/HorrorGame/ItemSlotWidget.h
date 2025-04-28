// ItemSlotWidget.h
#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ItemSlotWidget.generated.h"

class UImage;
class UTextBlock;
class UItemDataAsset;

UCLASS()
class HORRORGAME_API UItemSlotWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	void SetItem(UItemDataAsset* InItem);

	void ClearItem();

	virtual FReply NativeOnMouseButtonDown(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent) override;
	virtual void NativeOnDragDetected(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent, UDragDropOperation*& OutOperation) override;
	virtual bool NativeOnDrop(const FGeometry& InGeometry, const FDragDropEvent& InDragDropEvent, UDragDropOperation* InOperation) override;

	void UpdateSlot();

	void SwapItem(UItemSlotWidget* OtherSlot);

protected:
	UPROPERTY(meta = (BindWidget))
	UImage* ItemIcon;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* ItemNameText;

	UPROPERTY()
	UItemDataAsset* ItemDataAsset = nullptr;
};
