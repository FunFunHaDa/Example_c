// 270s - TCP/IP 서버/클라이언트 프로그램 만들기

#include<stdio.h>
#include<WinSock2.h>

#pragma comment(lib, "wsock32.lib")

void main(void)
{
	SOCKET s, cs;
	WSADATA wsaData;
	struct sockaddr_in sin, cli_addr; // 소켓 구조체
	int size = sizeof(cli_addr);
	char data[10] = { 0, };

	if (WSAStartup(WINSOCK_VERSION, &wsaData) != 0)
	{
		printf("WSAStartup 실패, 에러 코드 = %d \n", WSAGetLastError());
		return;
	}

	s = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);

	if (s == INVALID_SOCKET)
	{
		printf("소켓 생성 실패, 에러 코드 : %d \n", WSAGetLastError());
		WSACleanup();
		return;
	}
	sin.sin_family = AF_INET;
	sin.sin_port = htons(10000);
	sin.sin_addr.s_addr = htonl(ADDR_ANY); // 모든 클라이언트로부터 접속 허용

	if (bind(s, (struct sockaddr*)&sin, sizeof(sin)) == SOCKET_ERROR)
	{
		printf("바인드 실패, 에러 코드 = %d \n", WSAGetLastError());
		closesocket(s);
		WSACleanup();
		return;
	}

	if (listen(s, SOMAXCONN) != 0)
	{
		printf("리슨 모드 설정 실패, 에러 코드 = %d \n", WSAGetLastError());
		closesocket(s);
		WSACleanup();
		return;
	}

	printf("클라이언트로부터 접속을 기다리고 있습니다...\n");

	cs = accept(s, (struct sockaddr*)&cli_addr, &size);

	if (cs == INVALID_SOCKET)
	{
		printf("접속 승인 실패, 에러코드 = %d\n", WSAGetLastError());
		closesocket(s);
		WSACleanup();
		return;
	}

	puts("클라이언트와 연결 되었습니다.");

	if (recv(cs, data, 3, 0) < 3)
	{
		printf("데이터 수신 실패, 에러 코드 = %u \n", WSAGetLastError());
		closesocket(cs);
		closesocket(s);
		WSACleanup();
		return;
	}
	
	printf("%s가 클라이언트로부터 수신되었습니다. \n", data);

	if (closesocket(cs) != 0 || closesocket(s) != 0)
	{
		printf("소켓 제거 실패, 에러 코드 = %u \n", WSAGetLastError());
		WSACleanup();
		return;
	}

	if (WSACleanup() != 0)
	{
		printf("WSACleanup 실패, 에러 코드 = %u \n", WSAGetLastError());
		return;
	}




}