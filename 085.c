// 085 - 정수를 문자열로 변환하기 3 (_ultoa)

#include<stdio.h>
#include<stdlib.h>

void main(vodi)
{
	unsigned value;
	char string[100];
	int radix;

	radix = 16; // 16진수

	value = 34567;
	_ultoa(value, string, radix);
	printf("변환된 문자열은 %s입니다. \n", string);

	value = 1234567890;
	_ultoa(value, string, radix);
	printf("변환된 문자열은 %s입니다. \n", string);
}