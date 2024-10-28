// Fill out your copyright notice in the Description page of Project Settings.


#include "UUCharacter.h"

// Sets default values
AUUCharacter::AUUCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AUUCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AUUCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AUUCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

