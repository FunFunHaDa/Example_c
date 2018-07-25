// 102 -  메모리 이동하기 (memmove)

#include<stdio.h>
#include<string.h>

char s1[20] = "1234567890";
char s2[20] = "1234567890";

void main(void)
{
	puts(s1);
	memcpy(s1 + 4, s1 + 2, 5); // 0034567000(5) --> 0000345670
	puts(s1);

	puts(s2);
	memmove(s2 + 4, s2 + 2, 5);
	puts(s2);
}