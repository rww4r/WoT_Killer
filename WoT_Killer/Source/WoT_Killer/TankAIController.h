// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "AIController.h"
#include "TankAIController.generated.h"


UCLASS()
class WOT_KILLER_API ATankAIController : public AAIController
{
	GENERATED_BODY()
	


private:

	void BeginPlay() override;
	virtual void Tick(float DeltaSeconds) override;
	float AcceptanceRadius = 2000;

};
