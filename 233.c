// 233 - 텍스트 파일을 한 줄씩 쓰기 (fopen, fputs, flcose)

#include<stdio.h>

void main(void)
{
	FILE *fp;

	fp = fopen("file.txt","w+");

	if (fp != NULL)
	{
		fputs("대한민국\n", fp);
		fputs("대한민국\n", fp);
		fputs("대한민국\n", fp);
		fputs("대한민국\n", fp);
		fputs("대한민국\n", fp);
		fclose(fp);
	}
}