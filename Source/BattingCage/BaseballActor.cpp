// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseballActor.h"
#include "Batter.h"

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
	
	StaticMeshComponent->SetCollisionProfileName(TEXT("PhysicsActor"));
	
	SphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereCollider"));
	SphereComponent->SetupAttachment(RootComponent);
	
	SphereComponent->InitSphereRadius(1.f);
	//SphereComponent->SetCollisionProfileName(TEXT("PhysicsActor"));
	
	SphereComponent->SetRelativeLocation(FVector(0.0f, 0.0f, 1.0f));
	SphereComponent->SetWorldScale3D(FVector(1.0f));

	
	
}

// Called when the game starts or when spawned
void ABaseballActor::BeginPlay()
{
	Super::BeginPlay();
	

	float speed = 5000.f;
	ABatter* myBatter = (ABatter*)UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);
	myBatter->GetActorLocation();



	FVector dir = (GetActorLocation() - myBatter->GetActorLocation()); 
	dir.Normalize();
	// ball trajectory (note: negative x direction is towards the player and z is up) 
	GetComponentByClass<UPrimitiveComponent>()->AddForce(FVector(-dir.X, dir.Y, dir.Z));
	GetComponentByClass<UPrimitiveComponent>()->AddImpulse(FVector(dir.X, dir.Y, dir.Z));
	GetComponentByClass<UPrimitiveComponent>()->SetPhysicsLinearVelocity(FVector(-5000.0f, 0.0f, 3500.0f), true, NAME_None);
	


	
}

// Called every frame
void ABaseballActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
}

