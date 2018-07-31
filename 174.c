// 174 - 날짜 및 시간의 차이 구하기 (difftime)

#include<stdio.h>
#include<time.h>

void main(void)
{
	time_t s1, s2;
	double gop = 1;
	int i;

	time(&s1);

	for (i = 0; i < 1000000000; i++)
	{
		gop = gop * 100;
	}

	time(&s2);

	printf("경과시간 : %g 초\n", difftime(s2, s1));
}