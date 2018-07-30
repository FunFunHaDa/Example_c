// 164 - 현재 작업중인 디렉터리 변경하기 (_chdir)

#include<stdio.h>
#include<stdlib.h>
#include<direct.h>

void main(void)
{
	char pathname[_MAX_PATH] = "c:\\temp";
	
	if (_chdir(pathname) == 0)
	{
		_getcwd(pathname, _MAX_PATH);
		puts(pathname);
	}
}