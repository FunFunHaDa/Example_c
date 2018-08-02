// 204 - 값을 입력받아 홀수/짝수 구분하기 (%)

#include<stdio.h>

void main(void)
{
	int num;

	printf("숫자를 입력하세요:");

	scanf("%d", &num);

	if (num % 2 == 1)
		printf("%d은 홀수입니다. \n", num);
	else
		printf("%d는 짝수입니다. \n", num);
}