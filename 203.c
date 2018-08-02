// 203 - 삼각형 출력하기 (for)

#include<stdio.h>

void main(void)
{
	int i, j;

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}