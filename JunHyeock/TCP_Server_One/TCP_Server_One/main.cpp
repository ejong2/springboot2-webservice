#include <iostream>
#include <winsock2.h>

#pragma comment (lib, "ws2_32.lib")

using namespace std;

int main()
{
	WSADATA wsaData;

	SOCKET ServerSocket;
	fd_set temp_fdset;
	fd_set read_fdset;
	sockaddr_in ServerSocketAddr;
	sockaddr_in ClientSockAddr;

	char Buffer[1024];

	int RecvBytes;
	int addr_len;

	unsigned int i = 0;
	unsigned int currentfd_num = 0;


	//setup
	WSAStartup(MAKEWORD(2, 2), &wsaData);
	ServerSocket = socket(AF_INET, SOCK_STREAM, 0);

	memset(&ServerSocketAddr, 0, sizeof(ServerSocketAddr));

	ServerSocketAddr.sin_addr.S_un.S_addr = INADDR_ANY;
	ServerSocketAddr.sin_family = PF_INET;
	ServerSocketAddr.sin_port = htons(7476);

	bind(ServerSocket, reinterpret_cast<sockaddr*>(&ServerSocketAddr), sizeof(ServerSocketAddr));

	listen(ServerSocket, 0);
	
	FD_ZERO(&read_fdset);
	FD_SET(ServerSocket, &read_fdset);

	cout << "now Listenning..." << endl;

	while (1)
	{
		//select 함수가 호출완료되면, 변화한 fd정보 이외의 것은 초기화된다.
		//따라서 기존의 fd_set 데이터를 temp_fds에 저장해야한다. (최초에는 빈 fd_set값이 저장된다)
		temp_fdset = read_fdset;
		
		// 별다른 타임아웃이 없으므로, 
		//select 함수로 입력이 오기전까지 Blocking되어 대기한다.
		currentfd_num = select(0, &temp_fdset, NULL, NULL, NULL);

		for (i = 0; i <= temp_fdset.fd_count; ++i)
		{
			SOCKET currentSocket = temp_fdset.fd_array[i];

			if (FD_ISSET(currentSocket, &temp_fdset))
			{
				//연결들어옴
				if (currentSocket == ServerSocket)
				{
					addr_len = sizeof(sockaddr_in);
					cout << "new connection arrival" << endl;

					SOCKET clientSocket = accept(ServerSocket, reinterpret_cast<sockaddr*>(&ClientSockAddr), &addr_len);

					// 연결온 클라이언트 소켓정보를 read_fdset에 추가
					FD_SET(clientSocket, &read_fdset);

				}
				//기존에 연결된 소켓에서 메시지 받을때
				else
				{
					memset(Buffer, 0, 1024);
					RecvBytes = recv(currentSocket, Buffer, 1024, 0);
					if (RecvBytes <= 0)
					{	//disconnect
						cout << "Disconnected" << endl;
						closesocket(currentSocket);

						//끊긴 소켓을 read_fdset에서 제외
						FD_CLR(currentSocket, &read_fdset);
					}
					else
					{
						cout << "Recieved Message : " << Buffer << endl;
						send(currentSocket, Buffer, RecvBytes, 0);
					}

				}
				if (--currentfd_num <= 0) { break; }
			}
		}

	}





	closesocket(ServerSocket);
	WSACleanup();


	return 0;
}