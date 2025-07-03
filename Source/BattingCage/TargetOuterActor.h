// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Batter.h"
#include "TargetOuterActor.generated.h"


UCLASS()
class BATTINGCAGE_API ATargetOuterActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATargetOuterActor();
	
	ABatter* MyBatter = Cast<ABatter>(MyBatter);
	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void ActorBeginOverlap();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int scoreIncrement = 0;


};
