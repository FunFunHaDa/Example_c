// 150 - ���� �������� ���� ��ġ ���ϱ� 2 (fgetpos)

#include<stdio.h>

void main(void)
{
	FILE *fp;
	fpos_t pos;

	fp = fopen("C:\\Users\\Administrator\\file.txt", "w+");

	if (fp == NULL)
	{
		puts("������ ������ �� �����ϴ�.");
	}
	else
	{
		fputs("abcde", fp);
		fgetpos(fp, &pos);
		printf("���� �������� ��ġ:%d \n", pos);
		fclose(fp);
	}
}