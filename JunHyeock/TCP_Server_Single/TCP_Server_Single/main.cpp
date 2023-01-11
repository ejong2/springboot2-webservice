#include <stdlib.h>
//#include <Windows.h>
#include <iostream>
#include <WinSock2.h>


#pragma comment(lib, "ws2_32.lib")

#include "mysql-connector/include/jdbc/mysql_connection.h"
#include "mysql-connector/include/jdbc/cppconn/driver.h"
#include "mysql-connector/include/jdbc/cppconn/exception.h"
#include "mysql-connector/include/jdbc/cppconn/prepared_statement.h"

#pragma comment(lib, "mysql-connector/lib64/vs14/debug/mysqlcppconn.lib")



using namespace std;

struct packet 
{
	//spawn , move = 1 , destroy
	int header = 1;
	int x = 1;
	int y = 0;
	int z = 0;
};

const string server = "127.0.0.1:3306";
const string username = "root";
const string password = "zms134";



int main()
{

	sql::Driver* driver;
	sql::Connection* con;
	sql::Statement* stmt;
	sql::PreparedStatement* pstmt;

	try
	{
	driver = get_driver_instance();
	con = driver->connect(server, username, password);
	}
	catch (sql::SQLException e)
	{
		cout << "Can't connect to Server" << endl;
		system("puase");
		exit(1);
	}

	con->setSchema("myschema");

	stmt = con->createStatement();
	stmt->execute("DROP Table IF EXISTS inventory");
	cout << "Finished dropping table (if existed)" << endl;
	stmt->execute
	("CREATE TABLE inventory(id serial PRIMARY KEY, name VARCHAR(50), quantity INTEGER);");
	cout << "Finished creating table" << endl;
	delete stmt;

	pstmt = con->prepareStatement("INSERT INTO inventory");


	WSADATA wsaData;

	SOCKET ServerSocket;
	SOCKET ClientSocket;

	sockaddr_in ServerSocketAddr;
	sockaddr_in ClientSockAddr;

	packet mypack;

	WSAStartup(MAKEWORD(2, 2), &wsaData);
	ServerSocket = socket(AF_INET, SOCK_STREAM, 0);
	memset(&ServerSocketAddr, 0, sizeof(ServerSocketAddr));

	ServerSocketAddr.sin_addr.S_un.S_addr = INADDR_ANY;
	ServerSocketAddr.sin_family = PF_INET;
	ServerSocketAddr.sin_port = htons(7476);

	bind(ServerSocket, reinterpret_cast<sockaddr*>(&ServerSocketAddr), sizeof(ServerSocketAddr));

	listen(ServerSocket, 0);

	cout << "now Listenning..." << endl;
	int ClientSockAddrLength = sizeof(ClientSockAddr);

	ClientSocket = accept(ServerSocket, reinterpret_cast<sockaddr*>(&ClientSockAddr), &ClientSockAddrLength);
	cout << "======accept======" << endl;

	//char Buffer[32] = { 0, };

	while (1)
	{
		//Buffer Á÷·ÄÈ­ ? 
		send(ClientSocket, (char*)&mypack, sizeof(mypack), 0);
		cout << "Send Once" << endl;
	}

	return 0;
}