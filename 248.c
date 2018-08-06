// 248 - 오늘 날짜로부터 크리스마스까지의 남은 시간 구하기 

#include<stdio.h>
#include<time.h>

void main(void)
{
	time_t now;
	struct tm t, chrismas = { 0, 0, 0, 25, 12, 2018 };
	__int64 n1, n2, nChrismas;

	now = time(NULL);
	t = *localtime(&now);

	chrismas.tm_year -= 1900;
	chrismas.tm_mon -= 1;

	n1 = mktime(&t);
	n2 = mktime(&chrismas);

	nChrismas = (n2 - n1);
	chrismas = *localtime(&nChrismas);

	printf("오늘의 날짜는 %s", ctime(&now));
	printf("크리스마스까지 남은 시간은 %d개월 %d일 %d시간 %d분 %d초입니다.\n", chrismas.tm_mon, chrismas.tm_mday, chrismas.tm_hour, chrismas.tm_min, chrismas.tm_sec);
}