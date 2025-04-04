// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Enemigo.h"
#include "EnemigoTerrestre.generated.h"

/**
 * 
 */
UCLASS()
class BOMBERMAN012025_API AEnemigoTerrestre : public AEnemigo
{
	GENERATED_BODY()

public:
	AEnemigoTerrestre();

protected:
	virtual void BeginPlay() override;

private:
	void InicializarEnemigoTerrestre();

	//-------------
	// Funci�n para mover aleatoriamente
	void MoverAleatoriamente();

	// Timer para manejar el movimiento
	FTimerHandle MovimientoTimerHandle;

	// Rango de movimiento
	UPROPERTY(EditAnywhere, Category = "Movimiento")
	float RangoMovimientoX = 150.0f;

	UPROPERTY(EditAnywhere, Category = "Movimiento")
	float RangoMovimientoY = 150.0f;

	
};
