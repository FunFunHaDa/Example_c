// 025 - ���� ������ �����ϱ� (<, >, = >=, <=, !=)

#include<stdio.h>

main()
{
	int x = 1;
	int y = 2;
	int z = 3;

	if (x == y) printf(" x�� y�� �����ϴ�. \n");
	if (x != y) printf(" x�� y�� ���� �ʽ��ϴ�. \n");
	if (x > y) printf(" x�� y���� Ů�ϴ�. \n");
	if (x < y) printf(" x�� y���� �۽��ϴ�. \n");
	if (x >= y) printf(" y�� z���� ũ�ų� �����ϴ�. \n");
	if (x <= y) printf(" y�� z���� �۰ų� �����ϴ�. \n");

}