// 248 - ���� ��¥�κ��� ũ�������������� ���� �ð� ���ϱ� 

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

	printf("������ ��¥�� %s", ctime(&now));
	printf("ũ������������ ���� �ð��� %d���� %d�� %d�ð� %d�� %d���Դϴ�.\n", chrismas.tm_mon, chrismas.tm_mday, chrismas.tm_hour, chrismas.tm_min, chrismas.tm_sec);
}