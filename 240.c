// 240 - ���� �����ϱ� (fread, fwrite)

#include<stdio.h>

void main(void)
{
	FILE *fpR, *fpW;  // �а�, ����
	char buff;
	int len;

	fpR = fopen("file.bin", "rb");

	if (fpR == NULL)
	{
		perror("���� �б� ���� ����");
		return;
	}

	fpW = fopen("file_copy.bin", "w+b");

	if (fpW == NULL)
	{
		perror("���� ���� ���� ����");
		fclose(fpR);	// �̹� ����� fpR�� ����
		return;
	}

	while (!feof(fpR))
	{
		len = fread(&buff, 1, 1, fpR);
		if (ferror(fpR))
		{
			perror("���� �б� ����");
			_fcloseall();
			return;
		}
	

	if (len > 0)
	{
		fwrite(&buff, 1, 1, fpW);
		if (ferror(fpW))
		{
			perror("���� ���� ����");
			_fcloseall();
			return;
		}
	}
}

_fcloseall();

puts("������ ���������� �����Ͽ����ϴ�.");
}

