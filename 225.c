// 225 - 문자열의 좌우 특정 문자들 제거하기 (strspn, strcspn)

#include<stdio.h>
#include<string.h>

void main(void)
{
	char string[] = " .;;abc;;. ";
	char *sep = " .,;";
	int nIndex1, nIndex2;

	nIndex1 = strspn(string, sep);				// 일치하지 않는 첫 번째 문자의 인덱스를 구한다., 4
	nIndex2 = strcspn(&string[nIndex1], sep);	// 3
	(&string[nIndex1])[nIndex2] = 0;			// 4위치로부터 인덱스 3만큼의 위치에 NULL 값을 대입
	printf("%s \n", &string[nIndex1]);
}