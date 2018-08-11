// 270s - TCP/IP ����/Ŭ���̾�Ʈ ���α׷� �����

#include<stdio.h>
#include<WinSock2.h>

#pragma comment(lib, "wsock32.lib")

void main(void)
{
	SOCKET s, cs;
	WSADATA wsaData;
	struct sockaddr_in sin, cli_addr; // ���� ����ü
	int size = sizeof(cli_addr);
	char data[10] = { 0, };

	if (WSAStartup(WINSOCK_VERSION, &wsaData) != 0)
	{
		printf("WSAStartup ����, ���� �ڵ� = %d \n", WSAGetLastError());
		return;
	}

	s = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);

	if (s == INVALID_SOCKET)
	{
		printf("���� ���� ����, ���� �ڵ� : %d \n", WSAGetLastError());
		WSACleanup();
		return;
	}
	sin.sin_family = AF_INET;
	sin.sin_port = htons(10000);
	sin.sin_addr.s_addr = htonl(ADDR_ANY); // ��� Ŭ���̾�Ʈ�κ��� ���� ���

	if (bind(s, (struct sockaddr*)&sin, sizeof(sin)) == SOCKET_ERROR)
	{
		printf("���ε� ����, ���� �ڵ� = %d \n", WSAGetLastError());
		closesocket(s);
		WSACleanup();
		return;
	}

	if (listen(s, SOMAXCONN) != 0)
	{
		printf("���� ��� ���� ����, ���� �ڵ� = %d \n", WSAGetLastError());
		closesocket(s);
		WSACleanup();
		return;
	}

	printf("Ŭ���̾�Ʈ�κ��� ������ ��ٸ��� �ֽ��ϴ�...\n");

	cs = accept(s, (struct sockaddr*)&cli_addr, &size);

	if (cs == INVALID_SOCKET)
	{
		printf("���� ���� ����, �����ڵ� = %d\n", WSAGetLastError());
		closesocket(s);
		WSACleanup();
		return;
	}

	puts("Ŭ���̾�Ʈ�� ���� �Ǿ����ϴ�.");

	if (recv(cs, data, 3, 0) < 3)
	{
		printf("������ ���� ����, ���� �ڵ� = %u \n", WSAGetLastError());
		closesocket(cs);
		closesocket(s);
		WSACleanup();
		return;
	}
	
	printf("%s�� Ŭ���̾�Ʈ�κ��� ���ŵǾ����ϴ�. \n", data);

	if (closesocket(cs) != 0 || closesocket(s) != 0)
	{
		printf("���� ���� ����, ���� �ڵ� = %u \n", WSAGetLastError());
		WSACleanup();
		return;
	}

	if (WSACleanup() != 0)
	{
		printf("WSACleanup ����, ���� �ڵ� = %u \n", WSAGetLastError());
		return;
	}




}