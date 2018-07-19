// 028 - 쉼표 연산자 이해하기(,)

#include<stdio.h>

main()
{
	int x = 1, y = 2, max;

	max = x > y ? x : y;
	printf(" max = %d, x = %d, y = %d", max, x, y);
}