// 112 - 1차원 배열을 함수에서 사용하기

#include<stdio.h>

void print_one(char *pone);
void print_one2(char one[]);

void main(void)
{
	char one[] = "Korea";

	print_one(one);
	print_one2(one);
}

void print_one(char *pone)
{
	puts(pone);
}

void print_one2(char one[])
{
	puts(one);
}