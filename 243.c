// 243 - ���Ͽ��� Ư�� ���ڿ� ��ü�ϱ�

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<malloc.h>

void main(void)
{
	FILE *fpR, *fpW;
	char buff[200];
	char *pbuf, *dup;
	int len, pos1, pos2;

	fpR = fopen("file.txt", "r");

	if (fpR == NULL)
	{
		perror("���� �б� ���� ����");
		return;
	}

	fpW = fopen("file_change.txt", "w+");

	if (fpW == NULL)
	{
		perror("���� ���� ���� ����");
		_fcloseall();
		return;
	}

	while (!feof(fpR))
	{
		fgets(buff, 200, fpR);

		pbuf = strstr(buff, "���ѹα�");

		if (pbuf)
		{
			len = strlen(buff);	// ���� ���ڿ��� ����
			pos1 = pbuf - buff; // ���ѹα��� �˻��� ��ġ

			dup = strdup(buff);
			strnset(&buff[pos1], 0, len - pos1);
			strcat(buff, "�ѱ�");

			pos1 = pbuf - buff + strlen("���ѹα�");
			pos2 = pbuf - buff + strlen("�ѱ�");

			strcpy(&buff[pos2], &dup[pos1]);
			free(dup);
		}

		if (!feof(fpR))fputs(buff, fpW);
	}

	_fcloseall();
	puts("���ѹα��� �ѱ����� ��� ��ü�Ͽ����ϴ�.");
}