// 233 - �ؽ�Ʈ ������ �� �پ� ���� (fopen, fputs, flcose)

#include<stdio.h>

void main(void)
{
	FILE *fp;

	fp = fopen("file.txt","w+");

	if (fp != NULL)
	{
		fputs("���ѹα�\n", fp);
		fputs("���ѹα�\n", fp);
		fputs("���ѹα�\n", fp);
		fputs("���ѹα�\n", fp);
		fputs("���ѹα�\n", fp);
		fclose(fp);
	}
}