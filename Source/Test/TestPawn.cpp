// Fill out your copyright notice in the Description page of Project Settings.


#include "TestPawn.h"

// Sets default values
ATestPawn::ATestPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	Cube = CreateDefaultSubobject<UStaticMeshComponent>("Cube");
	SetRootComponent(Cube);
	
	
	SpringArmComponent = CreateDefaultSubobject<USpringArmComponent>("SpringArm");
	SpringArmComponent->TargetArmLength = 500;
	SpringArmComponent->SetRelativeRotation(FRotator(-30,0,0));
	SpringArmComponent->SetRelativeLocation(FVector(0,0,50));
	SpringArmComponent->SetupAttachment(Cube);
	
	CameraComponent = CreateDefaultSubobject<UCameraComponent>("Camera");
	CameraComponent->SetupAttachment(SpringArmComponent);
	
}

// Called when the game starts or when spawned
void ATestPawn::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ATestPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (!MovementSpeed==0)
	{
		const FVector NewLocation = GetActorLocation()+MovementSpeed*HitMultiplier*DeltaTime*FVector::ForwardVector;
		SetActorLocation(NewLocation,true);
		UpdateOverlaps(true);
	}
}

// Called to bind functionality to input
void ATestPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}



void ATestPawn::SetSpeed(float Speed)
{
	MovementSpeed = Speed;
	UE_LOG(LogTemp, Display, TEXT("New movement speed %f"), MovementSpeed);
}


