// 038 - ���ڿ� �����ϱ�

#include<stdio.h>

#define ASCII_BEGIN 0
#define ASCII_END 127


main()
{
	int i;

	for (i = ASCII_BEGIN; i <= ASCII_END; i++)
	{
		printf("ASCII �ڵ� (%3d), ���� = %c \n", i, i);	
	}
}