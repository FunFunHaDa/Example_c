// 175 - ��¥ �� �ð��� �̱������� ��ȯ�ϱ� (asctime)

#include<stdio.h>
#include<time.h>

void main(void)
{
	time_t now;
	struct tm t;

	now = time(NULL);
	t = *localtime(&now);

	printf("���� ��¥ �� �ð�: %s \n", asctime(&t));
}