// 119 - ����ü ����ϱ�

#include<stdio.h>
#include<string.h>

struct tatAddress
{
	char name[30];
	char phone[20];
	char address[100];
};

void main(void)
{
	struct tatAddress ad;

	strcpy(ad.name, "ȫ�浿");
	strcpy(ad.phone, "02-1234-5678");
	strcpy(ad.address, "����� ��õ�� �񵿾���Ʈ 13����");

	printf("�̸� : %s \n", ad.name);
	printf("��ȭ : %s \n", ad.phone);
	printf("�ּ� : %s \n", ad.address);
}