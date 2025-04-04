// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Enemigo.h"
#include "EnemigoSubterraneo.generated.h"

/**
 * 
 */
UCLASS()
class BOMBERMAN012025_API AEnemigoSubterraneo : public AEnemigo
{
	GENERATED_BODY()

public:
	AEnemigoSubterraneo();

protected:
	virtual void BeginPlay() override;

private:
	void InicializarEnemigoSubterraneo();

	//-------------
	// Nueva función para mover aleatoriamente
		void MoverAleatoriamente();

	// Timer para controlar el movimiento aleatorio
	FTimerHandle MovimientoTimerHandle;

	// Rango de movimiento
	UPROPERTY(EditAnywhere, Category = "Movimiento")
	float RangoMovimientoX = 150.0f;

	UPROPERTY(EditAnywhere, Category = "Movimiento")
	float RangoMovimientoY = 150.0f;

	UPROPERTY(EditAnywhere, Category = "Movimiento")
	float VariacionMovimientoZ = 20.0f; // Ligeras variaciones en Z
	
};
