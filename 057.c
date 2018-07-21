// 057 - 문자열 복사하기 (strcpy)

#include<stdio.h>
#include<string.h>

#define KOREA "대한민국"

void main(void)
{
	char * string1;
	char string2[100];

	// strcpy(string1, KOREA);
	strcpy(string2, KOREA);
	strcpy(string2, "봄");
}