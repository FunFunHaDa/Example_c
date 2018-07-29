// 146 - 파일 포인터를 처음으로 이동하기 2 (rewind)

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
		printf("파일 포인터의 위치:%d \n", ftell(fp));
		fputs("abcde", fp);
		printf("파일 포인터의 위치:%d \n", ftell(fp));
		rewind(fp);
		printf("파일 포인터의 위치:%d \n", ftell(fp));
		fclose(fp);
	}
}