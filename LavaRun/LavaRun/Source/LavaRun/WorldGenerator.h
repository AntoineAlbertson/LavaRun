// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "WorldGenerator.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FGeneratorEvent);
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class LAVARUN_API UWorldGenerator : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UWorldGenerator();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	TArray<FTransform> TransformList;
	
	void DestroyLatest();
	void GenerateNew();


private:
	UPROPERTY(EditAnywhere)
		float MassTreshold = 60.f;
	UPROPERTY(BlueprintAssignable)
	FGeneratorEvent OnOpen;

	AActor* Owner = GetOwner();

};
