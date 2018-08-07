// 259 - AM / PM 표시하기

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
	strftime(buff, sizeof(buff), "%Y-%m-%d %H:%M:%S ", &t);

	strftime(AMPM, sizeof(AMPM), "%p", &t);

	/*if (strcmp(AMPM, "오전"))
		strcpy(AMPM, "AM");
	else if (strcmp(AMPM, "오후"))
		strcpy(AMPM, "PM");
	*/
	strcat(buff, AMPM);

	puts(buff);
}

