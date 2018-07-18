// 015 - 문자열형 변수 이해하기 (char*)

#include<stdio.h>

main()
{
	char str[] = "대한민국";
	char *j = "I love Korea";

	printf(" 문자열형 변수 str의 값은 %s \n", str);
	printf(" 문자열형 상수 j의 값은 %s \n", j);
}