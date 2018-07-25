// 100 - 메모리 복사하기 (memcpy)

#include<stdio.h>
#include<string.h>

struct tagM1
{
	int x;
	int y;
	char buffer[30];
};

void main(void)
{
	struct tagM1 x1, x2;

	x1.x = 5;
	x1.y = 10;
	strcpy(x1.buffer, "memory copy");

	memcpy(&x2, &x1, sizeof(x1));
	printf("x2.x = %d, x2.y = %d \n", x2.x, x2.y);
	puts(x2.buffer);
}