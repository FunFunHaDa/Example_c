// 195 - 매크로 상수가 선언되었는지 검사하기

#include<stdio.h>

#define COUNT 100

#if !defined COUNT // 선언이 안된 경우
#define COUNT 90   // 선언 한다
#endif

void main(void)
{
	printf("COUNT:%d\n", COUNT);
}