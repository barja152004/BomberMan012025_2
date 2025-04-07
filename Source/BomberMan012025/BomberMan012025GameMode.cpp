// Copyright Epic Games, Inc. All Rights Reserved.

#include "BomberMan012025GameMode.h"
#include "BomberMan012025Character.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/World.h"
#include "Bloque.h"
#include "BloqueAcero.h"
#include "BloqueMadera.h"
#include "BloqueLadrillo.h"
#include "BloqueConcreto.h"
#include "BloqueAgua.h"
#include "BloqueArena.h"
#include "BloqueCesped.h"
#include "BloqueOro.h"
#include "BloqueRoca.h"
#include "BloqueVidrio.h"
#include "BloqueCespedFuncional.h"
#include "BloqueOroFuncional.h"


#include "Enemigo.h"
#include "EnemigoAcuatico.h"
#include "EnemigoTerrestre.h"
#include "EnemigoAereo.h"
#include "EnemigoSubterraneo.h"
#include "EnemigoFuego.h"

#include "Math/UnrealMathUtility.h"


ABomberMan012025GameMode::ABomberMan012025GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	//------------------------------------------------
	// Inicializar la matriz del mapa cuando se crea el objeto
	InicializarMapaBloques();
	//------------------------------------------------

}

void ABomberMan012025GameMode::BeginPlay()
{
	Super::BeginPlay();

	//generar el mapa al inicio del juego
	SpawnMapa();

	//mapa v2
	SpawnBloques();

	//spawnear bloques funcionales
	SpawnBloqueFuncionales();

	//spawnear enemigos
	SpawnEnemigos();
}

void ABomberMan012025GameMode::SpawnMapa()
{
	if (UWorld* Mundo = GetWorld())
	{
		
		// Mensaje en pantalla
		//GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, TEXT("Bloques generados"));
		// -------------
		


		//spawn del suelo
		Mundo->SpawnActor<ABloqueAcero>(
			ABloqueAcero::StaticClass(),
			FVector(5120.0f, 5020.0f, -150.0f),  // Ubicación del bloque
			FRotator(0.0f, 0.0f, 0.0f)    // Rotación del bloque
		)->SetActorScale3D(FVector(100.75f, 100.5f, 0.5f)); // Escala del bloque

	}

}


