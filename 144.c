// 144 - 파일 포인터의 현재 위치 구하기 1 (ftell)

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
		printf("파일 포인터의 위치:%d \n", ftell(fp)); // 0;
		fputs("abcde", fp);
		printf("파일 포인터의 위치:%d \n", ftell(fp)); // 5;
		fclose(fp);
	}
}