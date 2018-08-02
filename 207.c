// 207 - 번수의 번지 출력하기 (& 연산자)

#include<stdio.h>

void main(void)
{
	int i = 127;
	int j;

	printf("%d, %x \n", i, i);
	printf("%#x \n", &i);
	printf("%#x \n", &j);
}