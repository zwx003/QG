#include<stdio.h>

typedef struct Dnode
{
	struct Dnode* front;//向前的指针域
	int id;
	char name[20];
	struct Dnode* next;//向后的指针域
}Dnode,*DoubleList;
DoubleList p, r;

void input(DoubleList&head)
{
	head = new Dnode;
	head->next = NULL;
	head->front = NULL;
	r = head;
	int i;
	printf("请输入你要输入几个数据:");
	scanf_s("%d", &i);
	printf("请输入数据,例如:12 name\n");
	while (i)
	{
		p = new Dnode;
		scanf_s("%d %s", &p->id, &p->name, 20);
		r->next = p;
		p->front = r;
		p->next = NULL;
		r = p;
		i--;
	}

}

void output(DoubleList&head)
{
	p = head->next;
	while (p)
	{
		printf("%d %s ", p->id, p->name);
		p = p->next;
	}
	printf("\n");
	while (r != head)
	{
		printf("%d %s ", r->id, r->name);
		r = r->front;
	}
}

int main()
{
	DoubleList head;
	input(head);
	output(head);
}