// 151 - ���� �������� ���� ��ġ �����ϱ� (fsetpos)

#include<stdio.h>

void main(void)
{
	FILE *fp;
	fpos_t pos;

	fp = fopen("C:\\Users\\Administrator\\file.txt", "w+");

	fgetpos(fp, &pos);
	fputs("abcde", fp);
	fsetpos(fp, &pos);
	printf("���� �������� ��ġ: %d \n", ftell(fp));
	fclose(fp);
}