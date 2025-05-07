// ItemSlotWidget.h
#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ItemSlotWidget.generated.h"

class UImage;
class UTextBlock;
class UItemDataAsset;
class UContextMenu;

UCLASS()
class HORRORGAME_API UItemSlotWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	void SetItem(UItemDataAsset* InItem);
	void ClearItem();
	void UpdateSlot();
	void SwapItem(UItemSlotWidget* OtherSlot);

protected:
	virtual FReply NativeOnMouseButtonDown(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent) override;
	virtual void NativeOnDragDetected(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent, UDragDropOperation*& OutOperation) override;
	virtual bool NativeOnDrop(const FGeometry& InGeometry, const FDragDropEvent& InDragDropEvent, UDragDropOperation* InOperation) override;
	virtual void NativeOnDragCancelled(const FDragDropEvent& InDragDropEvent, UDragDropOperation* InOperation) override;

	void ShowContextMenu();

public:
	UPROPERTY()
	UItemDataAsset* ItemDataAsset = nullptr;

	// 🔥 블루프린트에서 설정할 수 있도록 ContextMenu 위젯 클래스 추가
	UPROPERTY(EditDefaultsOnly, Category = "UI")
	TSubclassOf<UUserWidget> ContextMenuClass;

protected:
	UPROPERTY(meta = (BindWidget))
	UImage* ItemIcon;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* ItemNameText;
};
