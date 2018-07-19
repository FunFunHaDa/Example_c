// 027 - 조건 연산자 이해하기 (?:)

#include<stdio.h>

main()
{
	int x = 1;
	int y = 2;
	int max;

	max = x > y ? x : y;

	printf(" %d \n", max);
}