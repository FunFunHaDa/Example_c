// 153 - 파일의 끝에 도달했는지 검사하기 (feof)

#include<stdio.h>

void main(void)
{
	FILE *fp;
	int ch;

	fp = fopen("C:\\Users\\Administrator\\file.txt", "r");

	if (fp == NULL)
	{
		puts("파일을 생성할 수 없습니다.");
	}
	else
	{
		while (!feof(fp)) // 문자가 존재시 0을 반환
		{
			ch = fgetc(fp);
			printf("읽은 문자:%c \n", ch);
		}
		fclose(fp);
	}
}