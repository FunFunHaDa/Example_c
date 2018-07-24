// 090 - 문자가 숫자인지 검사하기 (isdigit)

#include<stdio.h>
#include<ctype.h>

void main(void)
{
	char * string = "Cat 1 Car 2 Cow 3,...";
	char buffer[100] = { 0, };
	int cnt = 0;

	while (*string)
	{
		if (isdigit(*string))
		{
			buffer[cnt++] = *string;
		}
		string++;
	}
	puts(buffer);
}