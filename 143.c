// 143 - ������ ���� ���� (fflush)

#include<stdio.h>

void main(void)
{
	FILE * fp;
	int i;

	fp = fopen("C:\\Users\\Administrator\\file.txt", "w+");

	if (fp == NULL)
	{
		puts("������ ������ �� �����ϴ�.");
	}
	else
	{
		fputs("���ѹα�", fp);
		fflush(fp);
		fclose(fp);
	}
}