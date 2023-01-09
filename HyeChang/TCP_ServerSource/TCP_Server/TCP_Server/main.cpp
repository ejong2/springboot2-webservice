// 채팅 서버

#define _WINSOCK_DEPRECATED_NO_WARNINGS

#include <iostream>
#include <stdlib.h>

#include <WinSock2.h>
#include <process.h>
#include <vector>
#include <string>

#include <Windows.h>

#include "MessagePacket.h"

#include "jdbc/mysql_connection.h"
#include "jdbc/cppconn/driver.h"
#include "jdbc/cppconn/exception.h"
#include "jdbc/cppconn/prepared_statement.h"

#pragma comment(lib, "WS2_32.lib")
#pragma comment (lib, "mysqlcppconn.lib")

#define PORT 19934
#define IP_ADDRESS "127.0.0.1"
#define PACKET_SIZE 100

const int NET_PACKET_SIZE = 512;

using namespace std;

const string server = "tcp://127.0.0.1:3306";
const string username = "root";
const string password = "1234";

vector<SOCKET> vSocketList;

CRITICAL_SECTION ServerCS;

sql::Driver* driver = nullptr;
sql::Connection* con = nullptr;
sql::Statement* stmt = nullptr;
sql::PreparedStatement* pstmt = nullptr;
sql::ResultSet* rs = nullptr;

int ProcessPacket(SOCKET CS, char* Buffer)
{
    int Retval = 1;

    char Packet[NET_PACKET_SIZE] = { 0, };
    memcpy(Packet, Buffer, sizeof(Packet));
    MessageHeader MsgHead = { 0, };
    memcpy(&MsgHead, Packet, sizeof(MsgHead));

    switch ((EMessageID)MsgHead.MessageID)
    {
        case EMessageID::C2S_ProcessPacket_1:
        {
            cout << "11001" << '\n';
            break;
        }
        case EMessageID::C2S_ProcessPacket_2:
        {
            cout << "11002" << '\n';
            break;
        }
        case EMessageID::C2S_ProcessPacket_3:
        {
            cout << "11003" << '\n';
            break;
        }
        case EMessageID::C2S_ProcessPacket_4:
        {
            cout << "11004" << '\n';
            break;
        }

        default:
            break;
    }
    return Retval;
}

unsigned WINAPI WorkThread(void* Args)
{
    SOCKET CS = *(SOCKET*)Args;

    while (true)
    {
        char Buffer[PACKET_SIZE] = { 0, };
        int RecvBytes = recv(CS, Buffer, sizeof(Buffer), 0);
        if (RecvBytes <= 0) { break; }
        int Retval = ProcessPacket(CS, &Buffer[0]);


        cout << Buffer[0] << '\n';

    }
    return 0;
}

int main()
{
    driver = get_driver_instance();
    con = driver->connect(server, username, password);
    con->setSchema("UE4SERVER");

    cout << "[채팅 서버 활성화]" << '\n';

    InitializeCriticalSection(&ServerCS);

    WSADATA WSAData;
    WSAStartup(MAKEWORD(2, 2), &WSAData);
    SOCKET SS = socket(AF_INET, SOCK_STREAM, 0);

    SOCKADDR_IN SA = { 0, };
    SA.sin_family = AF_INET;
    SA.sin_addr.S_un.S_addr = inet_addr(IP_ADDRESS);
    SA.sin_port = htons(PORT);

    if (::bind(SS, (SOCKADDR*)&SA, sizeof(SA)) != 0) { exit(-3); };
    if (listen(SS, SOMAXCONN) == SOCKET_ERROR) { exit(-4); };

    cout << "클라이언트 연결을 기다리는 중입니다......." << '\n';

    while (true)
    {
        SOCKADDR_IN CA = { 0, };
        int sizeCA = sizeof(CA);
        SOCKET CS = accept(SS, (SOCKADDR*)&CA, &sizeCA);

        cout << "클라이언트 접속 : " << CS << '\n';

        EnterCriticalSection(&ServerCS);
        vSocketList.push_back(CS);
        LeaveCriticalSection(&ServerCS);

        HANDLE hThread = (HANDLE)_beginthreadex(0, 0, WorkThread, (void*)&CS, 0, 0);
    }
    closesocket(SS);

    WSACleanup();
}

