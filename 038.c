// 038 - 문자열 이해하기

#include<stdio.h>

#define ASCII_BEGIN 0
#define ASCII_END 127


main()
{
	int i;

	for (i = ASCII_BEGIN; i <= ASCII_END; i++)
	{
		printf("ASCII 코드 (%3d), 문자 = %c \n", i, i);	
	}
}