// Fill out your copyright notice in the Description page of Project Settings.

#include "WorldGenerator.h"


// Sets default values for this component's properties
UWorldGenerator::UWorldGenerator()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	
}


// Called when the game starts
void UWorldGenerator::BeginPlay()
{
	Super::BeginPlay();

	UE_LOG(LogTemp, Warning, TEXT("World G reporting"))
	
}


// Called every frame
void UWorldGenerator::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UWorldGenerator::DestroyLatest()
{
}

void UWorldGenerator::GenerateNew()
{
	OnOpen.Broadcast();
}

