// 151 - 파일 포인터의 현재 위치 설정하기 (fsetpos)

#include<stdio.h>

void main(void)
{
	FILE *fp;
	fpos_t pos;

	fp = fopen("C:\\Users\\Administrator\\file.txt", "w+");

	fgetpos(fp, &pos);
	fputs("abcde", fp);
	fsetpos(fp, &pos);
	printf("파일 포인터의 위치: %d \n", ftell(fp));
	fclose(fp);
}