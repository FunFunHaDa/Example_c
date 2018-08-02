// 220 - 문자열에서 한글만 추출해내기

void main(void)
{
	unsigned char * string = "대한민국Korea";
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