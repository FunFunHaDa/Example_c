// 094 - ���ڰ� ����, �ǹ��� �Ǵ� ���๮������ �˻��ϱ� (isspace)

#include<stdio.h>
#include<ctype.h>

void main(void)
{
	char * string = "This is Korea! \t\n";
	int cnt = 0;

	while (*string)
	{
		if (isspace(*string))
		{
			cnt++;
		}
		string++;
	}

	puts("This is Korea! \\t\\n");
	puts("    1  2      34 5");
	printf("����, �� �׸��� ���๮���� ���� %d�Դϴ�.\n", cnt);
}