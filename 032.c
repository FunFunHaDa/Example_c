// 032 - 중첩 조건문 이해하기 (if ~ else)

#include<stdio.h>

main()
{
	int i = 1;
	int j = 2;
	int k = 7;

	if (i == 1)
	{
		if (j == 2)
		{
			if (k == 3)
				printf("i=1, j=2, k=3입니다. ");
			else if (k == 4)
				printf("i=1, j=2, k=4입니다. ");
			else if (k == 5)
				printf("i=1, j=2, k=5입니다. ");
			else 
				printf("i=1, j=2, k=%d입니다. ", k);
		}
	}
}