// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Bloque.h"
#include "BloqueConcreto.generated.h"

/**
 * 
 */
UCLASS()
class BOMBERMAN012025_API ABloqueConcreto : public ABloque
{
	GENERATED_BODY()
	

public:
	ABloqueConcreto();

protected:
	virtual void BeginPlay() override;

private:
	/*UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* MallaBloqueConcreto;*/

	void InicializarBloqueConcreto();



};
