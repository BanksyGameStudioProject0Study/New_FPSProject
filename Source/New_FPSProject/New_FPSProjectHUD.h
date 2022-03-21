// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "New_FPSProjectHUD.generated.h"

UCLASS()
class ANew_FPSProjectHUD : public AHUD
{
	GENERATED_BODY()

public:
	ANew_FPSProjectHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

