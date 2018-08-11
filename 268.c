// 268 - 주소록 구현하기 

#include<stdio.h>	// printf, puts, fopen, fclose, getchar
#include<malloc.h>	// malloc, free
#include<string.h>	// strcpy, strstr
#include<conio.h>	// getch, 엔터를 치지 않고 한 개의 무자 입력 받음

#define ADDRFILE "addrlist.txt"

typedef struct tagLinkedList
{
	char name[30];
	char tel[30];
	char addr[100];

	struct tagLinkedList *prev;
	struct tagLinkedList *next;
}ADDR;

ADDR *g_pAddrHead = NULL;
ADDR *g_pFind;
int g_bSaved = 1;	// 등록/수정/삭제 시 값이 0이됨, 0일 때 종료하면 모든 주소 데이터를 변경할 것인지 묻는다.

void get_addrlist(void);
int add_list(const ADDR *addr);
int find_list(const char *name);
void SetHeadPosition(void);
void SetTailPosition(void);

void Add_addr(void);
void Find_addr(void);
void Modify_addr(void);

void Delete_addr(void);
void Print_addr(void);
void Save_addr(void);
void Remove_addr(void);

void main(void)
{
	int ch;

	get_addrlist();

	puts("주소록 프로그램 Version 1.0");

	while (1)
	{
		printf("\n[1]등록 [2]검색 [3]수정 [4]삭제 [5]출력 [S]저장 [Q]종료 ");
		
		ch = getch();	// 엔터 없이 문자를 받는다.

		switch (ch)
		{
		case '1': Add_addr(); break;
		case '2': Find_addr(); break;
		case '3': Modify_addr(); break;
		case '4': Delete_addr(); break;
		case '5': Print_addr(); break;
		case 's':
		case 'S': Save_addr(); break;
		case 'q':
		case 'Q':
			if (g_bSaved == 0)	// 주소 데이터 변경 시 변경 여부를 묻는다.
			{
				printf("\n\n변경된 주소 데이터를 저장하시겠습니까(y/n)?");
				ch = getchar();
				if (ch == 'Y' || ch == 'y') Save_addr();
			}
			Remove_addr(); return;
		default: printf("\n\n 1 ~ 5 또는 S/Q를 누르십시오.\n\n"); break;
		}
	}
}

// 파일로부터 주소 데이터를 이중 링크드 리스트에 읽어들입니다.
void get_addrlist(void)
{
	ADDR addr;
	FILE *fp;

	fp = fopen(ADDRFILE, "rb");

	if (fp == NULL)
	{
		perror("파일 개방 에러");
		return;
	}

	while (!feof(fp))
	{
		fread(&addr, sizeof(ADDR), 1, fp);

		if (ferror(fp))
		{
			fclose(fp);
			perror("파일 읽기 에러");
			return;
		}

		if (feof(fp)) break;

		if (add_list(&addr) == 0)
		{
			printf("주소 데이터를 링크드 리스트에 추가할 수 없습니다.\n");
		}
	}
	fclose(fp);
}

// 주소 데이터 하나를 이중 링크드 리스트에 추가합니다.
int add_list(const ADDR *addr)
{
	ADDR *plocal, *pn = g_pAddrHead;
	SetHeadPosition();

	// g_pAddrHead가 초기화 되지 않은 경우, 한 번만 실행
	if (g_pAddrHead == NULL)
	{
		plocal = malloc(sizeof(ADDR)); // ADDR 구조체 할당
		memset(plocal, 0, sizeof(ADDR));

		if (plocal == NULL)
		{
			return 0;
		}

		g_pAddrHead = plocal;
		g_pAddrHead->prev = NULL;	// 처음에는 NULL로 초기화
		g_pAddrHead->next = NULL;	// 처음에는 NULL로 초기화
	}
	else	// g_pAddrHead가 초기화 된 후 계속 실행
	{
		plocal = malloc(sizeof(ADDR));	// ADDR 구조체 할당
		memset(plocal, 0, sizeof(ADDR));

		if (plocal == NULL)
		{
			return 0;
		}

		while (pn->next)
		{
			pn = pn->next;
		}

		pn->next = plocal;	// 다음 리스트를 지정
		plocal->prev = pn;	// 이전 리스트를 지정
		plocal->next = NULL;	// 다음 리스트를 NULL로 지정
	}

	strcpy(plocal->name, addr->name);
	strcpy(plocal->tel, addr->tel);
	strcpy(plocal->addr, addr->addr);

	return 1;
}

