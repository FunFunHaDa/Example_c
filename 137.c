// 137 - ���Ͽ� �� ���� ���� (fputc)

#include<stdio.h>

void main(void)
{
	FILE * fp;

	fp = fopen("C:\\Users\\Administrator\\file.txt", "w+");
	
	if (fp == NULL)
	{
		puts("������ ������ �� �����ϴ�.");
	}
	else
	{
		fputc('A', fp);
		puts("����'A'�� ���Ͽ� �����Ͽ����ϴ�.");
		fclose(fp);
	}
}