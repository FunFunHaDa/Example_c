// 260 - ���ڿ��� �� ��¥�� time_t �������� ��ȯ�ϱ� (atoi, mktime)

#include<stdio.h>
#include<time.h>
#include<stdlib.h>

void main(void)
{
	char data[] = "2020-06-23";
				 //0123456789
	time_t now;
	struct tm t = { 0, };

	t.tm_mday = atoi(&data[8]);			data[7] = 0;
	t.tm_mon = atoi(&data[5]) - 1;		data[4] = 0;
	t.tm_year = atoi(&data[0]) - 1900;


	now = mktime(&t);
	printf("2020-06-23�� time_t�� ��ȯ�ϸ� %d�Դϴ�. \n", now);
}