// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Image.h"
#include "CrosshairWidget.generated.h"

/**
 * 
 */
UCLASS()
class HORRORGAME_API UCrosshairWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:
    virtual void NativeConstruct() override;

protected:
    UPROPERTY(meta = (BindWidget))
    UImage* CrosshairImage;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Crosshair")
    UTexture2D* CrosshairTexture;
};
