// 229 - ���ڿ��� ���� �ӽ� ����� ����� (strdup)

#include<stdio.h>
#include<string.h>
#include<malloc.h>

void main(void)
{
	char buff[] = "���ڿ� �����ϱ�";
	char *dup;

	dup = strdup(buff);
	if (dup)
	{
		strcpy(buff, "�ٸ� ���ڿ�");
		puts(buff);
		puts(dup);
		free(dup);
	}
}