// 172 - ��¥ �� �ð��� ���ڿ��� ��ȯ�ϱ�

#include<stdio.h>
#include<time.h>

void main(void)
{
	time_t now;
	time(&now);
	printf("���� ��¥ �� �ð�:%s", ctime(&now));
}