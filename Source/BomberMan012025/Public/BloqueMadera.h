// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Bloque.h"
#include "BloqueMadera.generated.h"

/**
 * 
 */
UCLASS()
class BOMBERMAN012025_API ABloqueMadera : public ABloque
{
	GENERATED_BODY()
	
public:
	ABloqueMadera();
	
protected:
	virtual void BeginPlay() override;

private:
	/*UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* MallaBloqueMadera;*/
	void InicializarBloqueMadera();
};
