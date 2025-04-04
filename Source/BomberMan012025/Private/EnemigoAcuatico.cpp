// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigoAcuatico.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Materials/MaterialInterface.h"

#include "TimerManager.h"
#include "Math/UnrealMathUtility.h" // Para RandRange



AEnemigoAcuatico::AEnemigoAcuatico()
{
	//el tick es necesario para el EnemigoAcuatico
	PrimaryActorTick.bCanEverTick = true;

	InicializarEnemigoAcuatico();


}

void AEnemigoAcuatico::InicializarEnemigoAcuatico()
{

	//cargar la malla del enemigo
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Shapes/Shape_Torus.Shape_Torus'"));
	if (MeshAsset.Succeeded())
	{
		EnemigoMesh->SetStaticMesh(MeshAsset.Object);
	}
	//cargar y asignar material
	static ConstructorHelpers::FObjectFinder<UMaterialInterface> ObjetoMaterial(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Water_Lake.M_Water_Lake'"));
	if (ObjetoMaterial.Succeeded())
	{
		EnemigoMesh->SetMaterial(0, ObjetoMaterial.Object);
	}
	SetActorLocation(FVector(0.0f, 0.0f, 50.0f));
}

void AEnemigoAcuatico::MoverAleatoriamente()
{
	// Obtener la posici�n actual del enemigo
	FVector PosicionActual = GetActorLocation();

	// Calcular una nueva posici�n aleatoria dentro del rango definido
	float NuevoX = PosicionActual.X + FMath::RandRange(-RangoMovimientoX, RangoMovimientoX);
	float NuevoY = PosicionActual.Y + FMath::RandRange(-RangoMovimientoY, RangoMovimientoY);

	// Aplicar la nueva posici�n
	SetActorLocation(FVector(NuevoX, NuevoY, PosicionActual.Z));

}




void AEnemigoAcuatico::BeginPlay()
{
	Super::BeginPlay();
	// Configurar un Timer para movimiento aleatorio
	GetWorldTimerManager().SetTimer(MovimientoTimerHandle, this, &AEnemigoAcuatico::MoverAleatoriamente, 2.0f, true); // Cada 2 segundos
}

