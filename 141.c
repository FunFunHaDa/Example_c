// 141 - ���Ͽ� ����ȭ�� ���ڿ� ���� (fprintf)

#include<stdio.h>

void main(void)
{
	FILE *fp;
	int i = 12345;

	fp = fopen("C:\\Users\\Administrator\\file.txt", "w+");

	if (fp == NULL)
	{
		puts("������ ������ �� �����ϴ�.");
	}
	else
	{
		fprintf(fp, "%d", i);
		fclose(fp);
	}
}