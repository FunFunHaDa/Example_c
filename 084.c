// 084 - ������ ���ڿ��� ��ȯ�ϱ� 2 (itoa)

#include<stdio.h>
#include<stdlib.h>

void main(void)
{
	long value;
	char string[100];
	int radix;

	radix = 2;

	value = 12345;
	itoa(value, string, radix);
	printf("��ȯ�� ���ڿ��� %s�Դϴ�. \n", string);

	value = -12345;
	itoa(value, string, radix);
	printf("��ȯ�� ���ڿ��� %s�Դϴ�. \n", string);
}