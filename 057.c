// 057 - ���ڿ� �����ϱ� (strcpy)

#include<stdio.h>
#include<string.h>

#define KOREA "���ѹα�"

void main(void)
{
	char * string1;
	char string2[100];

	// strcpy(string1, KOREA);
	strcpy(string2, KOREA);
	strcpy(string2, "��");
}