#include <iostream>

// 소켓을 사용하기 위한 라이브러리
#include <WinSock2.h>

// 소켓 라이브러리 참조
#pragma comment (lib, "ws2_32.lib")
using namespace std;

int main()
{
	// 소켓 정보 데이터 설정
	WSADATA wsaData;

	// 소켓 초기화 (실행)
	int Result = WSAStartup(MAKEWORD(2, 2), &wsaData);

	// Internet의 Stream 방식으로 소켓 생성
	SOCKET ServerSocket = socket(AF_INET, SOCK_STREAM, 0);

	// 소켓 주소 설정
	SOCKADDR_IN ServerSockAddr;
	
	// 구조체 초기화
	memset(&ServerSockAddr, 0, sizeof(ServerSockAddr));

	// 소켓은 Internet 타입
	ServerSockAddr.sin_family = PF_INET;
	
	// INADDR_ANY의 경우 호스트를 127.0.0.1로 잡아도 되고 localhost로 잡아도 된다.
	ServerSockAddr.sin_addr.S_un.S_addr = htonl(INADDR_ANY);

	// 서버 포트 설정
	ServerSockAddr.sin_port = htons(4949);

	// 설정된 소켓 정보를 소켓에 바인딩한다.
	int Status = bind(ServerSocket, (SOCKADDR*)&ServerSockAddr, sizeof(ServerSockAddr));

	// 소켓을 대기 상태로 기다린다.
	Status = listen(ServerSocket, 0);


	// 클라이언트 소켓 생성 및 정보를 담을 구조체 생성, 클라이언트가 접속을 요청하면 승인
	SOCKADDR_IN ClientAddrIn;
	memset(&ClientAddrIn, 0, sizeof(SOCKADDR_IN));
	int ClientLength = sizeof(ClientAddrIn);
	

	cout << "Server Start" << endl;



	while (true)
	{

		SOCKET ClientSocket = accept(ServerSocket, (SOCKADDR*)&ClientAddrIn, &ClientLength);
		cout << "연결 중... " << endl;

		
	}

	closesocket(ServerSocket);

	WSACleanup();
}