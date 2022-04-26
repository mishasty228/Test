// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TestPawn.h"
#include "GameFramework/PlayerController.h"
#include "TestPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class TEST_API ATestPlayerController : public APlayerController
{
	GENERATED_BODY()

	ATestPawn* Pawn;

public:
	UPROPERTY(BlueprintReadWrite,EditAnywhere)
	float Speed_1 = 100;

	UPROPERTY(BlueprintReadWrite,EditAnywhere)
	float Speed_2 = 300;

	UPROPERTY(BlueprintReadWrite,EditAnywhere)
	float Speed_3 = 500;

	UPROPERTY(BlueprintReadWrite,EditAnywhere)
	float Speed_4 = 700;
	
protected:

public:
	virtual void SetupInputComponent() override;

	void Speed1();
	void Speed2();
	void Speed3();
	void Speed4();
};
