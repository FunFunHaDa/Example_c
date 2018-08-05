// 245 - 출생일로부터 오늘까지의 경과일 수 구하기 (mktime)

#include<stdio.h>
#include<time.h>

#define DAYSEC (24*60*60)

void main(void)
{
	time_t n1, n2;
	struct tm t1, t2;
	double elapsed;

	t1.tm_year = 93;
	t1.tm_mon = 9 - 1; // 9월
	t1.tm_mday = 31;  // ?
	t1.tm_hour = 0;
	t1.tm_min = 0;
	t1.tm_sec = 0;

	n1 = time(NULL);
	t2 = *localtime(&n1);


	n1 = mktime(&t1);
	n2 = mktime(&t2);

	n2 = n2 - n1;
	elapsed = (double)(n2 / DAYSEC);

	printf("FunFunHaDa은 태어난지 %.f일째 입니다. \n", elapsed);
}