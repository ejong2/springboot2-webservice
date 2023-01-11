// Fill out your copyright notice in the Description page of Project Settings.


#include "RecvThreadClass.h"

RecvThreadClass::RecvThreadClass()
{
    Thread = FRunnableThread::Create(this, TEXT("Network Thread"));

    MyGameModeBase = Cast<ATenth_TCPConnect_OneGameModeBase>(GWorld->GetAuthGameMode());
    
}

RecvThreadClass::~RecvThreadClass()
{
    GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, FString::Printf(TEXT("Thread Destructor")));
    if (Thread)
    {
        //Shutdown thread
        Thread->WaitForCompletion();
        Thread->Kill();
        delete Thread;
    }
    delete Socket;
    delete MyGameModeBase;
}

bool RecvThreadClass::Init()
{
    bool bIsConnected = ConnectToServer();



    return bIsConnected;
}

uint32 RecvThreadClass::Run()
{
    while (bCanRunning)
    {
        int32 RecvBytes = 0;
        if (Socket)
        {
            Socket->Recv(reinterpret_cast<uint8*>(&MyPacket), sizeof(MyPacket), RecvBytes);
            
            PacketToGameMode(MyPacket);
            
        }

        
    }
    return uint32();
}

void RecvThreadClass::Exit()
{
    GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, FString::Printf(TEXT("Thread Exit")));
    if (Socket)
    {
        //Socket Disconnect
        Socket->Close();
    }
}

bool RecvThreadClass::ConnectToServer()
{
    FString Address = TEXT("127.0.0.1");
    int32 Port = 7476;
    FIPv4Address IP;
    FIPv4Address::Parse(Address, IP);

    //반환형 맞추기 : 공유포인터
    TSharedRef<FInternetAddr> Addr = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->CreateInternetAddr();

    Addr->SetIp(GetTypeHash(IP));
    Addr->SetPort(Port);
    

    if (Socket)
    {
        GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, FString::Printf(TEXT("Trying to Connect ")));
    }
    else
    {
        GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Socket could't be created")));

        return false;
    }

    bool Connected = Socket->Connect(*Addr);

    if (Connected)
    {

        GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, FString::Printf(TEXT("Connect Success")));


        return true;
    }
    else
    {
        GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Connect Failed")));

        return false;
    }

}

void RecvThreadClass::PacketToGameMode(Packet pack)
{
    MyGameModeBase->GameModePacket.Header = pack.Header;
    MyGameModeBase->GameModePacket.X = pack.X;
    MyGameModeBase->GameModePacket.Y = pack.Y;
    MyGameModeBase->GameModePacket.Z = pack.Z;

}