// 081 - ���ڿ��� �Ǽ��� ��ȯ�ϱ� 1 (atof)

#include<stdio.h>
#include<stdlib.h>

void main(void)
{
	char * string1 = "2.1�� 1.0���� ũ�ϴ�.";
	char * string2 = "1004.5sms õ��.�� �Դϴ�.";
	char * string3 = "2018�⵵ �Դϴ�.";
	char * string4 = "������ 6�� 10���Դϴ�.";
	double t1, t2, t3, t4;

	puts(string1);
	puts(string2);
	puts(string3);
	puts(string4);

	t1 = atof(string1);
	t2 = atof(string2);
	t3 = atof(string3);
	t4 = atof(string4);

	printf("���ڿ��� ���ڷ� ��ȯ�� �� : %.1f, %.1f, %.1f, %.1f \n", t1, t2, t3, t4);
	printf("�� ���� %.2f�Դϴ�. \n", t1 + t2 + t3 + t4);
}