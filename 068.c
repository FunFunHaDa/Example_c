// 068 - 문자열을 구분자로 분리하기 1 (strtok)

#include<stdio.h>
#include<string.h>

#define TOKEN " "

void main(void)
{
	char string[100];
	char * token;
	int i;

	puts("문자열을 입력한 후 Enter키를 치세요!");
	gets(string);

	token = strtok(string, TOKEN);

	while (token != NULL)
	{
		puts(token);
		token = strtok(NULL, TOKEN);
	}

}