// 095 - ���ڿ����� �ա��� 2����Ʈ�� ��ȯ�ϱ� (swab)

#include<stdio.h>
#include<stdlib.h>

void main(void)
{
	char string1[] = "1a2b3c4d5e";
	char string2[] = "..........";

	puts(string1);
	puts(string2);

	swab(string1, string2, sizeof(string1) - 1);	// 2����Ʈ�� ��ȯ

	puts(string1);
	puts(string2);
}