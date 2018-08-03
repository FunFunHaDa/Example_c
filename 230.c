// 230 - 메모리를 1MB 할당하고 해제하기 (malloc, free)

#include<stdio.h>
#include<string.h>
#include<malloc.h>

void main(void)
{
	char *pbuf;

	pbuf = malloc(100 * 10000);

	if (pbuf)
	{
		memset(pbuf, 0, 100 * 10000);
		strcpy(&pbuf[0], "서울시 양천구 목동");
		puts(&pbuf[0]);
		free(pbuf);
	}
}