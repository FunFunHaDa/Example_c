// 245 - ����Ϸκ��� ���ñ����� ����� �� ���ϱ� (mktime)

#include<stdio.h>
#include<time.h>

#define DAYSEC (24*60*60)

void main(void)
{
	time_t n1, n2;
	struct tm t1, t2;
	double elapsed;

	t1.tm_year = 93;
	t1.tm_mon = 9 - 1; // 9��
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

	printf("FunFunHaDa�� �¾�� %.f��° �Դϴ�. \n", elapsed);
}