// 139 - ���Ͽ� ���ڿ� ���� (fputs)

#include<stdio.h>

void main(void)
{
	FILE *fp;

	fp = fopen("C:\\Users\\Administrator\\file.txt", "w+");

	if (fp == NULL)
	{
		puts("������ ������ �� �����ϴ�.");
	}
	else
	{
		fputs("���ѹα�\n", fp);
		fclose(fp);
	}
}