// 082 - ���ڿ��� �Ǽ��� ��ȯ�ϱ� 2 (strtod)

#include<stdio.h>
#include<stdlib.h>

void main(void)
{
	char * string = "1.234E-10";
	char * stop;	// ��ȯ�� �Ǵٰ� ������ ������ ��
	double value;

	value = strtod(string, &stop);

	printf(" %d, %d \n", stop, string);
	printf("%d ���� ���ڰ� ��ȯ�Ǿ����ϴ�. \n", stop - string);
	printf("���ڿ� [%s]�� ���ڷ� ��ȯ�ϸ� %E �Դϴ�. \n", string, value);
}