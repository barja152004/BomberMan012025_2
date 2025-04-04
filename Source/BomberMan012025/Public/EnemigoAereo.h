// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Enemigo.h"
#include "EnemigoAereo.generated.h"

/**
 * 
 */
UCLASS()
class BOMBERMAN012025_API AEnemigoAereo : public AEnemigo
{
	GENERATED_BODY()
	
public:
	AEnemigoAereo();

protected:
	virtual void BeginPlay() override;

private:
	void InicializarEnemigoAereo();
	//------------
	// Nueva función para mover aleatoriamente
	void MoverAleatoriamente();

	// Timer para regular el movimiento
	FTimerHandle MovimientoTimerHandle;

	// Rango de movimiento aleatorio
	UPROPERTY(EditAnywhere, Category = "Movimiento")
	float RangoMovimientoX = 200.0f;

	UPROPERTY(EditAnywhere, Category = "Movimiento")
	float RangoMovimientoY = 200.0f;

	UPROPERTY(EditAnywhere, Category = "Movimiento")
	float RangoMovimientoZ = 100.0f; // Movimiento vertical
};
