// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Bloque.h"
#include "BloqueVidrio.generated.h"

/**
 * 
 */
UCLASS()
class BOMBERMAN012025_API ABloqueVidrio : public ABloque
{
	GENERATED_BODY()

public:
	ABloqueVidrio();

protected:
	virtual void BeginPlay() override;

private:
	void InicializarBloqueVidrio();
	
};
