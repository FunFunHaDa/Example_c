// 035 - 조건 순환문 이해하기 1 (while ~ continue ~ break)

#include<stdio.h>

main()
{
	int i = 1;
	int hap = 0;

	while (i <= 10)
	{
		hap = hap + i;
		i++;
	}

	printf("hap = %d", hap);
}