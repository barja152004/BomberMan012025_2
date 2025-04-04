// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Bloque.h"
#include "BloqueAgua.generated.h"

/**
 * 
 */
UCLASS()
class BOMBERMAN012025_API ABloqueAgua : public ABloque
{
	GENERATED_BODY()

public:
	ABloqueAgua();

protected:
	virtual void BeginPlay() override;

private:
	void InicializarBloqueAgua();

};
