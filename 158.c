// 158 - ���� �̸� �����ϱ� (rename)

#include<stdio.h>

void main(void)
{
	char *oldname = "c:\\Users\\Administrator\\file.txt";
	char *newname = "c:\\Users\\Administrator\\file_1.txt";

	if (rename(oldname, newname) != 0)
	{
		perror("���ϸ� ���� ����");
	}
	else
	{
		puts("���ϸ��� ���������� �����Ͽ����ϴ�.!");
	}
}