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
		r = p;
		p->next = head;
		i--;
	}
}


void Judge(List&head)
{
	List p, r;
	p = head;
	r = head;
	while (p)
	{
		if (p->next == NULL || p->next->next == NULL)
			printf("该链表不循环");
		p = p->next->next;
		r = r->next;
		if (p == r)
		{
			printf("该链表循环");
			return;
		}

	}
}


int main()
{
	List head;
	input(head);
	Judge(head);

}