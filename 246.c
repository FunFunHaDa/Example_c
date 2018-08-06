// 246 - 각 달의 마지막 날짜 구하기 (mktime)

#include<stdio.h>
#include<time.h>

#define DAYSEC 86400L

void main(void)
{
	int i;
	time_t now;
	struct tm t1, t2;
	int n1, n2, last;

	now = time(NULL);
	t1 = *localtime(&now);
	t1.tm_mday = 1;
	t2 = t1;

	for (i = 0; i <= 11; i++)
	{
		t1.tm_mon = i;
		t2.tm_mon = i + 1;
		n1 = mktime(&t1);
		n2 = mktime(&t2);
		last = (n2 - n1) / DAYSEC;
		printf("%d년 %2d월의 마지막 날짜는 %d일 입니다. \n", t1.tm_year + 1900, t1.tm_mon + 1, last);
	}
}