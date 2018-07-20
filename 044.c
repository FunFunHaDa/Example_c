// 044 - 공용체 이해하기

#include<stdio.h>

union FunFun
{
	int i;
	float d;
	float c;
};

main()
{
	union FunFun F;

	F.i = 0;	// 메모리 중첩
	F.d = 5.5;
	F.c = 7.7;

	printf("F.i = %d\n", F.i);
	printf("F.d = %f\n", F.d);
	printf("F.c = %f\n", F.c);
}