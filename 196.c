// 196 - 매크로 컴파일 에러 출력하기

#include<stdio.h>

//#define COUNT 100
#if !defined COUNT
#error "COUNT MACRO is not define"
#endif

void main(void)
{
	printf("COUNT:%d\n", COUNT);
}