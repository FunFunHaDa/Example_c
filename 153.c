// 153 - ������ ���� �����ߴ��� �˻��ϱ� (feof)

#include<stdio.h>

void main(void)
{
	FILE *fp;
	int ch;

	fp = fopen("C:\\Users\\Administrator\\file.txt", "r");

	if (fp == NULL)
	{
		puts("������ ������ �� �����ϴ�.");
	}
	else
	{
		while (!feof(fp)) // ���ڰ� ����� 0�� ��ȯ
		{
			ch = fgetc(fp);
			printf("���� ����:%c \n", ch);
		}
		fclose(fp);
	}
}