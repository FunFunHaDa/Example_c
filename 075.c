// 075 - ���ڿ��� �ߺ� �����ϱ� (strdup)

#include<stdio.h>
#include<string.h>
#include<malloc.h>

void main(void)
{
	char string[100];
	char *pstr;

	puts("���ڿ��� �Է��� �� EnterŰ�� ġ����!");
	puts("�ƹ� ���ڵ� �Է����� ������ ���α׷��� ����˴ϴ�!");

	do
	{
		gets(string);

		if (strlen(string) == 0)
			break;

		pstr = strdup(string);
		strcpy(string, "temporary stirng");

		printf("���ڿ� string : %s \n", string);
		printf("���ڿ� pstr : %s \n", pstr);

		free(pstr);
	} while (1);
}