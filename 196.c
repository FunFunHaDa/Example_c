// 196 - ��ũ�� ������ ���� ����ϱ�

#include<stdio.h>

//#define COUNT 100
#if !defined COUNT
#error "COUNT MACRO is not define"
#endif

void main(void)
{
	printf("COUNT:%d\n", COUNT);
}