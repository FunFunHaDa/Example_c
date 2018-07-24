// 092 - 문자가 대문자인지 검사하기 (isupper)

#include<stdio.h>
#include<ctype.h>

void main(void)
{
	char * string = "This is Korea!";
	char buffer[100] = { 0, };
	int cnt = 0;

	while (*string)
	{
		if (isupper(*string))
		{
			buffer[cnt++] = *string;
		}
		string++;
	}
	puts(buffer);
}