// g_pAddrHead를 첫 번째 주소 데이터를 가리키도록 지정합니다.
void SetHeadPosition(void)
{
	if (g_pAddrHead == NULL) return;

	while (g_pAddrHead->prev)
	{
		g_pAddrHead = g_pAddrHead->prev;
	}
}

// g_pAddrHead를 마지막 주소 데이터를 가리키도록 지정
void SetTailPosition(void)
{
	if (g_pAddrHead == NULL) return;

	while (g_pAddrHead->next)
	{
		g_pAddrHead = g_pAddrHead->next;
	}
}

// 주어진 이름이 주소록에 있는지 검색
int find_list(const char *name)
{
	ADDR *plocal;

	SetHeadPosition();	// g_pAddrHead를 첫 주소 데이터를 가리키도록 지정

	plocal = g_pAddrHead;

	while (plocal)
	{
		if (strstr(plocal->name, name))	// 이름을 검색
		{
			g_pFind = plocal;
			return 1;
		}
		plocal = plocal->next;
	}
	return 0;
}

// 한 명의 주조를 입력받아 주소록에 추가
void Add_addr(void)
{
	ADDR addr;

	memset(&addr, 0, sizeof(ADDR));
	printf("\n\n등록할 이름: "); gets(addr.name);

	if (strlen(addr.name) == 0) return;

	printf("등록할 전화: "); gets(addr.tel);
	printf("등록할 주소: "); gets(addr.addr);

	if (find_list(addr.name) == 1)
	{
		printf("\n이미 등록되어 있는 이름입니다.\n\n");
		puts(g_pFind->name);
		puts(g_pFind->tel);
		puts(g_pFind->addr);
		return;
	}

	if (add_list(&addr))
	{
		g_bSaved = 0;
		printf("\n등록되었습니다. \n\n");
	}
	else
	{
		printf("\n등록이 실패되었습니다. \n\n");
	}
}

// 이름/전화/주소를 검색하여 한 화면에 보여줍니다.
void Find_addr(void)
{
	char buff[100] = { 0, };
	ADDR *plocal;

	printf("\n\n검색할 이름/전화/주소의 일부를 입력하세요. \n");
	printf("이름/전화/주소:"); gets(buff);

	if (strlen(buff) == 0) return;

	SetHeadPosition();

	plocal = g_pAddrHead;
	g_pFind = NULL;

	while (plocal)
	{
		if (strstr(plocal->name, buff))	// 이름을 검색
		{
			g_pFind = plocal;
			break;
		}

		if (strstr(plocal->tel, buff))	// 전화를 검색
		{
			g_pFind = plocal;
			break;
		}

		if (strstr(plocal->addr, buff))	// 주소를 검색
		{
			g_pFind = plocal;
			break;
		}

		plocal = plocal->next;
	}

	if (g_pFind)
	{
		puts(g_pFind->name);
		puts(g_pFind->tel);
		puts(g_pFind->addr);
	}
	else
	{
		printf("\n\n%s을 주소록에서 찾을 수 없습니다. \n\n", buff);
	}
}

// 검색된 주소 데이터를 재입력받아 모두 수정
void Modify_addr(void)
{
	char name[100] = { 0, };
	ADDR addr;

	while (1)
	{
		printf("\n\n수정할 이름:"); gets(name);

		if (strlen(name) == 0) return;

		if (find_list(name) == 0)
		{
			puts("수정할 이름을 찾을 수 없습니다.");
			continue;
		}
		break;
	}

	printf("\n%s에 대한 주소 데이터는 아래와 같습니다. \n\n", name);
	puts(g_pFind->name);
	puts(g_pFind->tel);
	puts(g_pFind->addr);

	printf("\n 수정하려는 이름/전화/주소를 입력한 후 엔터키를 치세요. \n\n");

	printf("이름:"); gets(addr.name);
	printf("전화:"); gets(addr.tel);
	printf("주소:"); gets(addr.addr);

	if (strlen(addr.name) == 0)strcpy(addr.name, name);

	strcpy(g_pFind->name, addr.name);
	strcpy(g_pFind->tel, addr.tel);
	strcpy(g_pFind->addr, addr.addr);

	g_bSaved = 0;
	printf("%s에 대한 주소 데이터를 수정하였습니다. \n", name);
}

