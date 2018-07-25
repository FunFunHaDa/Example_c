// 095 - 문자열에서 앞·뒤 2바이트씩 교환하기 (swab)

#include<stdio.h>
#include<stdlib.h>

void main(void)
{
	char string1[] = "1a2b3c4d5e";
	char string2[] = "..........";

	puts(string1);
	puts(string2);

	swab(string1, string2, sizeof(string1) - 1);	// 2바이트씩 교환

	puts(string1);
	puts(string2);
}