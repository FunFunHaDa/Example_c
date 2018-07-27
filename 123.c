// 123 - 구조체 배열 포인터 사용하기

#include<stdio.h>
#include<string.h>

struct tagAddress
{
	char name[30];
	char phone[20];
	char address[100];
};

void main(void)
{
	struct tagAddress ad[3];
	struct tagAddress *pad;
	int i;

	pad = ad;

	for (i = 0; i < 3; i++)
	{
		sprintf(pad[i].name, "홍길동 %d", i);
		strcpy(pad[i].phone, "02-1234-5678");
		strcpy(pad[i].address, "서울시 양천구 목동아파트 13단지");
	}

	for (i = 0; i < 3; i++)
	{
		printf("이름:%s\n", pad[i].name);
		printf("전화:%s\n", pad[i].phone);
		printf("주소:%s\n", pad[i].address);
	}
}