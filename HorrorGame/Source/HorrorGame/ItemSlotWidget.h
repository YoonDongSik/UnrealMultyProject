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

protected:
	UPROPERTY(meta = (BindWidget))
	UImage* ItemIcon;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* ItemNameText;
};
