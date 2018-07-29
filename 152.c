// 152 - 파일 닫기 (fclose)

#include<stdio.h>

void main(void)
{
	FILE * fp;

	fp = fopen("C:\\Users\\Administrator\\file.txt", "w+");

	fputs("fclose() 함수", fp);
	fclose(fp);
}