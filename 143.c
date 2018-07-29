// 143 - 파일의 버퍼 비우기 (fflush)

#include<stdio.h>

void main(void)
{
	FILE * fp;
	int i;

	fp = fopen("C:\\Users\\Administrator\\file.txt", "w+");

	if (fp == NULL)
	{
		puts("파일을 생성할 수 없습니다.");
	}
	else
	{
		fputs("대한민국", fp);
		fflush(fp);
		fclose(fp);
	}
}