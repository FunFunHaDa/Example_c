// 085 - ������ ���ڿ��� ��ȯ�ϱ� 3 (_ultoa)

#include<stdio.h>
#include<stdlib.h>

void main(vodi)
{
	unsigned value;
	char string[100];
	int radix;

	radix = 16; // 16����

	value = 34567;
	_ultoa(value, string, radix);
	printf("��ȯ�� ���ڿ��� %s�Դϴ�. \n", string);

	value = 1234567890;
	_ultoa(value, string, radix);
	printf("��ȯ�� ���ڿ��� %s�Դϴ�. \n", string);
}