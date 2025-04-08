// Fill out your copyright notice in the Description page of Project Settings.


#include "Batter.h"
#include "EnhancedInputSubsystems.h"
#include "EnhancedInput/Public/EnhancedInputComponent.h"

void ABatter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	APlayerController* PlayerController = Cast<APlayerController>(GetController());

	UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer());

	Subsystem->ClearAllMappings();
	Subsystem->AddMappingContext(InputMapping, 0);
}

// Sets default values
ABatter::ABatter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABatter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABatter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABatter::Swing() {
	
	

}

// Called to bind functionality to input
void ABatter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent);

	PlayerInputComponent->BindAction("Swing", IE_Pressed, this, &ABatter::Swing);

	EnhancedInputComponent->BindAction(InputToSwing, ETriggerEvent::Triggered, this, &ABatter::Swing);
	

	

}

