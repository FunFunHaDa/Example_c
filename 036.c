// 036 - 조건 순환문 이해하기 2 (do ~ while ~ continue ~ break)

#include<stdio.h>

main()
{
	int i = 1;
	int hap = 0;

	do
	{
		hap = hap + i;
		i++;
	} while (i <= 10);

	printf(" hap = %d \n", hap);
}