// 234 - 텍스트 파일을 한 줄씩 읽기 (fgets)

#include<stdio.h>

void main(void)
{
	FILE *fp;
	char buff[100];


	fp = fopen("file.txt", "r");

	if (fp != NULL)
	{
		while (!feof(fp))
		{
			fgets(buff, 100, fp);
			if (feof(fp))break;
			printf(buff);
		}
	}
	fclose(fp);
}