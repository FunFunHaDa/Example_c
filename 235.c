// 235 - 텍스트 파일 쓰기 (fwrite)

#include<stdio.h>

void main(void)
{
	FILE *fp;
	char * string = "우리강산\n";

	fp = fopen("file.txt", "w+");

	if (fp != NULL)
	{
		fwrite(string, 1, strlen(string), fp);
		fwrite(string, 1, strlen(string), fp);
		fwrite(string, 1, strlen(string), fp);
		fclose(fp);
	}
}