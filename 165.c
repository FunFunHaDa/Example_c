// 165 - 현재 작업중인 드라이브 구하기 (_getdrive)

#include<stdio.h>
#include<direct.h>

void main(void)
{
	int drive;

	drive = _getdrive();

	printf("현재 드라이브: %c \n", 'A' + drive - 1);
}