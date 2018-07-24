// 084 - 정수를 문자열로 변환하기 2 (itoa)

#include<stdio.h>
#include<stdlib.h>

void main(void)
{
	long value;
	char string[100];
	int radix;

	radix = 2;

	value = 12345;
	itoa(value, string, radix);
	printf("변환된 문자열은 %s입니다. \n", string);

	value = -12345;
	itoa(value, string, radix);
	printf("변환된 문자열은 %s입니다. \n", string);
}