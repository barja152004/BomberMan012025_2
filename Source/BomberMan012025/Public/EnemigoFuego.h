// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Enemigo.h"
#include "EnemigoFuego.generated.h"

/**
 * 
 */
UCLASS()
class BOMBERMAN012025_API AEnemigoFuego : public AEnemigo
{
	GENERATED_BODY()

public:
	AEnemigoFuego();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

private:
	void InicializarEnemigoFuego();
	
	//----------
	//funciones del movimiento
	void MoverAleatoriamente();
	FTimerHandle MovimientoTimerHandle;
};
