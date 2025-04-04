// Fill out your copyright notice in the Description page of Project Settings.


#include "BloqueRoca.h"
#include "Components/StaticMeshComponent.h"
#include "Materials/MaterialInterface.h"
#include "UObject/ConstructorHelpers.h"

ABloqueRoca::ABloqueRoca()
{
	//ya que el bloque no cambia con el tiempo, no se necesita el tick
	PrimaryActorTick.bCanEverTick = false;
	
	InicializarBloqueRoca();
}


void ABloqueRoca::InicializarBloqueRoca()
{
	//Si se nececita cambia la malla o el material se hace aqui
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ObjetoMalla(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
	if (ObjetoMalla.Succeeded())
	{
		MallaBloque->SetStaticMesh(ObjetoMalla.Object);
	}
	//cargar y asignar material
	static ConstructorHelpers::FObjectFinder<UMaterialInterface> ObjetoMaterial(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Rock_Sandstone.M_Rock_Sandstone'"));
	if (ObjetoMaterial.Succeeded())
	{
		MallaBloque->SetMaterial(0, ObjetoMaterial.Object);
	}
	//pocision inicial
	SetActorLocation(FVector(0.0f, 0.0f, 50.0f));
}


void ABloqueRoca::BeginPlay()
{
	Super::BeginPlay();
}
