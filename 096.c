// 096 - �޸� �Ҵ��ϱ� (malloc)

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<malloc.h>

#define MEMORY "MEMORY"

void main(void)
{
	char * pmem;

	pmem = malloc(100);

	if (pmem == NULL)
	{
		puts("�޸𸮸� �Ҵ��� �� �����ϴ�.");
	}
	else
	{
		strcpy(pmem, MEMORY);
		puts(pmem);

		free(pmem);
	}
}