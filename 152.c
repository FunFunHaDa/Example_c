// 152 - ���� �ݱ� (fclose)

#include<stdio.h>

void main(void)
{
	FILE * fp;

	fp = fopen("C:\\Users\\Administrator\\file.txt", "w+");

	fputs("fclose() �Լ�", fp);
	fclose(fp);
}