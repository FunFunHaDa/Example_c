// 266 - 단일 링크드 리스트 구현하기

#include<stdio.h>
#include<malloc.h>	// malloc, free
#include<string.h>	// strcpy

int add_list(char * name, char * tel, char * addr);
void print_list(void);
void remove_list(void);

typedef struct tagLinkedList
{
	char name[30];
	char tel[30];
	char addr[100];

	struct tagLinkedList *next;
}ADDR;

ADDR *g_pAddrHead = NULL;

void main(void)
{
	add_list("홍길동", "1111", "서울특별시 종로구");
	add_list("홍길순", "2222", "서울특별시 강서구");
	add_list("Mr.Kim", "3333", "서울특별시 구로구");
	add_list("김C", "4444", "서울특별시 강동구");
	add_list("최C", "5555", "대전광역시 동구");

	print_list();
	remove_list();
}

int add_list(char *name, char *tel, char *addr)
{
	ADDR*plocal, *pn = g_pAddrHead;

	// g_pAddrHead가 초기화되지 않은 경우, 한 번만 실행
	if (g_pAddrHead == NULL)
	{
		g_pAddrHead = malloc(sizeof(ADDR)); // ADDR 구조체 할당

		if (g_pAddrHead == NULL)
		{
			return 0;
		}

		g_pAddrHead->next = NULL;
		plocal = g_pAddrHead;
	}
	else // g_pAddrHead가 초기화된 후 계속 실행됩니다.
	{
		plocal = malloc(sizeof(ADDR)); // ADDR 구조체 할당

		if (plocal == NULL)
		{
			return 0;
		}

		while (pn->next)
		{
			pn = pn->next;
		}

		pn->next = plocal;		// 다음 리스트를 지정
		plocal->next = NULL;	// 다음 리스트를 NULL로 지정	
	}

	strcpy(plocal->name, name);	// 새로 할당된 구조체에 이름 복사
	strcpy(plocal->tel, tel);   // 새로 할당된 구조체에 전화 복사
	strcpy(plocal->addr, addr); // 새로 할당된 구조체에 주소 복사

	return 1;
}

void print_list(void)
{
	int count = 1;
	ADDR*plist;

	plist = g_pAddrHead;

	// 한 개씩 출력
	while (plist)
	{
		printf("No, %d\n", count++);
		puts(plist->name);
		puts(plist->tel);
		printf("%s \n\n", plist->addr);

		plist = plist->next;
	}
}

void remove_list(void)
{
	ADDR *plocal;

	// 한 개씩 메모리 해제
	while (g_pAddrHead)
	{
		plocal = g_pAddrHead->next;
		free(g_pAddrHead);
		g_pAddrHead = plocal;
	}
}