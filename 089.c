// 089 - 문자가 알파벳인지 검사하기 (isalpha)

#include<stdio.h>
#include<ctype.h>

void main(void)
{
	char * string = "Cat 1 Car 2 Cow 3,...";
	char buffer[100] = { 0, };
	int cnt = 0;

	while (*string)
	{
		if (isalpha(*string)) // 알파벳일때만 참임
		{
			buffer[cnt++] = *string;
		}
		string++;
	}

	puts(buffer);
}