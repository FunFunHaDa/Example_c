// 154 - ���� �б�/���� �� ���� �˻��ϱ� (ferror)

#include<stdio.h>

void main(void)
{
	FILE *fp;
	int ch;

	fp = fopen("C:\\Users\\Administrator\\file.txt", "r");

	if (fp == NULL)
	{
		puts("������  ������ �� �����ϴ�.");
	}
	else
	{
		while (!feof(fp))
		{
			ch = fgetc(fp);
			if (ferror(fp))
			{
				puts("������ �д� �߿� ������ �߻��Ͽ����ϴ�.");
			}
			printf("���� ����:%c \n", ch);
		}
		fclose(fp);
	}
}