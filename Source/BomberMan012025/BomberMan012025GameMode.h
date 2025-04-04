// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "BomberMan012025GameMode.generated.h"

class AEnemigo; // Declaración adelantada
class ABloque; // Declaración adelantada


UCLASS(minimalapi)
class ABomberMan012025GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ABomberMan012025GameMode();

protected:
	virtual void BeginPlay() override;

private:
	void SpawnMapa();
	//void SpawnBloqueMadera();
	//void SpawnBloqueLadrillo();
	void SpawnBloques();

public:
	FVector posicionSgtBloque = FVector(1000.0f, 500.0f,20.0f );

	// Matriz para representar el mapa del laberinto
	TArray<TArray<int32>> arrayMapaBloques;

	// Método para inicializar la matriz del laberinto
	void InicializarMapaBloques(); // Declaración del método




	/*TArray<TArray<int32>> arrayMapaBloques = {
									{4,4,4,4,4,4,4,4,4,4,4,4},
									{4,0,0,0,2,2,2,0,0,0,0,4},
									{4,2,1,0,0,0,0,0,1,2,0,4},
									{4,0,1,0,2,0,2,0,0,0,0,4},
									{4,0,0,0,0,2,2,0,1,1,2,4},
									{4,0,2,2,2,0,2,0,2,2,2,4},
									{4,0,0,0,1,0,1,0,0,0,0,4},
									{4,2,2,0,2,0,2,1,2,1,0,4},
									{4,0,2,0,2,0,2,2,1,2,0,4},
									{4,0,2,0,2,0,2,2,2,1,0,4},
									{4,0,0,0,0,0,0,0,0,0,0,4},
									{4,4,4,4,4,4,4,4,4,4,4,4} };*/






	//TArray<class Bloques*> arraybloques;


	//almacenado en un TArray los bloques y enemigos
public:
	// Arrays para almacenar enemigos y bloques
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gestión de Objetos")
	TArray<AEnemigo*> Enemigos;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gestión de Objetos")
	TArray<ABloque*> Bloques;

	// Funciones para gestionar los Arrays
	void AgregarEnemigo(AEnemigo* NuevoEnemigo);
	void AgregarBloque(ABloque* NuevoBloque);


};

