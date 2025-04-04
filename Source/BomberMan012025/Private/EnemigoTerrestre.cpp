// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigoTerrestre.h"
#include "EnemigoAcuatico.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Materials/MaterialInterface.h"

#include "TimerManager.h"
#include "Math/UnrealMathUtility.h"


AEnemigoTerrestre::AEnemigoTerrestre()
{
	//el tick si es necesario para el enemigo acuatico
	PrimaryActorTick.bCanEverTick = true;

	InicializarEnemigoTerrestre();
}

void AEnemigoTerrestre::InicializarEnemigoTerrestre()
{
	//cargar la malla del enemigo
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Shapes/Shape_Cone.Shape_Cone'"));
	if (MeshAsset.Succeeded())
	{
		EnemigoMesh->SetStaticMesh(MeshAsset.Object);
	}
	//cargar y asignar material
	static ConstructorHelpers::FObjectFinder<UMaterialInterface> ObjetoMaterial(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Rock_Sandstone.M_Rock_Sandstone'"));
	if (ObjetoMaterial.Succeeded())
	{
		EnemigoMesh->SetMaterial(0, ObjetoMaterial.Object);
	}
	SetActorLocation(FVector(0.0f, 0.0f, 50.0f));
}

void AEnemigoTerrestre::MoverAleatoriamente()
{
	// Obtener la posición actual
	FVector PosicionActual = GetActorLocation();

	// Calcular nueva posición aleatoria
	float NuevoX = PosicionActual.X + FMath::RandRange(-RangoMovimientoX, RangoMovimientoX);
	float NuevoY = PosicionActual.Y + FMath::RandRange(-RangoMovimientoY, RangoMovimientoY);

	// Aplicar nueva posición (sin cambios en Z)
	SetActorLocation(FVector(NuevoX, NuevoY, PosicionActual.Z));

}


void AEnemigoTerrestre::BeginPlay()
{
	Super::BeginPlay();
	// Configurar un Timer para el movimiento aleatorio
	GetWorldTimerManager().SetTimer(MovimientoTimerHandle, this, &AEnemigoTerrestre::MoverAleatoriamente, 2.0f, true); // Cada 2 segundos
}

