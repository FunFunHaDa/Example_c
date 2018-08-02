// 214 - 비트 쉬프트 연산을 사용하여 나누셈 구현하기 (>>)

#include<stdio.h>

void main(void)
{
	char value = 4;

	value = value >> 1;
	printf("value:%d \n", value);
}