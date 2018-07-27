// 128 - void형 포인터 사용하기

#include<stdio.h>

void main(void)
{
	int i;
	double d = 3.14;

	int *pi;
	double *pd;
	void *pv;

	pi = &i;
	pd = &d;
	pi = &d;	// waring
	pv = &i;
	pv = &d;

	printf("실수 값d : %f\n", *(double*)pv);
}