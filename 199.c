// 199 - 경고 에러를 발생시키지 않기

#include<stdio.h>

#pragma warning(disable:4101)
#pragma message("(Warning) Hello World ~~")

void main(void)
{
	int i;
}