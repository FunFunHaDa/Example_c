// 159 - ���� �Ӽ� �����ϱ� (_chmod)

#include<stdio.h>
#include<io.h>
#include<sys/stat.h>

void main(void)
{
	char *filename = "c:\\Users\\Administrator\\file_1.txt";

	if (_chmod(filename, _S_IREAD) != 0)	// �б� ����
	{
		perror("���� �Ӽ� ���� ����");
	}
	else
	{
		puts("������ �Ӽ��� ���������� �����Ͽ����ϴ�!");
	}
}