// 문자 출력하기 (putch)

#include<stdio.h>
#include<conio.h>


int print(char * string);

void main(void)
{
	printf("This is a putch function!");
	_putch('\r');
	_putch('\n');
}

int print(char *string)
{
	int len = 0;

	while (*string != (char)NULL)
	{
		_putch(*string);
		string++;
		len++;
	}
	
	return len;
}