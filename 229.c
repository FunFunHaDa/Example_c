// 229 - 문자열의 대한 임시 저장소 만들기 (strdup)

#include<stdio.h>
#include<string.h>
#include<malloc.h>

void main(void)
{
	char buff[] = "문자열 복제하기";
	char *dup;

	dup = strdup(buff);
	if (dup)
	{
		strcpy(buff, "다른 문자열");
		puts(buff);
		puts(dup);
		free(dup);
	}
}