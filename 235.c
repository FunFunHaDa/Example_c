// 235 - �ؽ�Ʈ ���� ���� (fwrite)

#include<stdio.h>

void main(void)
{
	FILE *fp;
	char * string = "�츮����\n";

	fp = fopen("file.txt", "w+");

	if (fp != NULL)
	{
		fwrite(string, 1, strlen(string), fp);
		fwrite(string, 1, strlen(string), fp);
		fwrite(string, 1, strlen(string), fp);
		fclose(fp);
	}
}