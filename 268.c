// 268 - �ּҷ� �����ϱ� 

#include<stdio.h>	// printf, puts, fopen, fclose, getchar
#include<malloc.h>	// malloc, free
#include<string.h>	// strcpy, strstr
#include<conio.h>	// getch

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
int g_bSaved = 1;

void get_addrlist(void);
int add_list(const ADDR *addr);
int find_list(const char *name);
void SetHeadPosition(void);
void SetTailPosition(void);

void Addr_addr(void);
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

	puts("�ּҷ� ���α׷� Version 1.0");

	while (1)
	{
		printf("\n[1]���[2]�˻�[3]����[4]����[5]���[S]����[Q]���� ");
		
		ch = getch();

		switch (ch)
		{
		case '1': Add_adr(); break;
		case '2': Find_addr(); break;
		case '3': Modify_addr(); break;
		case '4': Delete_addr(); break;
		case '5': Print_addr(); break;
		case 's':
		case 'S': Save_addr(); break;
		case 'q':
		case 'Q':
			if (g_bSaved == 0)
			{
				printf("\n\n����� �ּ� �����͸� �����Ͻðڽ��ϱ�(y/n)?");
				ch = getchar();
				if (ch == 'Y' || ch == 'y') Save_addr();
			}
			Remove_addr(); return;
		default: printf("\n\n 1 ~ 5 �Ǵ� S/Q�� �����ʽÿ�.\n\n"); break;
		}
	}
}

void get_addrlist(void)
{
	ADDR addr;
	FILE *fp;

	fp = open(ADDRFILE, "rb");

	if (fp == NULL)
	{
		perror("���� ���� ����");
		return;
	}

	while (!feof(fp))
	{
		fread(&addr, sizeof(ADDR), 1, fp);

		if (ferror(fp))
		{
			fclose(fp);
			perror("���� �б� ����");
			return;
		}

		if (feof(fp)) break;

		if (add_list(&addr) == 0)
		{
			printf("�ּ� �����͸� ��ũ�� ����Ʈ�� �߰��� �� �����ϴ�.\n");
		}
	}
	fclose(fp);
}

int add_list(const ADDR *addr)
{
	ADDR *plocal, *pn = g_pAddrHead;
	SetHeadPosition();

	if (g_pAddrHead == NULL)
	{
		plocal = malloc(sizeof(ADDR)); // ADDR ����ü �Ҵ�
		memset(plocal, 0, sizeof(ADDR));

		if (plocal == NULL)
		{
			return 0;
		}

		g_pAddrHead = plocal;
		g_pAddrHead->prev = NULL;
		g_pAddrHead->next = NULL;
	}
	else
	{
		plocal = malloc(sizeof(ADDR));
		memset(plocal, 0, sizeof(ADDR));

		if (plocal == NULL)
		{
			return 0;
		}

		while (pn->next)
		{
			pn = pn->next;
		}

		pn->next = plocal;
		plocal->prev = pn;
		plocal->next = NULL;
	}

	strcpy(plocal->name, addr->name);
	strcpy(plocal->tel, addr->tel);
	strcpy(plocal->addr, addr->addr);

	return 1;
}

void SetHeadPosition(void)
{
	if (g_pAddrHead == NULL) return;

	while (g_pAddrHead->prev)
	{
		g_pAddrHead = g_pAddrHead->prev;
	}
}

void SetTailPosition(void)
{
	if (g_pAddrHead == NULL) return;

	while (g_pAddrHead->next)
	{
		g_pAddrHead = g_pAddrHead->next;
	}
}

int find_list(const char *name)
{
	ADDR *plocal;

	SetHeadPosition();

	plocal = g_pAddrHead;

	while (plocal)
	{
		if (strstr(plocal->name, name))	// �̸��� �˻�
		{
			g_pFind = plocal;
			return 1;
		}
		plocal = plocal->next;
	}
	return 0;
}

void Addr_addr(void)
{
	ADDR addr;

	memset(&addr, 0, sizeof(ADDR));
	printf("\n\n����� �̸�:"); gets(addr.name);

	if (strlen(addr.name) == 0) return;

	printf("����� ��ȭ:"); gets(addr.tel);
	printf("����� �ּ�:"); gets(addr.addr);

	if (find_list(addr.name) == 1)
	{
		printf("\n�̹� ��ϵǾ� �ִ� �̸��Դϴ�.\n\n");
		puts(g_pFind->name);
		puts(g_pFind->tel);
		puts(g_pFind->addr);
		return;
	}

	if (addr_list(&addr))
	{
		g_bSaved = 0;
		printf("\n��ϵǾ����ϴ�. \n\n");
	}
	else
	{
		printf("\n����� ���еǾ����ϴ�. \n\n");
	}
}

void Find_addr(void)
{
	char buff[100] = { 0, };
	ADDR *plocal;

	printf("\n\n�˻��� �̸�/��ȭ/�ּ��� �Ϻθ� �Է��ϼ���. \n");
	printf("�̸�/��ȭ/�ּ�:"); gets(buff);

	if (strlen(buff) == 0) return;

	SetHeadPosition();

	plocal = g_pAddrHead;
	g_pFind = NULL;

	while (plocal)
	{
		if (strstr(plocal->name, buff))	// �̸��� �˻�
		{
			g_pFind = plocal;
			break;
		}

		if (strstr(plocal->tel, buff))	// ��ȭ�� �˻�
		{
			g_pFind = plocal;
			break;
		}

		if (strstr(plocal->addr, buff))	// �ּҸ� �˻�
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
		printf("\n\n%s�� �ּҷϿ��� ã�� �� �����ϴ�. \n\n", buff);
	}
}

void Modify_addr(void)
{
	char name[100] = { 0, };
	ADDR addr;

	while (1)
	{
		printf("\n\n������ �̸�:"); gets(name);

		if (strlen(name) == 0) return;

		if (find_list(name) == 0)
		{
			puts("������ �̸��� ã�� �� �����ϴ�.");
			continue;
		}
		break;
	}

	printf("\n%s�� ���� �ּ� �����ʹ� �Ʒ��� �����ϴ�. \n\n", name);
	puts(g_pFind->name);
	puts(g_pFind->tel);
	puts(g_pFind->addr);

	printf("\n �����Ϸ��� �̸�/��ȭ/�ּҸ� �Է��� �� ����Ű�� ġ����. \n\n");

	printf("�̸�:"); gets(addr.name);
	printf("��ȭ:"); gets(addr.tel);
	printf("�ּ�:"); gets(addr.addr);

	if (strlen(addr.name) == 0)strcpy(addr.name, name);

	strcpy(g_pFind->name, addr.name);
	strcpy(g_pFind->tel, addr.tel);
	strcpy(g_pFind->addr, addr.addr);

////////////////////////////////////////////////////////// concentration

}