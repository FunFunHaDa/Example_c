// 228 - ���ڿ����� Ư�� ��ġ�� ���� ��ü�ϱ� (strnset)
#include<stdio.h>
#include<string.h>

void main(void)
{
	char string[] = "��ȣ�� Korea�Դϴ�.";
	char *pstr;

	pstr = strstr(string, "Korea");
	if (pstr)
	{
		strnset(pstr, '*', 5);
	}
	puts(string);
}