//funcon para spawnear los bloques
void ABomberMan012025GameMode::SpawnBloques()
{
	for (int i = 0; i < 50; i++) // Ajustado para 50x50
	{
		for (int j = 0; j < 50; j++)
		{
			if (UWorld* Mundo = GetWorld())
			{
				switch (arrayMapaBloques[i][j])
				{
				case 1: // Bloque de acero
					Mundo->SpawnActor<ABloqueAcero>(ABloqueAcero::StaticClass(), FVector(200.0f + i * 200, 150.0f + j * 200, -100.0f), FRotator::ZeroRotator)
						->SetActorScale3D(FVector(2.0f, 2.0f, 2.0f));
					break;
				case 2: // Bloque de agua
					Mundo->SpawnActor<ABloqueAgua>(ABloqueAgua::StaticClass(), FVector(200.0f + i * 200, 150.0f + j * 200, -100.0f), FRotator::ZeroRotator)
						->SetActorScale3D(FVector(2.0f, 2.0f, 2.0f));
					break;
				case 3: // Bloque de arena
					Mundo->SpawnActor<ABloqueArena>(ABloqueArena::StaticClass(), FVector(200.0f + i * 200, 150.0f + j * 200, -100.0f), FRotator::ZeroRotator)
						->SetActorScale3D(FVector(2.0f, 2.0f, 2.0f));
					break;
				case 4: // Bloque de césped
					Mundo->SpawnActor<ABloqueCesped>(ABloqueCesped::StaticClass(), FVector(200.0f + i * 200, 150.0f + j * 200, -100.0f), FRotator::ZeroRotator)
						->SetActorScale3D(FVector(2.0f, 2.0f, 2.0f));
					break;
				case 5: // Bloque de concreto
					Mundo->SpawnActor<ABloqueConcreto>(ABloqueConcreto::StaticClass(), FVector(200.0f + i * 200, 150.0f + j * 200, -100.0f), FRotator::ZeroRotator)
						->SetActorScale3D(FVector(2.0f, 2.0f, 2.0f));
					break;
				case 6: // Bloque de ladrillo
					Mundo->SpawnActor<ABloqueLadrillo>(ABloqueLadrillo::StaticClass(), FVector(200.0f + i * 200, 150.0f + j * 200, -100.0f), FRotator::ZeroRotator)
						->SetActorScale3D(FVector(2.0f, 2.0f, 2.0f));
					break;
				case 7: // Bloque de madera
					Mundo->SpawnActor<ABloqueMadera>(ABloqueMadera::StaticClass(), FVector(200.0f + i * 200, 150.0f + j * 200, -100.0f), FRotator::ZeroRotator)
						->SetActorScale3D(FVector(2.0f, 2.0f, 2.0f));
					break;
				case 8: // Bloque de oro
					Mundo->SpawnActor<ABloqueOro>(ABloqueOro::StaticClass(), FVector(200.0f + i * 200, 150.0f + j * 200, -100.0f), FRotator::ZeroRotator)
						->SetActorScale3D(FVector(2.0f, 2.0f, 2.0f));
					break;
				case 9: // Bloque de roca
					Mundo->SpawnActor<ABloqueRoca>(ABloqueRoca::StaticClass(), FVector(200.0f + i * 200, 150.0f + j * 200, -100.0f), FRotator::ZeroRotator)
						->SetActorScale3D(FVector(2.0f, 2.0f, 2.0f));
					break;
				case 10: // Bloque de vidrio
					Mundo->SpawnActor<ABloqueVidrio>(ABloqueVidrio::StaticClass(), FVector(200.0f + i * 200, 150.0f + j * 200, -100.0f), FRotator::ZeroRotator)
						->SetActorScale3D(FVector(2.0f, 2.0f, 2.0f));
					break;
				case 0: // Espacio vacío
					break;
				}
			}
		}
	}

}

//funcion para spawnear los bloques funcionales
void ABomberMan012025GameMode::SpawnBloqueFuncionales()
{
	if (UWorld* Mundo = GetWorld())
	{
		// Spawnear BloqueOroFuncional 
		Mundo->SpawnActor<ABloqueOroFuncional>(
			ABloqueOroFuncional::StaticClass(),
			FVector(2620.0f , 4250.0f , 660.0f), 
			FRotator::ZeroRotator
		)->SetActorScale3D(FVector(2.0f, 2.0f, 2.0f)); // Escala ajustada

		// Spawnear BloqueCespedFuncional 
		Mundo->SpawnActor<ABloqueCespedFuncional>(
			ABloqueCespedFuncional::StaticClass(),
			FVector(2620.0f , 5250.0f , 660.0f), 
			FRotator::ZeroRotator
		)->SetActorScale3D(FVector(2.0f, 2.0f, 2.0f)); // Escala ajustada

	}

}


