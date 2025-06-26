// Fill out your copyright notice in the Description page of Project Settings.


#include "BatActor.h"
#include "UObject/ConstructorHelpers.h"
// Sets default values
ABatActor::ABatActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//------------------------STATIC MESH RELATED CODE
	// Create the Static Mesh Component
	StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
	RootComponent = StaticMeshComponent;

	// Optionally, set a default static mesh
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("/Game/Assets/baseball-bat/meshes/BatMesh.BatMesh"));

	if (MeshAsset.Succeeded())
	{
		StaticMeshComponent->SetStaticMesh(MeshAsset.Object);
	}

	StaticMeshComponent->SetCollisionProfileName(TEXT("OverlapAll"));


	//------------------------SPHERE COLLISION RELATED CODE

	SphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereCollider"));
	SphereComponent->SetupAttachment(RootComponent);

	SphereComponent->InitSphereRadius(1.f);
	SphereComponent->SetCollisionProfileName(TEXT("BlockAll"));

	SphereComponent->SetRelativeLocation(FVector(0.0f, 0.0f, 40.f));
	SphereComponent->SetWorldScale3D(FVector(0.03f));
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

