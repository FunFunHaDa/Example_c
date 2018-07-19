// 021 - 대입 연산자 이해하기(=)

#include<stdio.h>

main()
{
	int x = 1;
	int y = 2;
	int z;
	int zz;
	int yy;

	z = x + y;

	// 한글은 2 byte
	yy = printf(" 123456789\n", z);
	zz = printf(" z의 값 : %d \n", z);	
	printf(" zz의 값 : %d \n", zz);
	printf(" yy의 값 : %d \n", yy);
}