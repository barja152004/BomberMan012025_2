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
};
