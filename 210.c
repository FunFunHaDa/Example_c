// 210 - 2진수 문자열을 16진수 문자열로 변환하기 (strtol, itoa)

#include<stdio.h>
#include<stdlib.h>

void main(void)
{
	int radix = 16;	// 16진수
	int base = 2;	// 2진수
	char string[] = "10101011";
	char *stop;
	long value;
	char buff[100];

	value = strtol(string, &stop, base);
	itoa(value, buff, radix);
	printf("%d\n", value);
	puts(buff);
}