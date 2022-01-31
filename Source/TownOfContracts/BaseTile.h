// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Resource.h"
#include "BaseTile.generated.h"
UENUM()
enum TileType
{
	Grass UMETA(DisplayName = "Grass"),
	Snow UMETA(DisplayName = "Snow"),
	Desert UMETA(DisplayName = "Desert"),
};


UCLASS(Blueprintable)
class TOWNOFCONTRACTS_API ABaseTile : public AActor
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere)
	TArray<FResource> Resources;
	UPROPERTY(EditAnywhere)
	int BuildingID;
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
public:
	UPROPERTY()
	UStaticMeshComponent* Mesh;
	UPROPERTY()
	UStaticMeshComponent* ResourceMesh;
	UPROPERTY()
	UStaticMeshComponent* BuildingMesh;
	// Sets default values for this actor's properties
	ABaseTile();
	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
