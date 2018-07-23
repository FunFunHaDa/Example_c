// 080 - 문자열을 정수로 변환하기 4 (strtoul)

#include<stdio.h>
#include<stdlib.h>

void main(void)
{
	char * string = "11000";
	char * stop;
	int radix;
	unsigned long value;

	radix = 2;
	value = strtoul(string, &stop, radix);

	printf("%d 개의 문자가 변환되었습니다. \n", stop - string);
	printf("2진수 %s를 숫자로 변환하면 %u입니다. \n", string, value);
}