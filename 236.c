// 236 - 텍스트 파일 읽기 (fread)

#include<stdio.h>

void main(void)
{
	FILE * fp;
	char buff[100] = { 0, };
	int len;

	fp = fopen("file.txt", "r");

	if (fp != NULL)
	{
		while (!feof(fp))
		{
			len = fread(buff, 1, 9, fp);
			if (ferror(fp) || len < 9) break;
			printf("read:%d, %s", len, buff);
		}
		fclose(fp);
	}
}