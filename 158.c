// 158 - 파일 이름 변경하기 (rename)

#include<stdio.h>

void main(void)
{
	char *oldname = "c:\\Users\\Administrator\\file.txt";
	char *newname = "c:\\Users\\Administrator\\file_1.txt";

	if (rename(oldname, newname) != 0)
	{
		perror("파일명 변경 에러");
	}
	else
	{
		puts("파일명을 성공적으로 변경하였습니다.!");
	}
}