// 094 - 문자가 공백, 탭문자 또는 개행문자인지 검사하기 (isspace)

#include<stdio.h>
#include<ctype.h>

void main(void)
{
	char * string = "This is Korea! \t\n";
	int cnt = 0;

	while (*string)
	{
		if (isspace(*string))
		{
			cnt++;
		}
		string++;
	}

	puts("This is Korea! \\t\\n");
	puts("    1  2      34 5");
	printf("공백, 탭 그리고 개행문자의 수는 %d입니다.\n", cnt);
}