// 106 - 포인터 사용하기

#include<stdio.h>

void main(void)
{
	char *p_char;
	short *p_short;
	int	*p_int;
	long *p_long;
	float *p_float;
	double *p_double;

	printf("문자형의 크기 : %d 바이트 \n", sizeof(char));
	printf("문자형의 크기 : %d 바이트 \n", sizeof(short));
	printf("문자형의 크기 : %d 바이트 \n", sizeof(int));
	printf("문자형의 크기 : %d 바이트 \n", sizeof(long));
	printf("문자형의 크기 : %d 바이트 \n", sizeof(float));
	printf("문자형의 크기 : %d 바이트 \n", sizeof(double));

	printf("문자형 포인터의 크기 : %d 바이트 \n", sizeof(p_char));
	printf("문자형 포인터의 크기 : %d 바이트 \n", sizeof(p_short));
	printf("문자형 포인터의 크기 : %d 바이트 \n", sizeof(p_int));
	printf("문자형 포인터의 크기 : %d 바이트 \n", sizeof(p_long));
	printf("문자형 포인터의 크기 : %d 바이트 \n", sizeof(p_float));
	printf("문자형 포인터의 크기 : %d 바이트 \n", sizeof(p_double));
}