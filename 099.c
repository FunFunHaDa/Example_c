// 099 - �޸� ���Ҵ��ϱ� (realloc)

#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

void main(void)
{
	char * pmem = NULL;
	pmem = malloc(100);

	if (pmem == NULL)
	{
		puts("�޸𸮸� �Ҵ��� �� �����ϴ�.");
	}
	else
	{
		printf("�Ҵ�� �޸� ���̴� %d����Ʈ�Դϴ�. \n", _msize(pmem));
		pmem = realloc(pmem, 200);

		if (pmem == NULL)
		{
			puts("�޸𸮸� ���Ҵ��� �� �����ϴ�.");
		}
		else
		{
			printf("���Ҵ�� �޸� ���̴� %d����Ʈ�Դϴ�. \n", _msize(pmem));
		}
	}
}