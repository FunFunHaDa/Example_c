// 133 - �Լ� �����͸� �迭���� ����ϱ�

#include<stdio.h>
#include<string.h>

void main(void)
{
	int(*myfunc[3])(const char*);

	myfunc[0] = puts;
	myfunc[1] = strlen;
	myfunc[2] = myfunc[1];

	puts("��ì�̰� �� ~~");
	myfunc[0]("�޴ٸ��� �� ~~");

	printf("���ڿ��� ����: %d\n", strlen("aa"));
	printf("���ڿ��� ����: %d\n", myfunc[1]("aa"));
	printf("���ڿ��� ����: %d\n", myfunc[2]("aa"));
}