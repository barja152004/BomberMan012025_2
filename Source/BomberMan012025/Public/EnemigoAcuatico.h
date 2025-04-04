// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Enemigo.h"
#include "EnemigoAcuatico.generated.h"


/**
 * 
 */
UCLASS()
class BOMBERMAN012025_API AEnemigoAcuatico : public AEnemigo
{
	GENERATED_BODY()

public:
	AEnemigoAcuatico();

protected:
	virtual void BeginPlay() override;

private:
	void InicializarEnemigoAcuatico();

    //----------------------------------
	// Nueva función para mover aleatoriamente
		void MoverAleatoriamente();

	// Timer para controlar el movimiento aleatorio
	FTimerHandle MovimientoTimerHandle;

	// Rango de movimiento aleatorio
	UPROPERTY(EditAnywhere, Category = "Movimiento")
	float RangoMovimientoX = 100.0f;

	UPROPERTY(EditAnywhere, Category = "Movimiento")
	float RangoMovimientoY = 100.0f;

};
