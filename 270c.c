// 270c - TCP/IP ����/Ŭ���̾�Ʈ ���α׷� �����

#include<stdio.h>
#include<WinSock2.h>

#pragma comment(lib, "wsock32.lib")

void main(void)
{
	SOCKET s;
	WSADATA wsaData;
	struct sockaddr_in sin;// ���� ����ü
	char data[10] = "abc";

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
	sin.sin_addr.s_addr = inet_addr("127.0.0.1");
	sin.sin_port = htons(10000);
	

	if (connect(s, (struct sockaddr*)&sin, sizeof(sin)) != 0)
	{
		printf("���� ����, ���� �ڵ� = %u \n", WSAGetLastError());
		closesocket(s);
		WSACleanup();
		return;
	}

	if (send(s, data, 3, 0)<3)
	{
		printf("������ ���� ����, ���� �ڵ� = %u \n", WSAGetLastError());
		closesocket(s);
		WSACleanup();
		return;
	}
	puts("abc�� ���� ���α׷��� �����Ͽ����ϴ�.");




	if (closesocket(s) != 0)
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