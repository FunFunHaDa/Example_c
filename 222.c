// 222 - 문자열에서 숫자가 시작되는 위치 추출하기 (strspn)

#include<stdio.h>
#include<string.h>

void main(void)
{
	char string[] = "사자 3마리, 코끼리 5마리, 사슴 4마리";
	char *find = "0123456789";
	int index;

	index = strcspn(string, find);

	printf("%d 위치에서 일치되는 첫 숫자를 발견하였습니다. \n", index);
}