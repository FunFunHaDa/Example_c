// 175 - 날짜 및 시간을 미국식으로 변환하기 (asctime)

#include<stdio.h>
#include<time.h>

void main(void)
{
	time_t now;
	struct tm t;

	now = time(NULL);
	t = *localtime(&now);

	printf("현재 날짜 및 시간: %s \n", asctime(&t));
}