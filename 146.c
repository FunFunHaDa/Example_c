// 146 - ���� �����͸� ó������ �̵��ϱ� 2 (rewind)

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
		printf("���� �������� ��ġ:%d \n", ftell(fp));
		fputs("abcde", fp);
		printf("���� �������� ��ġ:%d \n", ftell(fp));
		rewind(fp);
		printf("���� �������� ��ġ:%d \n", ftell(fp));
		fclose(fp);
	}
}