//funcion para generar la matriz para los bloques 
void ABomberMan012025GameMode::InicializarMapaBloques()
{
	// Configurar el tamaño del array principal
	arrayMapaBloques.SetNum(50); // Define 50 filas

	for (int i = 0; i < 50; i++)
	{
		arrayMapaBloques[i].SetNum(50); // Define 50 columnas por fila

		for (int j = 0; j < 50; j++)
		{
			if (i == 0 || i == 49 || j == 0 || j == 49) // Bordes del laberinto
			{
				arrayMapaBloques[i][j] = 1; // Bloques de acero
			}
			else if (i % 2 == 0 && j % 2 == 0) // Celdas base del laberinto
			{
				arrayMapaBloques[i][j] = 0; // Espacio vacío para el camino
			}
			else if (FMath::RandRange(0, 100) < 50) // Probabilidad de bloque en los espacios intermedios
			{
				arrayMapaBloques[i][j] = FMath::RandRange(2, 10); // Bloques aleatorios
			}
			else
			{
				arrayMapaBloques[i][j] = 0; // Espacios vacíos
			}
		}
	}

	// Abrir caminos adicionales entre celdas para un verdadero laberinto
	for (int i = 2; i < 48; i += 2)
	{
		for (int j = 2; j < 48; j += 2)
		{
			int RandomDirection = FMath::RandRange(0, 3); // Direcciones: 0 = arriba, 1 = derecha, 2 = abajo, 3 = izquierda

			switch (RandomDirection)
			{
			case 0: // Arriba
				arrayMapaBloques[i - 1][j] = 0;
				break;
			case 1: // Derecha
				arrayMapaBloques[i][j + 1] = 0;
				break;
			case 2: // Abajo
				arrayMapaBloques[i + 1][j] = 0;
				break;
			case 3: // Izquierda
				arrayMapaBloques[i][j - 1] = 0;
				break;
			}
		}
	}
}

void ABomberMan012025GameMode::SpawnEnemigos()
{
	if (UWorld* Mundo = GetWorld())
	{
		//haciendo spawn de EnemigoAcuatico
		for (int i = 0; i < 3; i++)
		{
			Mundo->SpawnActor<AEnemigoAcuatico>(AEnemigoAcuatico::StaticClass(), FVector(1900.0f + i * 200, 7150.0f + i * 200, 580.0f), FRotator::ZeroRotator);
		}
		//haciendo spawn de EnemigoTerrestre
		for (int i = 0; i < 3; i++)
		{
			Mundo->SpawnActor<AEnemigoTerrestre>(AEnemigoTerrestre::StaticClass(), FVector(1900.0f + i * 200, 2450.0f + i * 200, 580.0f), FRotator::ZeroRotator);
		}
		//haciendo spawn de EnemigoAereo
		for (int i = 0; i < 3; i++)
		{
			Mundo->SpawnActor<AEnemigoAereo>(AEnemigoAereo::StaticClass(), FVector(4400.0f + i * 200, 2450.0f + i * 200, 580.0f), FRotator::ZeroRotator);
		}
		//haciendo spawn de EnemigoSubterraneo
		for (int i = 0; i < 3; i++)
		{
			Mundo->SpawnActor<AEnemigoSubterraneo>(AEnemigoSubterraneo::StaticClass(), FVector(3480.0f + i * 200, 4550.0f + i * 200, 580.0f), FRotator::ZeroRotator);
		}
		//haciendo spawn de EnemigoFuego
		for (int i = 0; i < 3; i++)
		{
			Mundo->SpawnActor<AEnemigoFuego>(AEnemigoFuego::StaticClass(), FVector(4710.0f + i * 200, 7330.0f + i * 200, 580.0f), FRotator::ZeroRotator);
		}
	}

}




//funcion para agregar enemigos y bloques al TArray
void ABomberMan012025GameMode::AgregarEnemigo(AEnemigo* NuevoEnemigo)
{
	if (NuevoEnemigo)
	{
		Enemigos.Add(NuevoEnemigo); // Agrega el enemigo al TArray
		UE_LOG(LogTemp, Warning, TEXT("Enemigo agregado. Total de enemigos: %d"), Enemigos.Num());
	}

}

void ABomberMan012025GameMode::AgregarBloque(ABloque* NuevoBloque)
{
	if (NuevoBloque)
	{
		Bloques.Add(NuevoBloque); // Agrega el bloque al TArray
		UE_LOG(LogTemp, Warning, TEXT("Bloque agregado. Total de bloques: %d"), Bloques.Num());
	}

}

