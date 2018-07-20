// 040 - 메모리 이해하기

#include<stdio.h>

main()
{
	int i = 0;
	int j = 1;

	printf("값 = %d, 메모리 주소 = %p \n", i, &i);
	printf("값 = %d, 메모리 주소 = %p \n", j, &j);
}