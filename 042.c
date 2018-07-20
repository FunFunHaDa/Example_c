// 042 - 널(NULL) 문자 이해하기

#include<stdio.h>

int length(char * pstr);

main()
{
	int len = length("abcde");
	printf(" 길이 = %d\n", len);
}

int length(char *pstr)
{
	int len = 0;
	
	while (*pstr != NULL)
	{
		puts(pstr++);
		len++;
	}
	return len;
}