// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Bloque.h"
#include "BloqueCespedFuncional.generated.h"

/**
 * 
 */
UCLASS()
class BOMBERMAN012025_API ABloqueCespedFuncional : public ABloque
{
	GENERATED_BODY()

public:
	ABloqueCespedFuncional();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

private:

	void InicializarBloqueCespedFuncional();

	void MoverAleatoriamente();
	FTimerHandle MovimientoTimerHandle; // Timer para controlar el movimien
	
};
