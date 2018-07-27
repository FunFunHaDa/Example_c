// 124 - 구조체 배열을 함수에서 사용하기

#include<stdio.h>
#include<string.h>

struct tagAddress
{
	char name[30];
	char phone[20];
	char address[100];
};

void print(struct tagAddress *pad);

void main(void)
{
	struct tagAddress ad[3];
	int i;

	for (i = 0; i < 3; i++)
	{
		sprintf(ad[i].name, "홍길동 %d", i);
		strcpy(ad[i].phone, "02-1234-5678");
		strcpy(ad[i].address, "서울시 양천구 목동아파트 13단지");
	}

	print(ad);
}

void print(struct tagAddress *pad)
{
	int i;

	for (i = 0; i < 3; i++)
	{
		printf("이름:%s \n", pad[i].name);
		printf("전화:%s \n", pad[i].phone);
		printf("주소:%s \n", pad[i].address);
	}
}