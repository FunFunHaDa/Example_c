// 160 - ���� �����ϱ� (remove)

#include<stdio.h>

void main(void)
{
	char *filename = "exam.txt";
	
	if (remove(filename))
	{
		perror("���� ���� ����");
	}
	else
	{
		puts("������ ���������� �����Ͽ����ϴ�!");
	}
}

