// 023 - 사칙 연산자 이해하기 (+, -, *, /)

#include<stdio.h>

main()
{
	int x = 4;
	int y = 2;
	int z;

	z = x + y;
	printf(" %d \n", z);
	z = x - y;
	printf(" %d \n", z);
	z = x * y;
	printf(" %d \n", z);
	z = x / y;
	printf(" %d \n", z);
	z = (x + y) * (x - y);
	printf(" %d \n", z);
	z = (x * y) + (x / y);
	printf(" %d \n", z);
	z = x + y + 2004;
	printf(" %d \n", z);
	z = 2004 - x - y;
	printf(" %d \n", z);
}