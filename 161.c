// 161 - ���͸� �����ϱ� (_mkdir)

#include<stdio.h>
#include<direct.h>

void main(void)
{
	char *pathname = "ccc";

	if (_mkdir(pathname) == -1)
	{
		perror("���͸� ���� ����");
	}
	else
	{
		puts("���͸��� ���������� �����Ͽ����ϴ�.");
	}
}