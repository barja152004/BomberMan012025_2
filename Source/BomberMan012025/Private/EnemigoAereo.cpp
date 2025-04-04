// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigoAereo.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Materials/MaterialInterface.h"

#include "TimerManager.h"
#include "Math/UnrealMathUtility.h"

AEnemigoAereo::AEnemigoAereo()
{
	//el tick si es necessario para el EnemigoAereo
	PrimaryActorTick.bCanEverTick = true;

	InicializarEnemigoAereo();
}

void AEnemigoAereo::InicializarEnemigoAereo()
{
	//cargar la malla del enemigo
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Shapes/Shape_Plane.Shape_Plane'"));
	if (MeshAsset.Succeeded())
	{
		EnemigoMesh->SetStaticMesh(MeshAsset.Object);
	}
	//cargar y asignar material
	static ConstructorHelpers::FObjectFinder<UMaterialInterface> ObjetoMaterial(TEXT("Material'/Game/StarterContent/Materials/M_Metal_Brushed_Nickel.M_Metal_Brushed_Nickel'"));
	if (ObjetoMaterial.Succeeded())
	{
		EnemigoMesh->SetMaterial(0, ObjetoMaterial.Object);
	}
	SetActorLocation(FVector(0.0f, 0.0f, 50.0f));
}

void AEnemigoAereo::MoverAleatoriamente()
{
	// Obtener la posición actual del enemigo
	FVector PosicionActual = GetActorLocation();

	// Calcular nueva posición aleatoria dentro del rango definido
	float NuevoX = PosicionActual.X + FMath::RandRange(-RangoMovimientoX, RangoMovimientoX);
	float NuevoY = PosicionActual.Y + FMath::RandRange(-RangoMovimientoY, RangoMovimientoY);
	float NuevoZ = PosicionActual.Z + FMath::RandRange(-RangoMovimientoZ, RangoMovimientoZ);

	// Aplicar la nueva posición
	SetActorLocation(FVector(NuevoX, NuevoY, NuevoZ));

}


void AEnemigoAereo::BeginPlay()
{
	Super::BeginPlay();
	//---
	// Configurar un Timer para el movimiento aleatorio
	GetWorldTimerManager().SetTimer(MovimientoTimerHandle, this, &AEnemigoAereo::MoverAleatoriamente, 2.0f, true);
}
