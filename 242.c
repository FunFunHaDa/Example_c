// 242 - ���Ͽ��� Ư�� ���ڿ� �˻��ϱ� (strstr), file.txt�� ���� ����

#include<stdio.h>
#include<string.h>

void  main(void)
{
	FILE *fp;
	char buff[200];
	int line = 1;

	fp = fopen("file.txt", "r");

	if (fp == NULL)
	{
		perror("���� �б� ���� ����");
		return;
	}

	while (!feof(fp))
	{
		fgets(buff, 200, fp);

		if (strstr(buff, "���ѹα�"))
		{
			printf("Line(%2d):%s", line, buff);
		}
		line++;
	}

	_fcloseall();
}

// file.txt
//���ѹα��� �౸�� �����ϴ� �����Դϴ�.
//2002�� �������� ���� �츮������ �౸�� ���� �ν��� ũ�� ���Ǿ����ϴ�.
//�ٰ����� 2022�� īŸ�� �����ſ����� ���ѹα��� ���� ��⸦ ��ĥ �� �ֵ���, �츮 ��� �Ѹ���, �Ѷ����� �����սô�~!