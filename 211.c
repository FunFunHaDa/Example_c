// 211 - �ҹ��ڸ� �빮�ڷ� ��ȯ�ϱ�

#include<stdio.h>
#include<string.h>

void main(void)
{
	char string[] = "abcdefghijklmnopqrstuvwxyz";
	unsigned i, len;

	puts(string);

	len = strlen(string);

	for (i = 0; i < len; i++)
	{
		string[i] = string[i] & 0xDF; // 0xDF --> 1101 1111
	}
	puts(string);
}