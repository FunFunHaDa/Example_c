// 226 - 문자열을 NULL로 채우기 (strset)

#include<stdio.h>
#include<string.h>

void main(Void)
{

	char buff[] = "암호는 Korea입니다.";

	puts(buff);
	strset(buff, 0);
	printf("[%s]\n", buff);
}