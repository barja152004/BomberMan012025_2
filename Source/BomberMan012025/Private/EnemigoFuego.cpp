// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigoFuego.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Materials/MaterialInterface.h"


#include "TimerManager.h"
#include "Math/UnrealMathUtility.h"

AEnemigoFuego::AEnemigoFuego()
{
	//el tick es necesario para el EnemigoFuego
	PrimaryActorTick.bCanEverTick = true;

	InicializarEnemigoFuego();

}

void AEnemigoFuego::InicializarEnemigoFuego()
{
	//cargar la malla del enemigo
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere'"));
	if (MeshAsset.Succeeded())
	{
		EnemigoMesh->SetStaticMesh(MeshAsset.Object);
	}
	//cargar y asignar material
	static ConstructorHelpers::FObjectFinder<UMaterialInterface> ObjetoMaterial(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Metal_Gold.M_Metal_Gold'"));
	if (ObjetoMaterial.Succeeded())
	{
		EnemigoMesh->SetMaterial(0, ObjetoMaterial.Object);
	}
	SetActorLocation(FVector(0.0f, 0.0f, 50.0f));
}

void AEnemigoFuego::MoverAleatoriamente()
{
	// Obtener la posición actual
	FVector PosicionActual = GetActorLocation();

	// Calcular nueva posición aleatoria
	float NuevoX = PosicionActual.X + FMath::RandRange(-RangoMovimientoX, RangoMovimientoX);
	float NuevoY = PosicionActual.Y + FMath::RandRange(-RangoMovimientoY, RangoMovimientoY);

	// Aplicar nueva posición (sin cambios en Z)
	SetActorLocation(FVector(NuevoX, NuevoY, PosicionActual.Z));

}


void AEnemigoFuego::BeginPlay()
{
	Super::BeginPlay();

	// Configurar un Timer para mover al enemigo aleatoriamente
	GetWorldTimerManager().SetTimer(MovimientoTimerHandle, this, &AEnemigoFuego::MoverAleatoriamente, 2.0f, true);
}
