// 111 - 1차원 배열의 포인터 사용하기

#include<stdio.h>
#include<string.h>

void main(void)
{
	char one[] = "Korea";
	char * pone;

	pone = one;

	puts(one);
	puts(pone);

	strcpy(pone, "Japan");

	puts(one);
	puts(pone);
}