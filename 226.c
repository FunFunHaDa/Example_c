// 226 - ���ڿ��� NULL�� ä��� (strset)

#include<stdio.h>
#include<string.h>

void main(Void)
{

	char buff[] = "��ȣ�� Korea�Դϴ�.";

	puts(buff);
	strset(buff, 0);
	printf("[%s]\n", buff);
}