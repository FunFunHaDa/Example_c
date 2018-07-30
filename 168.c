// 168 - 현재까지 경과된 초의 수 구하기 (time)

#include<stdio.h>
#include<time.h>

void main(void)
{
	time_t now;

	time(&now);
	printf("1970년 1월 1일부터 현재까지 경과된 초: %d \n", now);
}