// 062 - ���ڿ� �����ϱ� (strcat)

#include<stdio.h>
#include<string.h>

void main(void)
{
	char string1[100];
	char string2[100];

	printf("ù ��° �ܾ �Է��ϼ���!\n");
	gets(string1);

	printf("�� ��° �ܾ �Է��ϼ���!\n");
	gets(string2);

	strcat(string1, string2);

	puts(string1);
}