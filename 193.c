// 193 - ��ũ�� ��� �����ϱ� 1

#include<stdio.h>

#define max(x,y) x>y?x:y
#define min(x,y) x<y?x:y

void main(void)
{
	printf("�ִ�:%d \n", max(5, 3));
	printf("�ּҰ�:%d \n", min(5, 3));
	printf("�ִ�:%g \n", max(3.5, 4.4));
	printf("�ּҰ�:%g \n", min(3.5, 4.4));
}