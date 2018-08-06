// 247 - D - Day 구하기 (mktime)

#include<stdio.h>
#include<time.h>

#define DAYSEC 86400L

void main(void)
{
	time_t now;
	struct tm t, dday = { 0, 0, 0, 1, 7, 2020 }; // 2020년 7월 1일
	int n1, n2, nDday;

	now = time(NULL);
	t = *localtime(&now);

	dday.tm_year -= 1900;
	dday.tm_mon -= 1;

	t.tm_hour = 0;
	t.tm_min = 0;
	t.tm_sec = 0;

	n1 = mktime(&t);
	n2 = mktime(&dday);

	nDday = (n2 - n1) / DAYSEC;

	printf("오늘의 날짜는 %s", ctime(&now));
	printf("잘될 날이 :%d일 남았습니다. (%d/%d/%d)\n", nDday, dday.tm_year + 1900, dday.tm_mon + 1, dday.tm_mday);
}