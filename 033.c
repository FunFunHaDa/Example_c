// 033 - 중첩 순환문 이해하기 (for ~ continue ~ break)

#include<stdio.h>

main()
{
	int i;
	int j;

	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= 9; j++)
		{
			printf(" %d * %d = %2d \n", i, j, i*j);
		}
	}
}