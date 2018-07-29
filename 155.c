// 155 - 파일 처리 시 발생된 에러 표시하기 (perror)

#include<stdio.h>

void main(void)
{
	FILE * fp;
	int ch;

	fp = fopen("C:\\Users\\Administrator\\Non_file.txt", "r");

	if (fp == NULL)
	{
		perror("파일 개방 에러");
	}
	else
	{
		ch = fgetc(fp);
		if (ferror(fp))
		{
			perror("파일 읽기 에러");
		}
		fclose(fp);
	}
}