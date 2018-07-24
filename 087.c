// 087 - 실수를 문자열로 변환하기 2 (ecvt)

#include<stdio.h>
#include<stdlib.h>

void main(void)
{
	double value;
	char *pstr;
	int dec, sign;

	value = 3.14e10;
	pstr = ecvt(value, 3, &dec, &sign);

	printf("변환된 문자열은 %s입니다. \n", pstr);
	printf("소수점의 위치는 %d, 부호는 %d입니다. \n", dec, sign);

	value = -3.14e10;
	pstr = ecvt(value, 3, &dec, &sign);

	printf("변환된 문자열은 %s입니다. \n", pstr);
	printf("소수점의 위치는 %d, 부호는 %d입니다. \n", dec, sign);
}