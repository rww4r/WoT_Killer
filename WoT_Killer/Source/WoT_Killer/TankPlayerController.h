// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "GameFramework/PlayerController.h"
#include "TankPlayerController.generated.h"

class ATank;

UCLASS()
class WOT_KILLER_API ATankPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	ATank* GetControlledTank() const;

	void BeginPlay() override;

	virtual void Tick(float DeltaSeconds) override;


private:

	void AimTowardsCrosshair();

	bool GetSightRayHitLocation(FVector& HitLocation) const;

	UPROPERTY(EditAnywhere)
		float CrossHairX = .5;
	UPROPERTY(EditAnywhere)
		float CrossHairY = 0.3333;
	UPROPERTY(EditAnywhere)
		float LineTraceRange = 1000000;

	bool GetLookDirection(FVector2D CrosshairScreenLocation, FVector& LookDirection) const;
	bool GetLookVectorHitLocation(FVector LookDirection, FVector& HitLocation) const;
	
};
