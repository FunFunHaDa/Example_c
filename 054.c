// 054 - 정수값 출력하기 (print)

#include<stdio.h>

void main(void)
{
	int i = 100;
	int j = 1000;
	int k = 12345;

	printf("[%d]\n", i);
	printf("[%d]\n", j);
	printf("[%d]\n", k);

	printf("[%5d]\n", i);
	printf("[%5d]\n", i);
	printf("[%5d]\n", i);

	printf("[%10d]\n", k);
	printf("[%10d]\n", k);
	printf("[%10d]\n", k);

	printf("[%-10d]\n", k);
	printf("[%-10d]\n", k);
	printf("[%-10d]\n", k);
}