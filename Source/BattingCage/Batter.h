// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Batter.generated.h"

UCLASS()
class BATTINGCAGE_API ABatter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ABatter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	class UInputMappingContext;

	/** MappingContext for player input. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "EnhancedInput")
	UInputMappingContext* InputMapping;

	class UInputAction;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UInputAction* SwingAction;

	// Adding the UFUNCTION() macro before the function you want to bind seems to be important, even if it's empty.
	UFUNCTION()
	void Swing(const FInputActionValue& Value);

	class UInputDataConfig;

	/** Config for avaiable input actions - create custom InputDataConfig object to insert here. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "EnhancedInput")
	UInputDataConfig* InputActions;


};

UCLASS()
class ARCTICRESEARCH_API UInputDataConfig : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UInputAction* Move;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UInputAction* Look;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UInputAction* Shoot;

	// You can add as many input actions as you want here!
};

