// 149 - 파일의 길이 구하기 (fseek)

#include<stdio.h>

void main(void)
{
	FILE *fp;


	fp = fopen("C:\\Users\\Administrator\\file.txt", "r");

	if (fp == NULL)
	{
		puts("파일을 생성할 수 없습니다.");
	}
	else
	{
		fseek(fp, 0L, SEEK_END);
		printf("파일의 길이:%d \n", ftell(fp));
		fclose(fp);
	}

}