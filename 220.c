// 220 - ���ڿ����� �ѱ۸� �����س���

void main(void)
{
	unsigned char * string = "���ѹα�Korea";
	unsigned char buff[20] = { 0, };
	int i = 0;

	while (*string)
	{
		if (*string > 127)
		{
			buff[i++] = *string;
		}
		string++;
	}
	puts(buff);
}