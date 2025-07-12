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
	StaticMeshComponent->SetRelativeScale3D(FVector(20.0f)); // size of ball 
	SphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereCollider"));
	SphereComponent->SetupAttachment(RootComponent);
	
	SphereComponent->InitSphereRadius(1.f);
	//SphereComponent->SetCollisionProfileName(TEXT("PhysicsActor"));
	
	SphereComponent->SetRelativeLocation(FVector(0.0f, 0.0f, 1.0f));
	SphereComponent->SetWorldScale3D(FVector(1.0f)); // collision component of ball 

	
	
}

// Called when the game starts or when spawned
void ABaseballActor::BeginPlay()
{
	Super::BeginPlay();
	

	
	ABatter* myBatter = (ABatter*)UGameplayStatics::GetPlayerCharacter(GetWorld(), 0); // gets location of batter for direction vector
	myBatter->GetActorLocation();



	FVector dir = (GetActorLocation() - myBatter->GetActorLocation()); 
	dir.Normalize(); // normalizes direction vector
	// ball trajectory (note: negative x direction is towards the player)
	GetComponentByClass<UPrimitiveComponent>()->SetSimulatePhysics(true); // must be true in order for ball to move
	SetLifeSpan(10.0f); // number of seconds before ball is despawned
	GetComponentByClass<UPrimitiveComponent>()->AddForce(FVector(-dir.X, dir.Y, dir.Z)); // allows ball to roll
	GetComponentByClass<UPrimitiveComponent>()->AddImpulse(FVector(dir.X, dir.Y, dir.Z));
	GetComponentByClass<UPrimitiveComponent>()->SetPhysicsLinearVelocity(FVector(-1000.0f, 0.0f, 0.0f), true, NAME_None); // ball moves towards player
	


	
}

// Called every frame
void ABaseballActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
}

