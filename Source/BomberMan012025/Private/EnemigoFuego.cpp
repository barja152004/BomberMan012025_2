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
	FVector NuevaPosicion = GetActorLocation();
	NuevaPosicion.X += FMath::RandRange(-200.0f, 200.0f);
	NuevaPosicion.Y += FMath::RandRange(-200.0f, 200.0f);

	SetActorLocation(NuevaPosicion, true); // Mover con colisiones

}


void AEnemigoFuego::BeginPlay()
{
	Super::BeginPlay();

	// Configurar un Timer para mover al enemigo aleatoriamente
	GetWorldTimerManager().SetTimer(MovimientoTimerHandle, this, &AEnemigoFuego::MoverAleatoriamente, 2.0f, true);
}

void AEnemigoFuego::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
