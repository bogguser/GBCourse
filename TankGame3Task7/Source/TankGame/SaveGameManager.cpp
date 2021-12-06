// Fill out your copyright notice in the Description page of Project Settings.


#include "SaveGameManager.h"

#include "Characters/EnemyTank.h"
#include "Characters/PlayerTank.h"
#include "GameFramework/SpectatorPawn.h"
#include "Kismet/GameplayStatics.h"


void USaveGameManager::Initialize()
{
	CurrentGameObject = Cast<UTankSaveGame>(UGameplayStatics::CreateSaveGameObject(UTankSaveGame::StaticClass()));
}

bool USaveGameManager::DoesSaveGameWxist(const FString& SlotName)
{
	return UGameplayStatics::DoesSaveGameExist(SlotName, 0);
}

void USaveGameManager::LoadGame(const FString& SlotName)
{
	TArray<AActor*> EnemyTanks;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AEnemyTank::StaticClass(), EnemyTanks);
	for(auto EnemyTank : EnemyTanks )
	{
		for(auto i = CurrentGameObject->EnemyHealth.begin(); i; ++i)
		{
			AEnemyTank* EnemyOneTank = Cast<AEnemyTank>(EnemyTank);
			if(EnemyOneTank)
			{
				EnemyOneTank->SetActorLocation(i.Key());
				EnemyOneTank->HealthComponent->CurretHealth = i.Value();
			}
		}
	}
	GetWorld()->GetFirstPlayerController()->GetPawn()->SetActorLocation(CurrentGameObject->PlayerLocation);
	UGameplayStatics::AsyncLoadGameFromSlot(SlotName, 0, FAsyncLoadGameFromSlotDelegate::CreateUObject(this, &USaveGameManager::OnGameLoadedFromSlotHandle));
}

void USaveGameManager::SaveCurrentGame(const FString& SlotName)
{
	TArray<AActor*> EnemyTanks;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AEnemyTank::StaticClass(), EnemyTanks);

		for(auto EnemyTank : EnemyTanks )
		{
			AEnemyTank* EnemyOneTank = Cast<AEnemyTank>(EnemyTank);
			if(EnemyOneTank)
			{
				CurrentGameObject->EnemyHealth.Add(EnemyOneTank->GetActorLocation(), EnemyOneTank->HealthComponent->CurretHealth);
			}
		}
	
	CurrentGameObject->PlayerLocation = GetWorld()->GetFirstPlayerController()->GetPawn()->GetActorLocation();
	UGameplayStatics::AsyncSaveGameToSlot(CurrentGameObject, SlotName, 0, FAsyncSaveGameToSlotDelegate::CreateUObject(this, &USaveGameManager::OnGameSavedToSlotHandle));
}

void USaveGameManager::OnGameLoadedFromSlotHandle(const FString& SlotName, const int32 UserIndex, USaveGame* SaveGame)
{
	CurrentGameObject = Cast<UTankSaveGame>(SaveGame);
	if(OnGameLoaded.IsBound())
	{
		OnGameLoaded.Broadcast(SlotName);
	}
}

void USaveGameManager::OnGameSavedToSlotHandle(const FString& SlotName, const int32 UserIndex, bool bSuccess) 
{
	if(OnGameSaved.IsBound())
	{
		OnGameSaved.Broadcast(SlotName);
	}
}

