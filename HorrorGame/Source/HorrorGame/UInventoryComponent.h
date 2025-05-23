#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ItemDataAsset.h"
#include "InventoryWidget.h"
#include "UInventoryComponent.generated.h"  

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class HORRORGAME_API UInventoryComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
	TArray<UItemDataAsset*> InventoryItems;

	UFUNCTION(BlueprintCallable)
	void AddItem(UItemDataAsset* NewItem);

	UFUNCTION(BlueprintCallable)
	void SetInventoryWidget(UInventoryWidget* NewInventoryWidget);

	void LogInventoryState();

private:
	UPROPERTY()
	UInventoryWidget* InventoryWidget;
};
