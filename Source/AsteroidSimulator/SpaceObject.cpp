// Fill out your copyright notice in the Description page of Project Settings.

#include "AsteroidSimulator.h"
#include "SpaceObject.h"


// Sets default values
ASpaceObject::ASpaceObject()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASpaceObject::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASpaceObject::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

