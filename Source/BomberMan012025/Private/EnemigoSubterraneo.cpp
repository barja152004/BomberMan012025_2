// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigoSubterraneo.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Materials/MaterialInterface.h"

AEnemigoSubterraneo::AEnemigoSubterraneo()
{
	//el tick es necesario para el EnemigoSubterraneo
	PrimaryActorTick.bCanEverTick = true;

	InicializarEnemigoSubterraneo();
}


void AEnemigoSubterraneo::InicializarEnemigoSubterraneo()
{
	//cargar la malla del enemigo
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Shapes/Shape_Pipe.Shape_Pipe'"));
	if (MeshAsset.Succeeded())
	{
		EnemigoMesh->SetStaticMesh(MeshAsset.Object);
	}
	//cargar y asignar material
	static ConstructorHelpers::FObjectFinder<UMaterialInterface> ObjetoMaterial(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Wood_Pine.M_Wood_Pine'"));
	if (ObjetoMaterial.Succeeded())
	{
		EnemigoMesh->SetMaterial(0, ObjetoMaterial.Object);
	}
	SetActorLocation(FVector(0.0f, 0.0f, 50.0f));
}


void AEnemigoSubterraneo::BeginPlay()
{
	Super::BeginPlay();
}