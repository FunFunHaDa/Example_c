// 249 - 오늘 날짜에 임의의 날짜 더하고 빼기

#include<stdio.h>
#include<time.h>

void main(void)
{
	time_t now;
	struct tm t, tb;

	now = time(NULL);
	t = *localtime(&now);

	tb = t;

	t.tm_mon += 100; // 100개월
	t.tm_mday += 90; // 90일
	t.tm_hour += 80; // 80시간

	mktime(&t);

	printf("오늘 날짜는 %d/%d/%d %d:%d:%d입니다. \n", tb.tm_year + 1900, tb.tm_mon + 1, tb.tm_mday, tb.tm_hour, tb.tm_min, tb.tm_sec);

	printf("100개월 90일 80시간을 더한 날짜는 %d/%d/%d %d:%d:%d입니다. \n", t.tm_year + 1900, t.tm_mon + 1, t.tm_mday, t.tm_hour, t.tm_min, t.tm_sec);

	tb.tm_mon -= 100;
	tb.tm_mday -= 90;
	tb.tm_hour -= 80;

	mktime(&tb);
	printf("100개월 90일 80시간을 뺀   날짜는 %d/%d/%d %d:%d:%d입니다. \n", tb.tm_year + 1900, t.tm_mon + 1, t.tm_mday, t.tm_hour, t.tm_min, t.tm_sec);
}