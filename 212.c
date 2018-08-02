// 212 - 비트 연산을 사용하여 변수값을 0으로 만들기

#include<stdio.h>

void main(void)
{
	int i = -5;

	printf("i = %d\n", i);

	i = i^i;

	printf("i = %d \n", i);
}