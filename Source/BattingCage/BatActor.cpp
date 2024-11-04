// Fill out your copyright notice in the Description page of Project Settings.


#include "BatActor.h"

// Sets default values
ABatActor::ABatActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABatActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABatActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

