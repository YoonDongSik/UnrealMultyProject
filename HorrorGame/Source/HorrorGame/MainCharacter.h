// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "MainCharacter.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStaminaChanged, float, NewStaminaPercent);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHealthChanged, float, NewHealthPercent);

UCLASS()
class HORRORGAME_API AMainCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMainCharacter();

	void Movement(const FVector& MoveValue);

	UFUNCTION()
	void PlayJumpMontage();

	UFUNCTION()
	void DoCrouching();

	AActor* CheckDrawerTag();

	FOnStaminaChanged OnStaminaChanged;

	FOnHealthChanged OnHealthChanged;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	/*void PlayHighPriorityMontage(UAnimMontage* Montage, FName StartSectionName = NAME_None);*/

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void PlayHighPriorityMontage(UAnimMontage* Montage, FName StartSectionName = NAME_None);

	USpringArmComponent* GetSpringArm() const { return SpringArm; }

	UFUNCTION(BlueprintCallable, Category = "Player Movement")
	inline void SetRunMode() { GetCharacterMovement()->MaxWalkSpeed = RunSpeed; bIsRunning = true; };

	UFUNCTION(BlueprintCallable, Category = "Player Movement")
	inline void SetWalkMode() { GetCharacterMovement()->MaxWalkSpeed = WalkSpeed; bIsRunning = false; };

	UFUNCTION(BlueprintCallable, Category = "Player Movement")
	inline void SetCrouchMode() { GetCharacterMovement()->MaxWalkSpeed = CrouchSpeed; bIsRunning = false; };

	inline float GetStemina() const { return Stemina; };

protected:
	void UseCurrentItem();

//private:
//	UStaticMeshComponent* FindTaggedMesh(AActor* Actor, FName Tag);

public:
	bool bIsCrouched = false;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Player|Montage")
	UAnimMontage* PickUpMontage = nullptr;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Item")
	class AItemBaseActor* CurrentItem;

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Player|Move")
	float WalkSpeed = 400;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Player|Move")
	float RunSpeed = 800;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Player|Move")
	float CrouchSpeed = 250;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Player|Camera")
	USpringArmComponent* SpringArm = nullptr;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Player|Camera")
	UCameraComponent* Camera = nullptr;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Player|Montage")
	UAnimMontage* JumpMontage = nullptr;

	/*UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Player|Montage")
	UAnimMontage* PickUpMontage = nullptr;*/

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Player|State")
	bool bIsRunning = false;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Player|Stat")
	float Stemina = 100;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Player|Stat")
	float Health = 0;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Player|Stat")
	float MaxHealth = 100;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Player|State")
	class UCameraComponent* CameraComponent;

private:
	UPROPERTY()
	UAnimInstance* AnimInstance = nullptr;

	UPROPERTY()
	UAnimMontage* CurrentMontage = nullptr;

	UPROPERTY()
	AActor* CurrentHitActor;

	USkeletalMeshComponent* CharacterMesh;
};