// 주소록에서 선택된 이름이 있는 주소 데이터를 삭제
void Delete_addr(void)
{
	char name[100] = { 0, };
	ADDR *plocal;
	int ch;

	while (1)
	{
		printf("\n\n삭제할 이름:"); gets(name);

		if (strlen(name) == 0) return;

		if (find_list(name) == 0)
		{
			puts("삭제할 이름을 찾을 수 없습니다.");
			continue;
		}
		break;
	}

	puts(g_pFind->name);
	puts(g_pFind->tel);
	puts(g_pFind->addr);

	printf("%s를 삭제하시겠습니까(y/n)? ", name);
	ch = getch();
	rewind(stdin);		///

	if (ch == 'Y' || ch == 'y')
	{
		if (g_pFind->prev == NULL)	// 이전 데이터가 없는 경우
		{
			if (g_pFind->next == NULL)	// 다음 데이터도 없는 경우
			{
				free(g_pFind);
				g_pAddrHead = NULL;
			}
			else
			{
				plocal = g_pFind->next;
				free(g_pFind);
				plocal->prev = NULL;
				g_pAddrHead = plocal;
			}
		}
		else if(g_pFind->next == NULL)	// 다음 데이터가 없는 경우
		{
			plocal = g_pFind->prev;
			free(g_pFind);
			plocal->next = NULL;
			g_pAddrHead = plocal;
		}
		else	// 이전과 다음 데이터가 모두 있는 경우
		{
			plocal = g_pFind->prev;
			plocal->next = g_pFind->next;

			plocal = g_pFind->next;
			plocal->prev = g_pFind->prev;

			free(g_pFind);
			g_pAddrHead = plocal;
		}

		g_bSaved = 0;

		printf("\n\n검색된 주소 데이터를 삭제하였습니다.\n\n");
	}
}

// 모든 주소 데이터를 출력
void Print_addr(void)
{
	int count = 1;
	ADDR *plocal;

	SetHeadPosition();
	plocal = g_pAddrHead;

	// plocal 리스트의 맨 처음으로 이동
	while (plocal->prev)
	{
		plocal = plocal->prev;
	}

	printf("\n\n");

	// 한 개씩 출력
	while (plocal)
	{
		printf("번호.%d \n", count++);
		puts(plocal->name);
		puts(plocal->tel);
		printf("%s \n\n", plocal->addr);

		printf("아무키나 누르세요, (중지:q) \n\n");
		if (getch() == 'q') return;

		plocal = plocal->next;
	}
}

// 이중 링크드 리스트에 있는 모든 주소 데이터를 파일에 저장
void Save_addr(void)
{
	ADDR *plocal;
	FILE *fp;

	if (g_pAddrHead == NULL) return;

	fp = fopen(ADDRFILE, "w+b");

	if (fp == NULL)
	{
		perror("파일 개방 에러");
		return;
	}

	SetHeadPosition();

	// 한 개씩 메모리 해제
	while (g_pAddrHead)
	{
		plocal = g_pAddrHead->next;
		fwrite(g_pAddrHead, sizeof(ADDR), 1, fp);
		g_pAddrHead = plocal;
	}

	printf("\n모든 데이터를 파일에 저장하였습니다.");
	g_bSaved = 1;

	fclose(fp);
}

// 이중 링크드 리스트에 할당된 모든 메모리를 해제
void Remove_addr(void)
{
	ADDR * plocal;
	if (g_pAddrHead == NULL) return;
	SetHeadPosition();

	// 한개의 메모리 해제
	while (g_pAddrHead)
	{
		plocal = g_pAddrHead->next;
		free(g_pAddrHead);
		g_pAddrHead = plocal;
	}
	g_pAddrHead = NULL; // 재사용을 하기 위한 초기화
}