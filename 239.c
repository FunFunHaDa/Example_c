// 239 - ������ �ٸ� ���͸��� �̵��ϱ� (rename)

#include<stdio.h>

void main(void)
{
	char *filename = "file.txt";
	char *movefile = "c:\\temp\\file.txt";

	if (rename(filename, movefile) != 0)
	{
		perror("���� �̵� ����");
	}
	else
	{
		puts("������ �̵��Ǿ����ϴ�.");
	}
}