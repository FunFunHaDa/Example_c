// 238 - ����  ���� �б� (fread)

#include<stdio.h>

void main(void)
{
	FILE *fp;
	char buff;

	fp = fopen("file.bin", "rb");

	if (fp != NULL)
	{
		while (!feof(fp))
		{
			fread(&buff, 1, 1, fp);
			if (!feof(fp)) printf("%d(%#x) ", buff, buff);
		}
		fclose(fp);
	}
}