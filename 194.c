// 194 - 매크로 함수 정의하기 2

#include<stdio.h>

#define x_i(x,i) printf("x%s의 값은 %d입니다. \n", #i, x##i) // #i = a로 치환 

void main(void)
{
	int xa = 3, xb = 5;

	x_i(x, a);
	x_i(x, b);
}