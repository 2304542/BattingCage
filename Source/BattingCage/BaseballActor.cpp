// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseballActor.h"

// Sets default values
ABaseballActor::ABaseballActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
	RootComponent = StaticMeshComponent;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("/Game/Assets/ball/Ball.Ball"));

	if (MeshAsset.Succeeded())
	{
		StaticMeshComponent->SetStaticMesh(MeshAsset.Object);
	}

	StaticMeshComponent->SetCollisionProfileName(TEXT("OverlapAll"));

	SphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereCollider"));
	SphereComponent->SetupAttachment(RootComponent);

	SphereComponent->InitSphereRadius(1.f);
	SphereComponent->SetCollisionProfileName(TEXT("OverlapAll"));

	SphereComponent->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
	SphereComponent->SetWorldScale3D(FVector(1.0f));

	if (!ProjectileMovementComponent)
	{
		// Use this component to drive this projectile's movement.
		ProjectileMovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovementComponent"));
		ProjectileMovementComponent->SetUpdatedComponent(SphereComponent);
		ProjectileMovementComponent->InitialSpeed = 3000.0f;
		ProjectileMovementComponent->MaxSpeed = 3000.0f;
		ProjectileMovementComponent->bRotationFollowsVelocity = true;
		ProjectileMovementComponent->bShouldBounce = true;
		ProjectileMovementComponent->Bounciness = 0.3f;
		ProjectileMovementComponent->ProjectileGravityScale = 0.0f;
	}
}

// Called when the game starts or when spawned
void ABaseballActor::BeginPlay()
{
	Super::BeginPlay();
	


}

// Called every frame
void ABaseballActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

