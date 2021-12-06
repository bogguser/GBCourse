// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "Characters/PlayerTank.h"
#include "GameFramework/SaveGame.h"
#include "Player/TankPlayerController.h"

#include "TankSaveGame.generated.h"

/**
 * 
 */
UCLASS()
class TANKGAME_API UTankSaveGame : public USaveGame
{
	GENERATED_BODY()

public:
	UTankSaveGame();

	UPROPERTY(BlueprintReadWrite, SaveGame)
	FVector PlayerLocation;

	UPROPERTY(BlueprintReadWrite, SaveGame)
	float PlayerCurretHealth;

	UPROPERTY(BlueprintReadWrite, SaveGame)
	TMap<FVector, float> EnemyHealth;

};
