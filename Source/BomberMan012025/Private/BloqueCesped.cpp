// Fill out your copyright notice in the Description page of Project Settings.


#include "BloqueCesped.h"
#include "Components/StaticMeshComponent.h"
#include "Materials/MaterialInterface.h"
#include "UObject/ConstructorHelpers.h"

ABloqueCesped::ABloqueCesped()
{
	//ya que el bloque no cambia con el tiempo, no se necesita el tick
	PrimaryActorTick.bCanEverTick = false;
	
	InicializarBloqueCesped();
}

void ABloqueCesped::InicializarBloqueCesped()
{
	//Si se nececita cambia la malla o el material se hace aqui
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ObjetoMalla(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
	if (ObjetoMalla.Succeeded())
	{
		MallaBloque->SetStaticMesh(ObjetoMalla.Object);
	}
	//cargar y asignar material
	static ConstructorHelpers::FObjectFinder<UMaterialInterface> ObjetoMaterial(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Ground_Grass.M_Ground_Grass'"));
	if (ObjetoMaterial.Succeeded())
	{
		MallaBloque->SetMaterial(0, ObjetoMaterial.Object);
	}
	//pocision inicial
	SetActorLocation(FVector(0.0f, 0.0f, 50.0f));
}

void ABloqueCesped::BeginPlay()
{
	Super::BeginPlay();
}