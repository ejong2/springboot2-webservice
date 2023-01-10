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

//--Network-------------------------------------------------------------------
WSAData                      NET_WSADATA = { 0, };
SOCKET                       NET_SERVERSOCKET = NULL;
SOCKADDR_IN                  NET_SERVERADDR = { 0, };

const int NET_PACKET_SIZE = 512;

using namespace std;

const string server = "tcp://127.0.0.1:3306";
const string username = "root";
const string password = "1234";

vector<SOCKET> vSocketList;

sql::Driver* driver = nullptr;
sql::Connection* con = nullptr;
sql::Statement* stmt = nullptr;
sql::PreparedStatement* pstmt = nullptr;
sql::ResultSet* rs = nullptr;

CRITICAL_SECTION CS_DB_HANDLER;

int ProcessPacket(SOCKET CS, char* Buffer)
{
    int Retval = 1;
    string sqlQuery = "";

    char Packet[NET_PACKET_SIZE] = { 0, };
    memcpy(Packet, Buffer, sizeof(Packet));
    MessageHeader MsgHead = { 0, };
    memcpy(&MsgHead, Packet, sizeof(MsgHead));

    string strContent = "";

    switch ((EMessageID)MsgHead.MessageID)
    {
        case EMessageID::C2S_ProcessPacket_1:
        {
            EnterCriticalSection(&CS_DB_HANDLER);
            try
            {
                cout << "11001번 패킷 도착" << '\n';

                sqlQuery = "SELECT PACKET_CONTENTS FROM PacketTable WHERE PACKET = ?";
                pstmt = con->prepareStatement(sqlQuery);
                pstmt->setInt(1, MsgHead.MessageID);
                rs = pstmt->executeQuery();

                while (rs->next())
                {
                    strContent = rs->getString("PACKET_CONTENTS");
                    break;
                }

                cout << strContent << '\n';

            }
            catch (sql::SQLException ex)
            {
                std::cout << "[ERR] SQL Error On C2S_REQ_LOGIN_PLAYER. ErrorMsg : " << ex.what() << std::endl;
            }
            if (rs) { rs->close(); rs = nullptr; }
            if (pstmt) { pstmt->close(); pstmt = nullptr; }
            LeaveCriticalSection(&CS_DB_HANDLER);

            //MsgHead.MessageID = (int)EMessageID::S2C_ProcessPacket_1;
            //MsgHead.SenderSocketID = (int)NET_SERVERSOCKET;
            //MsgHead.ReceiverSocketID = (int)CS;
            //MsgHead.MessageSize = sizeof(MessageHeader);
            //Retval = send(CS, (char*)MsgHead, MsgHead.MessageSize, 0);
            break;
        } 
        case EMessageID::C2S_ProcessPacket_2:
        {
            EnterCriticalSection(&CS_DB_HANDLER);
            try
            {
                cout << "11002번 패킷 도착" << '\n';

                sqlQuery = "SELECT PACKET_CONTENTS FROM PacketTable WHERE PACKET = ?";
                pstmt = con->prepareStatement(sqlQuery);
                pstmt->setInt(1, MsgHead.MessageID);
                rs = pstmt->executeQuery();

                while (rs->next())
                {
                    strContent = rs->getString("PACKET_CONTENTS");
                    break;
                }

                cout << strContent << '\n';

            }
            catch (sql::SQLException ex)
            {
                std::cout << "[ERR] SQL Error On C2S_REQ_LOGIN_PLAYER. ErrorMsg : " << ex.what() << std::endl;
            }
            if (rs) { rs->close(); rs = nullptr; }
            if (pstmt) { pstmt->close(); pstmt = nullptr; }
            LeaveCriticalSection(&CS_DB_HANDLER);

            //MsgHead.MessageID = (int)EMessageID::S2C_ProcessPacket_1;
            //MsgHead.SenderSocketID = (int)NET_SERVERSOCKET;
            //MsgHead.ReceiverSocketID = (int)CS;
            //MsgHead.MessageSize = sizeof(MessageHeader);
            //Retval = send(CS, (char*)MsgHead, MsgHead.MessageSize, 0);
            break;
        }
        case EMessageID::C2S_ProcessPacket_3:
        {
            EnterCriticalSection(&CS_DB_HANDLER);
            try
            {
                cout << "11003번 패킷 도착" << '\n';

                sqlQuery = "SELECT PACKET_CONTENTS FROM PacketTable WHERE PACKET = ?";
                pstmt = con->prepareStatement(sqlQuery);
                pstmt->setInt(1, MsgHead.MessageID);
                rs = pstmt->executeQuery();

                while (rs->next())
                {
                    strContent = rs->getString("PACKET_CONTENTS");
                    break;
                }

                cout << strContent << '\n';

            }
            catch (sql::SQLException ex)
            {
                std::cout << "[ERR] SQL Error On C2S_REQ_LOGIN_PLAYER. ErrorMsg : " << ex.what() << std::endl;
            }
            if (rs) { rs->close(); rs = nullptr; }
            if (pstmt) { pstmt->close(); pstmt = nullptr; }
            LeaveCriticalSection(&CS_DB_HANDLER);

            //MsgHead.MessageID = (int)EMessageID::S2C_ProcessPacket_1;
            //MsgHead.SenderSocketID = (int)NET_SERVERSOCKET;
            //MsgHead.ReceiverSocketID = (int)CS;
            //MsgHead.MessageSize = sizeof(MessageHeader);
            //Retval = send(CS, (char*)MsgHead, MsgHead.MessageSize, 0);
            break;
        }
        case EMessageID::C2S_ProcessPacket_4:
        {
            EnterCriticalSection(&CS_DB_HANDLER);
            try
            {
                cout << "11004번 패킷 도착" << '\n';

                sqlQuery = "SELECT PACKET_CONTENTS FROM PacketTable WHERE PACKET = ?";
                pstmt = con->prepareStatement(sqlQuery);
                pstmt->setInt(1, MsgHead.MessageID);
                rs = pstmt->executeQuery();

                while (rs->next())
                {
                    strContent = rs->getString("PACKET_CONTENTS");
                    break;
                }

                cout << strContent << '\n';

            }
            catch (sql::SQLException ex)
            {
                std::cout << "[ERR] SQL Error On C2S_REQ_LOGIN_PLAYER. ErrorMsg : " << ex.what() << std::endl;
            }
            if (rs) { rs->close(); rs = nullptr; }
            if (pstmt) { pstmt->close(); pstmt = nullptr; }
            LeaveCriticalSection(&CS_DB_HANDLER);

            //MsgHead.MessageID = (int)EMessageID::S2C_ProcessPacket_1;
            //MsgHead.SenderSocketID = (int)NET_SERVERSOCKET;
            //MsgHead.ReceiverSocketID = (int)CS;
            //MsgHead.MessageSize = sizeof(MessageHeader);
            //Retval = send(CS, (char*)MsgHead, MsgHead.MessageSize, 0);
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
        if (RecvBytes <= 0)
        {
            cout << "클라이언트 연결 종료 : " << CS << '\n';
            break; 
        }
        int Retval = ProcessPacket(CS, &Buffer[0]);

        //cout << Buffer[0] << '\n';

    }
    return 0;
}

int main()
{
    driver = get_driver_instance();
    con = driver->connect(server, username, password);
    con->setSchema("UE4SERVER");

    cout << "[UE4 - TCP 서버 활성화]" << '\n';

    InitializeCriticalSection(&CS_DB_HANDLER);

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

        //EnterCriticalSection(&ServerCS);
        vSocketList.push_back(CS);
        //LeaveCriticalSection(&ServerCS);

        HANDLE hThread = (HANDLE)_beginthreadex(0, 0, WorkThread, (void*)&CS, 0, 0);
    }
    closesocket(SS);

    WSACleanup();
}

