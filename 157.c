// 157 - ������ �����ϴ��� Ȯ���ϱ� (_access)

#include<stdio.h>
#include<io.h>

void main(void)
{
	char *path = "C:\\Users\\Administrator\\file.txt";

		if (_access(path, 0) == 0)
		{
			puts("�ش� ��ο� ������ �����մϴ�.");
		}
}