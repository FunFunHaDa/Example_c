// 163 - ���� �۾����� ���͸� ���ϱ� (_getcwd)

#include<stdio.h>
#include<stdlib.h>
#include<direct.h>

void main(void)
{
	// _MAX_PATH, �ü���� ���� �ִ���
	char pathname[_MAX_PATH];

	_getcwd(pathname, _MAX_PATH);

	puts(pathname);
}