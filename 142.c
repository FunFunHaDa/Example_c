// 142 - ���Ͽ��� ����ȭ�� ���ڿ� �б� (fscanf)

#include<stdio.h>

void main(void)
{
	FILE * fp;
	int i;

	fp = fopen("C:\\Users\\Administrator\\file.txt", "r");

	if (fp == NULL)
	{
		puts("������ ������ �� �����ϴ�.");
	}
	else
	{
		fscanf(fp, "%d", &i);
		printf("i = %d \n", i);
		fclose(fp);
	}
}