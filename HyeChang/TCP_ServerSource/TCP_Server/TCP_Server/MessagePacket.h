#pragma once

enum class EMessageID : int
{
    UNDEFINED                   = 0,                      //미확인
    C2S_ProcessPacket_1         = 11001,                  //클라이언트_서버 1번 입력 패킷 처리
    C2S_ProcessPacket_2         = 11002,                  //클라이언트_서버 2번 입력 패킷 처리
    C2S_ProcessPacket_3         = 11003,                  //클라이언트_서버 3번 입력 패킷 처리
    C2S_ProcessPacket_4         = 11004,                  //클라이언트_서버 4번 입력 패킷 처리

    S2C_ProcessPacket_1         = 21001,                  //서버_클라이언트 1번 입력 패킷 처리
    S2C_ProcessPacket_2         = 21002,                  //서버_클라이언트 2번 입력 패킷 처리
    S2C_ProcessPacket_3         = 21003,                  //서버_클라이언트 3번 입력 패킷 처리
    S2C_ProcessPacket_4         = 21004,                  //서버_클라이언트 4번 입력 패킷 처리
};

enum class EProcessFlag : int
{
    UNDEFINED = 0,  //미정의
    PROCESS_OK = 1,  //처리완료
    PROCESS_FAIL = 2   //처리실패
};

#pragma pack(push,1)

struct MessageHeader
{
    int MessageID;
    int MessageSize;
    int SenderSocketID;
    int ReceiverSocketID;
};