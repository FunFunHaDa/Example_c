// 221 - 알파벳이 아닌 첫 문자의 위치 검출하기 (strspn)

#include<stdio.h>
#include<string.h>

void main(void)
{
	char * string = "it's good";
	char * find = "abcdefghijklmnopqrstuvwxyz";
	int nIndex;

	nIndex = strspn(string, find);
	printf("%d 위치에서 알파벳이 아닌 첫 문자를 찾았습니다. \n", nIndex);
}