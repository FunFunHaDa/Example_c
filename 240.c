// 240 - 파일 복사하기 (fread, fwrite)

#include<stdio.h>

void main(void)
{
	FILE *fpR, *fpW;  // 읽고, 쓰기
	char buff;
	int len;

	fpR = fopen("file.bin", "rb");

	if (fpR == NULL)
	{
		perror("파일 읽기 개방 에러");
		return;
	}

	fpW = fopen("file_copy.bin", "w+b");

	if (fpW == NULL)
	{
		perror("파일 쓰기 개방 에러");
		fclose(fpR);	// 이미 개방된 fpR을 닫음
		return;
	}

	while (!feof(fpR))
	{
		len = fread(&buff, 1, 1, fpR);
		if (ferror(fpR))
		{
			perror("파일 읽기 에러");
			_fcloseall();
			return;
		}
	

	if (len > 0)
	{
		fwrite(&buff, 1, 1, fpW);
		if (ferror(fpW))
		{
			perror("파일 쓰기 에러");
			_fcloseall();
			return;
		}
	}
}

_fcloseall();

puts("파일을 성공적으로 복사하였습니다.");
}

