// 255 - ������ ����� ��¥ �� ���ϱ� (localtime)

#include<stdio.h>
#include<time.h>

void main(void)
{
	time_t now;
	struct tm t;

	now = time(NULL);
	t = *localtime(&now);

	printf("������ ����ϼ�:%d \n", t.tm_yday);
}