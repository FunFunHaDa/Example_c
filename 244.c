// 244 - ��/��/�� ��:��:�� ����ϱ� (time, localtime)

#include<stdio.h>
#include<time.h>

void main(void)
{
	FILE *fp;
	char buff[200];
	time_t now;
	struct tm t;

	fp = fopen("file.txt", "w+");

	if (fp == NULL)
	{
		perror("���� ���� ���� ����");
		_fcloseall();
		return;
	}

	now = time(NULL);
	t = *localtime(&now);
	sprintf(buff, "%d/%d/%d %d:%d:%d", t.tm_year + 1900, t.tm_mon + 1, t.tm_mday, t.tm_hour, t.tm_min, t.tm_sec);

	fputs(buff, fp);
	_fcloseall();

	puts(buff);
	puts("�ð��� file.txt�� �����Ͽ����ϴ�.");
}