// 068 - ���ڿ��� �����ڷ� �и��ϱ� 1 (strtok)

#include<stdio.h>
#include<string.h>

#define TOKEN " "

void main(void)
{
	char string[100];
	char * token;
	int i;

	puts("���ڿ��� �Է��� �� EnterŰ�� ġ����!");
	gets(string);

	token = strtok(string, TOKEN);

	while (token != NULL)
	{
		puts(token);
		token = strtok(NULL, TOKEN);
	}

}