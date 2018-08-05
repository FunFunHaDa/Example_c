// 242 - 파일에서 특정 문자열 검색하기 (strstr), file.txt는 따로 생성

#include<stdio.h>
#include<string.h>

void  main(void)
{
	FILE *fp;
	char buff[200];
	int line = 1;

	fp = fopen("file.txt", "r");

	if (fp == NULL)
	{
		perror("파일 읽기 개방 에러");
		return;
	}

	while (!feof(fp))
	{
		fgets(buff, 200, fp);

		if (strstr(buff, "대한민국"))
		{
			printf("Line(%2d):%s", line, buff);
		}
		line++;
	}

	_fcloseall();
}

// file.txt
//대한민국은 축구를 좋아하는 나라입니다.
//2002년 월드컵을 계기로 우리나라의 축구에 대한 인식이 크게 향상되었습니다.
//다가오는 2022년 카타르 월드컵에서도 대한민국이 멋진 경기를 펼칠 수 있도록, 우리 모두 한마음, 한뜻으로 응원합시다~!