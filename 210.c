// 210 - 2���� ���ڿ��� 16���� ���ڿ��� ��ȯ�ϱ� (strtol, itoa)

#include<stdio.h>
#include<stdlib.h>

void main(void)
{
	int radix = 16;	// 16����
	int base = 2;	// 2����
	char string[] = "10101011";
	char *stop;
	long value;
	char buff[100];

	value = strtol(string, &stop, base);
	itoa(value, buff, radix);
	printf("%d\n", value);
	puts(buff);
}