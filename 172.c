// 172 - 날짜 및 시간을 문자열로 변환하기

#include<stdio.h>
#include<time.h>

void main(void)
{
	time_t now;
	time(&now);
	printf("현재 날짜 및 시간:%s", ctime(&now));
}