// Fill out your copyright notice in the Description page of Project Settings.


#include "BloqueMadera.h"
#include "Components/StaticMeshComponent.h"
#include "Materials/MaterialInterface.h"
#include "UObject/ConstructorHelpers.h"

ABloqueMadera::ABloqueMadera()
{
	//ya que el bloque no cambia con el tiempo, no se necesita el tick
	PrimaryActorTick.bCanEverTick = false;

	InicializarBloqueMadera();
}

void ABloqueMadera::InicializarBloqueMadera()
{//Si se nececita cambia la malla o el material se hace aqui
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ObjetoMalla(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
	if (ObjetoMalla.Succeeded())
	{
		MallaBloque->SetStaticMesh(ObjetoMalla.Object);
	}
	//cargar y asignar material
	static ConstructorHelpers::FObjectFinder<UMaterialInterface> ObjetoMaterial(TEXT("Material'/Game/StarterContent/Materials/M_Brick_Clay_New.M_Brick_Clay_New'"));
	if (ObjetoMaterial.Succeeded())
	{
		MallaBloque->SetMaterial(0, ObjetoMaterial.Object);
	}
	//pocision inicial
	SetActorLocation(FVector(0.0f, 0.0f, 50.0f));
}


void ABloqueMadera::BeginPlay()
{
	Super::BeginPlay();
}