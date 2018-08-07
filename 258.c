// 258 - 오전 / 오후 표시하기

#include<stdio.h>
#include<time.h>
#include<string.h>

void main(void)
{
	time_t now;
	struct tm t;
	char buff[100], AMPM[10];

	now = time(NULL);
	t = *localtime(&now);
	strftime(buff, sizeof(buff), "%Y-%m-%d %H:%M:%S", &t);
	strftime(AMPM, sizeof(AMPM), "%p", &t);

	if (!strcmp(AMPM, "AM"))	// 수정 , 같으면 0, string1 이 string2보다 작음 -1
		strcpy(AMPM, " 오전");	
	else if (!strcmp(AMPM, "PM"))	// 수정
		strcpy(AMPM, " 오후");

	strcat(buff, AMPM);
	puts(buff);
}