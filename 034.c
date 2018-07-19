// 034 - 조건 선택문 이해하기 (switch ~ case ~ default)

#include<stdio.h>

main()
{
	int i = 5;

	switch (i)
	{
	case 1:
		printf(" i는 1입니다. ");
		break;
	case 2:
		printf(" i는 2입니다. ");
		break;
	default:
		printf(" i는 %d입니다. ", i);
		break;
	}
}