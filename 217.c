// 217 - 문자열을 공백으로 분리하여 여러 개의 문자열로 만들기 (strtok)

#include<stdio.h>
#include<string.h>

void main(void)
{
	char string[] = "(a12),(b34),(c56)";
	char *token;

	token = strtok(string, "(123456),");

	while (token)
	{
		puts(token);
		token = strtok(NULL, "(123456),");
	}
}