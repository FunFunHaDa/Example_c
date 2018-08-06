// 크리스마스의 요일 구하기

#include<stdio.h>
#include<time.h>

void main(void)
{
	struct tm chrismas = { 0, 0, 0, 25, 12 - 1, 2020 - 1900 };
	char *wday[] = { "일", "월", "화", "수", "목", "금", "토" };
	char buff[100];

	mktime(&chrismas);

	strftime(buff, sizeof(buff), "2020년 12월 25일은 %A입니다.", &chrismas);

	puts(buff);
	printf("2020년 12월 25일은 %s요일입니다. \n", wday[chrismas.tm_wday]);
}