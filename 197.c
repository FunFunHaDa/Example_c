// 197 - 매크로 상수의 값을 검사하기

#include<stdio.h>

// #define COUNT 10
#define COUNT 100

#if COUNT != 100
#error "COUNT != 100"
#endif

void main(void)
{
	printf("COUNT:%d \n", COUNT);
}