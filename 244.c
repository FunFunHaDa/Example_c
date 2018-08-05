// 244 - 연/월/일 시:분:초 출력하기 (time, localtime)

#include<stdio.h>
#include<time.h>

void main(void)
{
	FILE *fp;
	char buff[200];
	time_t now;
	struct tm t;

	fp = fopen("file.txt", "w+");

	if (fp == NULL)
	{
		perror("파일 쓰기 개방 에러");
		_fcloseall();
		return;
	}

	now = time(NULL);
	t = *localtime(&now);
	sprintf(buff, "%d/%d/%d %d:%d:%d", t.tm_year + 1900, t.tm_mon + 1, t.tm_mday, t.tm_hour, t.tm_min, t.tm_sec);

	fputs(buff, fp);
	_fcloseall();

	puts(buff);
	puts("시간을 file.txt에 저장하였습니다.");
}