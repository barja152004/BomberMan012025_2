// Fill out your copyright notice in the Description page of Project Settings.


#include "BloqueCespedFuncional.h"
#include "Components/StaticMeshComponent.h"
#include "Materials/MaterialInterface.h"
#include "UObject/ConstructorHelpers.h"

#include "TimerManager.h"
#include "Math/UnrealMathUtility.h"


ABloqueCespedFuncional::ABloqueCespedFuncional()
{
	//ocupamos el tick
	PrimaryActorTick.bCanEverTick = true;

	InicializarBloqueCespedFuncional();
}

void ABloqueCespedFuncional::BeginPlay()
{
	Super::BeginPlay();

	// Configurar un Timer para mover al bloque aleatoriamente
	GetWorldTimerManager().SetTimer(MovimientoTimerHandle, this, &ABloqueCespedFuncional::MoverAleatoriamente, 2.0f, true);
}


void ABloqueCespedFuncional::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABloqueCespedFuncional::InicializarBloqueCespedFuncional()
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

void ABloqueCespedFuncional::MoverAleatoriamente()
{
	FVector NuevaPosicion = GetActorLocation();
	NuevaPosicion.X += FMath::RandRange(-200.0f, 200.0f);
	NuevaPosicion.Y += FMath::RandRange(-200.0f, 200.0f);

	SetActorLocation(NuevaPosicion, true); // Mover con colisiones

}
