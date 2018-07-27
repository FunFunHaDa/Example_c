// 127 - 공용체를 함수에서 사용하기

#include<stdio.h>

typedef union tagVariable
{
	int i;
	double d;
}VA;

void print(VA *pva);

void main(void)
{
	VA va;

	print(&va);
}

void print(VA *pva)
{
	pva->i = 5;

	printf("pva->i 공용체의 값 : %d \n", pva->i);

	pva->d = 3.14;
	printf("pva->d 공용체의 값 : %f \n", pva->d);
	printf("pva->i 공용체의 값 : %d \n", pva->i);
}