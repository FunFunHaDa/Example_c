// 042 - ��(NULL) ���� �����ϱ�

#include<stdio.h>

int length(char * pstr);

main()
{
	int len = length("abcde");
	printf(" ���� = %d\n", len);
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