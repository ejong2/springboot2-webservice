// Fill out your copyright notice in the Description page of Project Settings.


#include "PC_SocketPC.h"

void APC_SocketPC::BeginPlay()
{
	Super::BeginPlay();
	MyThreadObject = new SocketThreadClass;

}

void APC_SocketPC::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
