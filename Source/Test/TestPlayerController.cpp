// Fill out your copyright notice in the Description page of Project Settings.


#include "TestPlayerController.h"
#include "Components/InputComponent.h"
#include "Kismet/GameplayStatics.h"

void ATestPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	InputComponent->BindAction("Speed1", IE_Pressed,this,  &ATestPlayerController::Speed1 );
	InputComponent->BindAction("Speed2", IE_Pressed,this,  &ATestPlayerController::Speed2 );
	InputComponent->BindAction("Speed3", IE_Pressed,this,  &ATestPlayerController::Speed3 );
	InputComponent->BindAction("Speed4", IE_Pressed,this,  &ATestPlayerController::Speed4 );
}

void ATestPlayerController::Speed1()
{
	Pawn = Cast<ATestPawn>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));
	if (Pawn) Pawn->SetSpeed(Speed_1);
	else UE_LOG(LogTemp, Display, TEXT("NoPawn"))
}

void ATestPlayerController::Speed2()
{
	Pawn = Cast<ATestPawn>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));
	if (Pawn) Pawn->SetSpeed(Speed_2);
}

void ATestPlayerController::Speed3()
{
	Pawn = Cast<ATestPawn>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));
	if (Pawn) Pawn->SetSpeed(Speed_3);
}

void ATestPlayerController::Speed4()
{
	Pawn = Cast<ATestPawn>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));
	if (Pawn) Pawn->SetSpeed(Speed_4);
}
