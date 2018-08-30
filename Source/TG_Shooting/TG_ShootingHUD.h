// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "TG_ShootingHUD.generated.h"

UCLASS()
class ATG_ShootingHUD : public AHUD
{
	GENERATED_BODY()

public:
	ATG_ShootingHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

