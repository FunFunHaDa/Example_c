// 103 - 메모리 채우기 (memset)

#include<stdio.h>
#include<string.h>

void main(void)
{
	char string[50] = "아름다운 우리나라 대한민국";

	puts(string);

	memset(string, (int)NULL, sizeof(string)); // memset(string, 0, sizeof(string));
	puts(string);

	memset(string, '*', sizeof(string) - 1);
	puts(string);
}