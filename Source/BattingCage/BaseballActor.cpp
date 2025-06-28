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
//
//AActor* UWorld::SpawnActor
//(
//	UClass* Class,
//	FName			InName,
//	FVector const* Location,
//	FRotator const* Rotation,
//	AActor* Template,
//	bool			bNoCollisionFail,
//	bool			bRemoteOwned,
//	AActor* Owner,
//	APawn* Instigator,
//	bool			bNoFail,
//	ULevel* OverrideLevel,
//	bool			bDeferConstruction
//)
//
//AKAsset* SpawnedActor1 = (AKAsset*)GetWorld()->SpawnActor(AKAsset::StaticClass(), NAME_None, &Location);
//
///** Spawns and returns class T, respects default rotation and translation of root component. */
//template< class T >
//T* SpawnActor
//(
//	AActor* Owner = NULL,
//	APawn* Instigator = NULL,
//	bool bNoCollisionFail = false
//)
//{
//	return (T*)(GetWorld()->SpawnActor(T::StaticClass(), NAME_None, NULL, NULL, NULL, bNoCollisionFail, false, Owner, Instigator));
//}
//
//MyHUD = SpawnActor<AHUD>(this, Instigator);
//
///** Spawns and returns class T, forcibly sets world position. */
//template< class T >
//T* SpawnActor
//(
//	FVector const& Location,
//	FRotator const& Rotation,
//	AActor* Owner = NULL,
//	APawn* Instigator = NULL,
//	bool bNoCollisionFail = false
//)
//{
//	return (T*)(GetWorld()->SpawnActor(T::StaticClass(), NAME_None, &Location, &Rotation, NULL, bNoCollisionFail, false, Owner, Instigator));
//}
//
//Controller = SpawnActor<AController>(GetLocation(), GetRotation(), NULL, Instigator, true);