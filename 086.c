// 086 - 실수를 문자열로 변환하기 1 (fcvt)

#include<stdio.h>
#include<stdlib.h>

void main(void)
{
	double value;
	char * pstr;
	int dec, sign;

	value = 314.15926535;
	pstr = fcvt(value, 6, &dec, &sign);

	printf("변환된 문자열은 %s입니다. \n", pstr);
	printf("소수점의 위치는 %d, 부호는 %d 입니다.\n", dec, sign);

	value = -3.1415926535;
	pstr = fcvt(value, 8, &dec, &sign);

	printf("변환된 문자열은 %s입니다. \n", pstr);
	printf("소수점의 위치는 %d, 부호는 %d 입니다.\n", dec, sign);
}