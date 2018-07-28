// 137 - 파일에 한 문자 쓰기 (fputc)

#include<stdio.h>

void main(void)
{
	FILE * fp;

	fp = fopen("C:\\Users\\Administrator\\file.txt", "w+");
	
	if (fp == NULL)
	{
		puts("파일을 생성할 수 없습니다.");
	}
	else
	{
		fputc('A', fp);
		puts("문자'A'를 파일에 저장하였습니다.");
		fclose(fp);
	}
}