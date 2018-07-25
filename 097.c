// 097 - 메모리를 블록 단위로 할당하기 (calloc)

#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

void main(void)
{
	char * pmem;

	printf("sizeof(int)의 길이는 %d 입니다. \n", sizeof(int));

	pmem = calloc(100, sizeof(int));	// 할당된 버퍼를 0으로 초기화, malloc와의 차이점

	if (pmem == NULL)
	{
		puts("메모리를 할당할 수 없습니다.");
	}
	else
	{
		puts("정수형 변수 100개를 저장할 버퍼가 할당되었습니다.");

		free(pmem);
	}
}