// 195 - ��ũ�� ����� ����Ǿ����� �˻��ϱ�

#include<stdio.h>

#define COUNT 100

#if !defined COUNT // ������ �ȵ� ���
#define COUNT 90   // ���� �Ѵ�
#endif

void main(void)
{
	printf("COUNT:%d\n", COUNT);
}