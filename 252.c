// 252 - 5�ʰ� �����ϴ� �Լ� �����ϱ� (clock)

#include<stdio.h>
#include<time.h>

void sleep(int sec);

void main(void)
{
	time_t n1, n2;	

	time(&n1);	// ���� �ð�
	sleep(5);
	time(&n2);	// 5 ����

	printf("%g�ʰ� �����Ǿ����ϴ�. \n", difftime(n2, n1));
}

void sleep(int sec)
{
	clock_t ct;
	int i = 0;
	ct = clock();
	while (ct + CLK_TCK*sec > clock());
}