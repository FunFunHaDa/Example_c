// 139 - 파일에 문자열 쓰기 (fputs)

#include<stdio.h>

void main(void)
{
	FILE *fp;

	fp = fopen("C:\\Users\\Administrator\\file.txt", "w+");

	if (fp == NULL)
	{
		puts("파일을 생성할 수 없습니다.");
	}
	else
	{
		fputs("대한민국\n", fp);
		fclose(fp);
	}
}