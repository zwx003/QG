#include<stdio.h>
typedef struct Node
{
	int data;
	struct Node* next;
}Node,*List;

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
	    p->next=NULL;
		r = p;
		i--;
	}
}

void middle(List&head)
{
	int n=0;
	List fast, slow;
	fast = head;
	slow = head;
	while (fast)
	{
		if (fast->next == NULL)
		{
			printf("中间节点为两个节点:");
			printf("%d %d", slow->data, slow->next->data);
		}
	    fast = fast->next->next;
		slow = slow->next;
	}
	
		printf("中间节点为:");
		printf("%d", slow->data);
}


int main()
{
	List head;
	input(head);
	middle(head);
}