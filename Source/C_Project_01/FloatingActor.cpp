// Fill out your copyright notice in the Description page of Project Settings.


#include "FloatingActor.h"

// Sets default values
AFloatingActor::AFloatingActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFloatingActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFloatingActor::Tick(float DeltaTime)
{
//	float DeltaHeight = (FMath::Sin(RunningTime + DeltaTime) - FMath::Sin(RunningTime));
	//float DeltaHeight = FMath::Cos(DeltaTime);
	FVector	NewLocation = GetActorLocation();
	float DeltaHeight = sin(RunningTime);


	NewLocation.Z = DeltaHeight * 2000.f;
	RunningTime += DeltaTime;
	SetActorLocation(NewLocation);
	Super::Tick(DeltaTime);

}

