// 208 - 정수값을 16진수 문자열로 변환하기(itoa)

#include<stdio.h>
#include<stdlib.h>

void main(void)
{
	char buff[100];
	int radix = 16;

	itoa(10, buff, radix);
	puts(buff);

	itoa(255, buff, radix);
	puts(buff);
}