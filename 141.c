// 141 - 파일에 형식화된 문자열 쓰기 (fprintf)

#include<stdio.h>

void main(void)
{
	FILE *fp;
	int i = 12345;

	fp = fopen("C:\\Users\\Administrator\\file.txt", "w+");

	if (fp == NULL)
	{
		puts("파일을 생성할 수 없습니다.");
	}
	else
	{
		fprintf(fp, "%d", i);
		fclose(fp);
	}
}