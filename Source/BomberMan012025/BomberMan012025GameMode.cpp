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

ABomberMan012025GameMode::ABomberMan012025GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

void ABomberMan012025GameMode::BeginPlay()
{
	Super::BeginPlay();

	//generar el mapa al inicio del juego
	SpawnMapa();

	//generar bloques de madera
	SpawnBloqueMadera();

	//generar bloques de ladrillo
	//SpawnBloqueLadrillo();

	//mapa v2
	SpawnBloques();
}

void ABomberMan012025GameMode::SpawnMapa()
{
	if (UWorld* Mundo = GetWorld())
	{
		// Crear el suelo (bloque grande)
		Mundo->SpawnActor<ABloqueAcero>(ABloqueAcero::StaticClass(), FVector(1360.0f, 1300.0f, -150.0f), FRotator::ZeroRotator)
			->SetActorScale3D(FVector(25.0f, 25.0f, 0.5f));

		// Muros verticales (izquierda y derecha)
		Mundo->SpawnActor<ABloqueAcero>(ABloqueAcero::StaticClass(), FVector(160.0f, 1300.0f, 50.0f), FRotator(90, 90, 90))
			->SetActorScale3D(FVector(2.0f, 25.0f, 0.5f));

		Mundo->SpawnActor<ABloqueAcero>(ABloqueAcero::StaticClass(), FVector(2660.0f, 1300.0f, 50.0f), FRotator(90, 90, 90))
			->SetActorScale3D(FVector(2.0f, 25.0f, 0.5f));

		// Muros horizontales (arriba y abajo) - Rotados 90� en el eje Z
		Mundo->SpawnActor<ABloqueAcero>(ABloqueAcero::StaticClass(), FVector(1330.0f, 100.0f, 50.0f), FRotator(90, 90, 0))
			->SetActorScale3D(FVector(2.0f, 25.0f, 0.5f));



		Mundo->SpawnActor<ABloqueAcero>(ABloqueAcero::StaticClass(), FVector(2110.0f, 2440.0f, 50.0f), FRotator(90, 0, 90))
			->SetActorScale3D(FVector(2.0f, 10.0f, 0.5f));

		Mundo->SpawnActor<ABloqueAcero>(ABloqueAcero::StaticClass(), FVector(560.0f, 2440.0f, 50.0f), FRotator(90, 0, 90))
			->SetActorScale3D(FVector(2.0f, 10.0f, 0.5f));


		// Mensaje en pantalla
		//GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, TEXT("Bloques generados"));

	}

}

void ABomberMan012025GameMode::SpawnBloqueMadera()
{
	if (UWorld* Mundo = GetWorld())
	{
		Mundo->SpawnActor<ABloqueMadera>(ABloqueMadera::StaticClass(), FVector(1360.0f, 2900.0f, -25.0f), FRotator::ZeroRotator)
			->SetActorScale3D(FVector(5.0f, 2.0f, 0.5f));

		Mundo->SpawnActor<ABloqueMadera>(ABloqueMadera::StaticClass(), FVector(1360.0f, 3300.0f, 25.0f), FRotator::ZeroRotator)
			->SetActorScale3D(FVector(5.0f, 2.0f, 0.5f));

		Mundo->SpawnActor<ABloqueMadera>(ABloqueMadera::StaticClass(), FVector(1360.0f, 3600.0f, 75.0f), FRotator::ZeroRotator)
			->SetActorScale3D(FVector(5.0f, 2.0f, 0.5f));
	}
}

void ABomberMan012025GameMode::SpawnBloqueLadrillo()
{
	if (UWorld* Mundo = GetWorld())
	{
		for (int i = 0; i < 8; i++)
		{
			for (int j = 0; j < 12; j++)
			{
				Mundo->SpawnActor<ABloqueLadrillo>(ABloqueLadrillo::StaticClass(), FVector((200.0f + i * 300, 200.0f + j * 200, -100.0)), FRotator::ZeroRotator)
					->SetActorScale3D(FVector(1.0f, 1.0f, 1.0));

			}

		}

	}
}

void ABomberMan012025GameMode::SpawnBloques()
{
	//Recorrer el array de bloques y hacer spawn de cada uno
	for (int i = 0; i < 12; i++)
	{
		for (int j = 0; j < 12; j++) {
			if (UWorld* Mundo = GetWorld()) {
				switch (arrayMapaBloques[i][j])
				{
				case 2:
					Mundo->SpawnActor<ABloqueLadrillo>(ABloqueLadrillo::StaticClass(), FVector(200.0f + i * 200, 150.0f + j * 200, -100.0f), FRotator::ZeroRotator)
						->SetActorScale3D(FVector(2.0f, 2.0f, 2.0f));
					GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, TEXT("1"));
					break;
				case 1:
					Mundo->SpawnActor<ABloqueConcreto>(ABloqueConcreto::StaticClass(), FVector(200.0f + i * 200, 150.0f + j * 200, -100.0f), FRotator::ZeroRotator)
						->SetActorScale3D(FVector(2.0f, 2.0f, 2.0f));
					GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, TEXT("2"));
					break;
				case 4:
					Mundo->SpawnActor<ABloqueAcero>(ABloqueAcero::StaticClass(), FVector(200.0f + i * 200, 150.0f + j * 200, -100.0f), FRotator::ZeroRotator)
						->SetActorScale3D(FVector(2.0f, 2.0f, 2.0f));
					GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, TEXT("3"));
					break;
				case 0:
					break;
				}
			}
		}
	}

}

