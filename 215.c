// 215 - ���ڿ����� Ư�� ���ڿ��� �ε��� ���ϱ� (strstr)

#include<stdio.h>
#include<string.h>

void main(void)
{
	char string[] = "This is a book";
	char * pos;

	pos = strstr(string, "book");

	if (pos)
	{
		printf("book�� %d��°���� ã�ҽ��ϴ�. \n", pos - string);
		printf("%s \n", &string[pos - string]);
	}
}