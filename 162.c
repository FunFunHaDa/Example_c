// 162 - ���͸� �����ϱ� (_rmdir)

#include<stdio.h>
#include<direct.h>

void main(void)
{
	char *pathname = "ccc";

	if (_rmdir(pathname) == -1)
	{
		perror("���͸� ���� ����");
	}
	else
	{
		puts("���͸��� ���������� �����Ͽ����ϴ�!");
	}
}