// 110 - 1���� �迭 ����ϱ�

#include<stdio.h>

void main(void)
{
	char one[10] = "Koxea";
	int i = 0;

	puts(one);
	one[2] = 'r';
	puts(one);

	for (i = 0; i <= sizeof(one)/2 ; i++)
		printf("one[0] = %3d, %c \n", one[i], one[i]);
}