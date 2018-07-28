// 131 - 포인터의 포인터를 함수에서 사용하기

#include<stdio.h>

void print(char **ppanimal);

void main(void)
{
	char *animal[3];

	animal[0] = "호랑이";
	animal[1] = "사자";
	animal[2] = "토끼";

	print(animal);
}

void print(char **ppanimal)
{
	puts(ppanimal[0]);
	puts(ppanimal[1]);
	puts(ppanimal[2]);
}