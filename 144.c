// 144 - ���� �������� ���� ��ġ ���ϱ� 1 (ftell)

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
		printf("���� �������� ��ġ:%d \n", ftell(fp)); // 0;
		fputs("abcde", fp);
		printf("���� �������� ��ġ:%d \n", ftell(fp)); // 5;
		fclose(fp);
	}
}