// 189 - ���� ���ϱ� (srand, rand)

#include<stdio.h>
#include<time.h>
#include<stdlib.h>

void main(void)
{
	int i;

	srand((unsigned)time(NULL));

	for (i = 0; i < 5; i++)
	{
		printf("���� %d : %d \n", i, rand());
	}
}