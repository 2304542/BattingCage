// Fill out your copyright notice in the Description page of Project Settings.


#include "Batter.h"
#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h" //

//#include "InputDataConfig.h" // Or whatever the path of your data asset is

/*
void AYourCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
    // ...

    UEnhancedInputComponent* Input = Cast<UEnhancedInputComponent>(PlayerInputComponent);
    
    if(!InputActions) return; // Don't wanna bind to invalid UInputActions!
    
    Input->BindAction(InputActions->Move, ETriggerEvent::Triggered, this, &AYourCharacter::Move);
    Input->BindAction(InputActions->Look, ETriggerEvent::Triggered, this, &AYourCharacter::Look);
    Input->BindAction(InputActions->Shoot, ETriggerEvent::Triggered, this, &AYourCharacter::Shoot);
    // etc...
} 


void ABatter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
    // ...

    UEnhancedInputComponent* Input = Cast<UEnhancedInputComponent>(PlayerInputComponent);
    Input->BindAction(SwingAction, ETriggerEvent::Triggered, this, &ABatter::Swing);
}


void ABatter::Swing(const FInputActionValue& Value)
{
    // You can get the action value like this:

    bool BoolValue = Value.Get<bool>(); // for digital input actions
    float FloatValue = Value.Get<float>(); // for Axis1D input actions
    FVector2D Axis2DValue = Value.Get<FVector2D>(); // for Axis2D input actions
    FVector VectorValue = Value.Get<FVector>(); // for Axis3D input actions

    // Cool stuff here!
}


void ABatter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
    APlayerController* PlayerController = Cast<APlayerController>(GetController());

    UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer());

    Subsystem->ClearAllMappings();
    Subsystem->AddMappingContext(InputMapping, 0);
} */


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

// Called to bind functionality to input
void ABatter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

