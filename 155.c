// 155 - ���� ó�� �� �߻��� ���� ǥ���ϱ� (perror)

#include<stdio.h>

void main(void)
{
	FILE * fp;
	int ch;

	fp = fopen("C:\\Users\\Administrator\\Non_file.txt", "r");

	if (fp == NULL)
	{
		perror("���� ���� ����");
	}
	else
	{
		ch = fgetc(fp);
		if (ferror(fp))
		{
			perror("���� �б� ����");
		}
		fclose(fp);
	}
}