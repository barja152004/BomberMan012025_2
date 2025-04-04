// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Bloque.h"
#include "BloqueRoca.generated.h"

/**
 * 
 */
UCLASS()
class BOMBERMAN012025_API ABloqueRoca : public ABloque
{
	GENERATED_BODY()
	
public:
	ABloqueRoca();

protected:
	virtual void BeginPlay() override;

private:
	void InicializarBloqueRoca();
};
