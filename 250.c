// ũ���������� ���� ���ϱ�

#include<stdio.h>
#include<time.h>

void main(void)
{
	struct tm chrismas = { 0, 0, 0, 25, 12 - 1, 2020 - 1900 };
	char *wday[] = { "��", "��", "ȭ", "��", "��", "��", "��" };
	char buff[100];

	mktime(&chrismas);

	strftime(buff, sizeof(buff), "2020�� 12�� 25���� %A�Դϴ�.", &chrismas);

	puts(buff);
	printf("2020�� 12�� 25���� %s�����Դϴ�. \n", wday[chrismas.tm_wday]);
}