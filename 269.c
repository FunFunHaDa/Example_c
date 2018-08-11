// 269 - TCP/IP 이해하기 (Visual Studio 2015)

#include<stdio.h>
#include<WinSock2.h>	// TCP/IP 관련 함수들 존재
#pragma comment(lib, "wsock32.lib")

void main(void)
{
	SOCKET s; // 소켓 디스크립터를 정의
	WSADATA wadData;	// WSAStratup() 함수가 현재 사용 가능한 속성 정보를 알아냄
	SOCKADDR_IN sin; // 소켓 구조체

	if (WSAStartup(WINSOCK_VERSION, &wadData) != 0)	// 소켓 버전을 설정
	{
		printf("WSAStartup 실패, 에러코드 = %d \n", WSAGetLastError());
		return;
	}

	s = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);

	if (s == INVALID_SOCKET)
	{
		printf("소켓 생성 실패, 에러 코드:%d \n", WSAGetLastError());
		WSACleanup();
		return;
	}
												  // 현재 예제는 ftp 서버가 있어야 함
	sin.sin_family = AF_INET;					  // 주소 체계 설정
	sin.sin_addr.s_addr = inet_addr("127.0.0.1"); // 접속 주소 설정
	sin.sin_port = htons(21);					  // 포트 번호 설정

	if (connect(s, (struct sockaddr*)&sin, sizeof(sin)) != 0)
	{
		printf("접속 실패, 에러 코드 = %u \n", WSAGetLastError());
		closesocket(s);
		WSACleanup();
		return;
	}

	if (closesocket(s) != 0)
	{
		printf("소켓 제거 실패, 에러 코드 = %u \n", WSAGetLastError());
		return;
	}

	if (WSACleanup() != 0)	// 해제
	{
		printf("WSACleanup 실패, 에러코드 = %u \n", WSAGetLastError());
		return;
	}

	puts("127.0.0.1의 21번 포트에 접속을 성공하였습니다.");
}