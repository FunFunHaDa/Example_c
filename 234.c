// 234 - �ؽ�Ʈ ������ �� �پ� �б� (fgets)

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