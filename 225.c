// 225 - ���ڿ��� �¿� Ư�� ���ڵ� �����ϱ� (strspn, strcspn)

#include<stdio.h>
#include<string.h>

void main(void)
{
	char string[] = " .;;abc;;. ";
	char *sep = " .,;";
	int nIndex1, nIndex2;

	nIndex1 = strspn(string, sep);				// ��ġ���� �ʴ� ù ��° ������ �ε����� ���Ѵ�., 4
	nIndex2 = strcspn(&string[nIndex1], sep);	// 3
	(&string[nIndex1])[nIndex2] = 0;			// 4��ġ�κ��� �ε��� 3��ŭ�� ��ġ�� NULL ���� ����
	printf("%s \n", &string[nIndex1]);
}