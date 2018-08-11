// 269 - TCP/IP �����ϱ� (Visual Studio 2015)

#include<stdio.h>
#include<WinSock2.h>	// TCP/IP ���� �Լ��� ����
#pragma comment(lib, "wsock32.lib")

void main(void)
{
	SOCKET s; // ���� ��ũ���͸� ����
	WSADATA wadData;	// WSAStratup() �Լ��� ���� ��� ������ �Ӽ� ������ �˾Ƴ�
	SOCKADDR_IN sin; // ���� ����ü

	if (WSAStartup(WINSOCK_VERSION, &wadData) != 0)	// ���� ������ ����
	{
		printf("WSAStartup ����, �����ڵ� = %d \n", WSAGetLastError());
		return;
	}

	s = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);

	if (s == INVALID_SOCKET)
	{
		printf("���� ���� ����, ���� �ڵ�:%d \n", WSAGetLastError());
		WSACleanup();
		return;
	}
												  // ���� ������ ftp ������ �־�� ��
	sin.sin_family = AF_INET;					  // �ּ� ü�� ����
	sin.sin_addr.s_addr = inet_addr("127.0.0.1"); // ���� �ּ� ����
	sin.sin_port = htons(21);					  // ��Ʈ ��ȣ ����

	if (connect(s, (struct sockaddr*)&sin, sizeof(sin)) != 0)
	{
		printf("���� ����, ���� �ڵ� = %u \n", WSAGetLastError());
		closesocket(s);
		WSACleanup();
		return;
	}

	if (closesocket(s) != 0)
	{
		printf("���� ���� ����, ���� �ڵ� = %u \n", WSAGetLastError());
		return;
	}

	if (WSACleanup() != 0)	// ����
	{
		printf("WSACleanup ����, �����ڵ� = %u \n", WSAGetLastError());
		return;
	}

	puts("127.0.0.1�� 21�� ��Ʈ�� ������ �����Ͽ����ϴ�.");
}