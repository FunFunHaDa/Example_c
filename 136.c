// 136 - ���� �����ϱ� (fopen)

#include<stdio.h>

void main(void)
{
	FILE *file;


	file = fopen("C:\\Users\\Administrator\\file.txt", "w");

	if (file == NULL)
	{
		puts("������ ������ �� �����ϴ�.");
	}
	else
	{
		puts("������ ���������� �����Ǿ����ϴ�.");
		fclose(file);
	}
}
