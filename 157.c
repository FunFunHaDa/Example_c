// 157 - 파일이 존재하는지 확인하기 (_access)

#include<stdio.h>
#include<io.h>

void main(void)
{
	char *path = "C:\\Users\\Administrator\\file.txt";

		if (_access(path, 0) == 0)
		{
			puts("해당 경로에 파일이 존재합니다.");
		}
}