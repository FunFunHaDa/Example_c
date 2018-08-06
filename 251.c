// 251 - 세계 표준 시와 국내 표준 시의 시간 차 구하기 (localtime)

#include<stdio.h>
#include<time.h>

void main(void)
{
	time_t now, n1, n2;
	struct tm t1, t2;

	time(&now);
	t1 = *localtime(&now);
	t2 = *gmtime(&now);

	n1 = mktime(&t1);
	n2 = mktime(&t2);

	printf("세계 표준 시와 대한민국의 시간 차이:%g 시간 \n", difftime(n1, n2) / 3600.);
}