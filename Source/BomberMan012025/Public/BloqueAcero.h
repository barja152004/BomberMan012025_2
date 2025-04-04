// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Bloque.h"
#include "BloqueAcero.generated.h"
//#include "Components/StaticMeshComponent.h" 

/**
 * 
 */
UCLASS()
class BOMBERMAN012025_API ABloqueAcero : public ABloque
{
	GENERATED_BODY()



public:
	ABloqueAcero();

protected:
	virtual void BeginPlay() override;

private:
	/*UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* MallaBloqueAcero;*/

	void InicializarBloqueAcero();

	
};
