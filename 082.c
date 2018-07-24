// 082 - 문자열을 실수로 변환하기 2 (strtod)

#include<stdio.h>
#include<stdlib.h>

void main(void)
{
	char * string = "1.234E-10";
	char * stop;	// 변환이 되다가 멈춰진 포인터 값
	double value;

	value = strtod(string, &stop);

	printf(" %d, %d \n", stop, string);
	printf("%d 개의 문자가 변환되었습니다. \n", stop - string);
	printf("문자열 [%s]를 숫자로 변환하면 %E 입니다. \n", string, value);
}