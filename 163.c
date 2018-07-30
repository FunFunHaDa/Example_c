// 163 - 현재 작업중인 디렉터리 구하기 (_getcwd)

#include<stdio.h>
#include<stdlib.h>
#include<direct.h>

void main(void)
{
	// _MAX_PATH, 운영체제에 따른 최대경로
	char pathname[_MAX_PATH];

	_getcwd(pathname, _MAX_PATH);

	puts(pathname);
}