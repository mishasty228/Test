// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Camera/CameraComponent.h"
#include "Components/SphereComponent.h"
#include "GameFramework/Pawn.h"
#include "GameFramework/SpringArmComponent.h"
#include "TestPawn.generated.h"

UCLASS()
class TEST_API ATestPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ATestPawn();

	UPROPERTY(BlueprintReadWrite,EditAnywhere)
	float MovementSpeed = 0.0f;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float HitMultiplier = 1;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	UStaticMeshComponent* Cube;

	UPROPERTY(BlueprintReadWrite,EditAnywhere)
	USpringArmComponent* SpringArmComponent;

	UPROPERTY(BlueprintReadWrite,EditAnywhere)
	UCameraComponent* CameraComponent;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	
public:
	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void SetSpeed(float Speed);
};




