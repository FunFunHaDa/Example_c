// 252 - 5초간 지연하는 함수 구현하기 (clock)

#include<stdio.h>
#include<time.h>

void sleep(int sec);

void main(void)
{
	time_t n1, n2;	

	time(&n1);	// 현재 시간
	sleep(5);
	time(&n2);	// 5 초후

	printf("%g초가 지연되었습니다. \n", difftime(n2, n1));
}

void sleep(int sec)
{
	clock_t ct;
	int i = 0;
	ct = clock();
	while (ct + CLK_TCK*sec > clock());
}