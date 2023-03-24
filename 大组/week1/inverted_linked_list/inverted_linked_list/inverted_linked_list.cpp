#include<stdio.h>
typedef struct Node
{
	int data;
	struct Node* next;
}Node, * List;

int i;

void input(List& head)
{
	head = new Node;
	head->next = NULL;
	List p, r;
	r = head;
	printf("请输入你要输入几个数据:");
	scanf_s("%d", &i);
	while (i)
	{
		p = new Node;
		scanf_s("%d", &p->data);
		r->next = p;
		p->next = NULL;
		r = p;
		i--;
	}
}

void reservelist(List& head)
{
	List p, r, next=NULL;
	r = NULL;
	p = head->next;
	while (p) 
	{
		next = p->next;
		p->next = r;
		r = p;
		p = next;
	}
	head= r;
}

void output(List& head)
{
	List p;
	p = head;
	while (p)
	{
		printf("%d ", p->data);
		p = p->next;
	}
}

int main()
{
	List head;
	input(head);
	reservelist(head);
	output(head);
}
