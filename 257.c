// 257 - 오늘의 요일 구하기 
#include<stdio.h>
#include<time.h>

void main(void)
{
	time_t now;
	struct tm t;
	char buff[100];

	now = time(NULL);
	t = *localtime(&now);	// 지정된 요일 출력 (0)일요일 
	strftime(buff, sizeof(buff), "요일:%A", &t);
	puts(buff);
	strftime(buff, sizeof(buff), "요일:%a", &t);
	puts(buff);
	printf("%d \n", t.tm_wday);
}