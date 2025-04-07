// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Bloque.h"
#include "BloqueOroFuncional.generated.h"

/**
 * 
 */
UCLASS()
class BOMBERMAN012025_API ABloqueOroFuncional : public ABloque
{
	GENERATED_BODY()

public:
	ABloqueOroFuncional();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

private:
	void InicializarBloqueOroFuncional();

	void MoverAleatoriamente();
	FTimerHandle MovimientoTimerHandle;
	
};
