// Fill out your copyright notice in the Description page of Project Settings.


#include "BloqueOroFuncional.h"
#include "Components/StaticMeshComponent.h"
#include "Materials/MaterialInterface.h"
#include "UObject/ConstructorHelpers.h"

#include "TimerManager.h"
#include "Math/UnrealMathUtility.h"


ABloqueOroFuncional::ABloqueOroFuncional()
{
	//el bloque Orofuncional si necesita el tick
	PrimaryActorTick.bCanEverTick = true;

	InicializarBloqueOroFuncional();
}

void ABloqueOroFuncional::BeginPlay()
{
	Super::BeginPlay();
	// Configurar un Timer para mover al bloque aleatoriamente
	GetWorldTimerManager().SetTimer(MovimientoTimerHandle, this, &ABloqueOroFuncional::MoverAleatoriamente, 2.0f, true);
}

void ABloqueOroFuncional::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABloqueOroFuncional::InicializarBloqueOroFuncional()
{
	//cargar y asignar material
	static ConstructorHelpers::FObjectFinder<UMaterialInterface> ObjetoMaterial(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Metal_Gold.M_Metal_Gold'"));
	if (ObjetoMaterial.Succeeded())
	{
		MallaBloque->SetMaterial(0, ObjetoMaterial.Object);
	}
	//pocision inicial
	SetActorLocation(FVector(0.0f, 0.0f, 50.0f));
}

void ABloqueOroFuncional::MoverAleatoriamente()
{
	FVector NuevaPosicion = GetActorLocation();
	NuevaPosicion.X += FMath::RandRange(-200.0f, 200.0f);
	NuevaPosicion.Y += FMath::RandRange(-200.0f, 200.0f);

	SetActorLocation(NuevaPosicion, true); // Mover con colisiones

}
