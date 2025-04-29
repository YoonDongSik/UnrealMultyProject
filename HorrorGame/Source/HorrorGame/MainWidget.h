#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SteminaWidget.h"
#include "CrosshairWidget.h"
#include "HealthWidget.h"
#include "InventoryWidget.h"
#include "MainWidget.generated.h"

class UInventoryWidget;

UCLASS()
class HORRORGAME_API UMainWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	virtual void NativeConstruct() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI", meta = (BindWidget))
	UCanvasPanel* InventoryPanel;  // ✅ WBP_Main에 있는 Root 패널 연결 (InventoryPanel 이름)

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI", meta = (BindWidget))
	USteminaWidget* StaminaWidget;  // ✅ 이름 오타 수정

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI", meta = (BindWidget))
	UCrosshairWidget* CrosshairWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI", meta = (BindWidget))
	UHealthWidget* HealthWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI", meta = (BindWidget))
	UInventoryWidget* InventoryWidget;  // ✅ 드디어 제대로 InventoryWidget

	UFUNCTION(BlueprintCallable)
	void SetupInventorySlotClass(TSubclassOf<UItemSlotWidget> InSlotClass);

private:
	UPROPERTY()
	class AMainCharacter* MainCharacter;
};
