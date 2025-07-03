// Fill out your copyright notice in the Description page of Project Settings.


#include "TargetOuterActor.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
ATargetOuterActor::ATargetOuterActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATargetOuterActor::BeginPlay()
{
	Super::BeginPlay();

	
	
}
void ATargetOuterActor::ActorBeginOverlap() {
	UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);

	//if (MyBatter != nullptr) {
	//	score++;
	//}
	
}
// Called every frame
void ATargetOuterActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

