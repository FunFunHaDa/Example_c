// 145 - ���� �����͸� ó������ �̵��ϱ� 1 (fseek)

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
		fseek(fp, 0L, SEEK_SET);	// ������ ó�� ��ġ�� ����
		printf("���� �������� ��ġ:%d \n", ftell(fp)); 
		fclose(fp);
	}
}