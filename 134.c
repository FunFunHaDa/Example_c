// 134 - 함수 포인터를 함수에서 사용하기

#include<stdio.h>
#include<string.h>

void print1(int(*X)(const char*));
void print2(int(*X[2])(const char*));

void main(void)
{
	int(*myfunc[2])(const char*);

	myfunc[0] = puts;
	myfunc[1] = strlen;

	print1(myfunc[0]);
	print2(myfunc);
}

void print1(int(*X)(const char*))
{
	X("올챙이가 쑥 ~~");
}

void print2(int(*X[2])(const char*))
{
	X[0]("뒷다릭가 쑥 ~~");
	printf("문자열의 길이: %d\n", X[1]("aa"));
}