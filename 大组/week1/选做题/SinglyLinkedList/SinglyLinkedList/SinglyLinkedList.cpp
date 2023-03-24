#include<stdio.h>
typedef struct Lnode
{
	int id;
	char name[20];
	struct Lnode* next;
}Lnode,*LinkList;

void input(LinkList& head)
{
	head = new Lnode;
	head->next = NULL;
	int i;
	printf("请输入你要输入几个数据:");
	scanf_s("%d", &i);
	LinkList p, r;
	r = head;
	printf("请输入数据,例如:12 name\n");
	while(i)
	{
		p = new Lnode;
		scanf_s("%d %s", &p->id,&p->name,20);
		r->next = p;
		r = p;
		p->next = head;
		i--;
	}
}

void output(LinkList& head)
{
	LinkList p;
	p = head->next;
	while (p)
	{
		printf("%d %s ", p->id, p->name);
		p = p->next;
	}
}



int main()
{
	LinkList head;
	input(head);
	printf("\n");
	output(head);
	return 0;
}