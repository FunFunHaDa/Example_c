// 021 - ���� ������ �����ϱ�(=)

#include<stdio.h>

main()
{
	int x = 1;
	int y = 2;
	int z;
	int zz;
	int yy;

	z = x + y;

	// �ѱ��� 2 byte
	yy = printf(" 123456789\n", z);
	zz = printf(" z�� �� : %d \n", z);	
	printf(" zz�� �� : %d \n", zz);
	printf(" yy�� �� : %d \n", yy);
}