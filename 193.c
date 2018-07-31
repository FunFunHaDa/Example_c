// 193 - 매크로 상수 정의하기 1

#include<stdio.h>

#define max(x,y) x>y?x:y
#define min(x,y) x<y?x:y

void main(void)
{
	printf("최댓값:%d \n", max(5, 3));
	printf("최소값:%d \n", min(5, 3));
	printf("최댓값:%g \n", max(3.5, 4.4));
	printf("최소값:%g \n", min(3.5, 4.4));
}