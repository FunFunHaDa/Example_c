// 119 - 구조체 사용하기

#include<stdio.h>
#include<string.h>

struct tatAddress
{
	char name[30];
	char phone[20];
	char address[100];
};

void main(void)
{
	struct tatAddress ad;

	strcpy(ad.name, "홍길동");
	strcpy(ad.phone, "02-1234-5678");
	strcpy(ad.address, "서울시 양천구 목동아파트 13단지");

	printf("이름 : %s \n", ad.name);
	printf("전화 : %s \n", ad.phone);
	printf("주소 : %s \n", ad.address);
}