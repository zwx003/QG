#include<stdio.h>
typedef struct Node
{
	int id;
	struct Node* next;
}Node,*List;

int i;
void input(List&head)
{
	head = new Node;
	head->next = NULL;
	printf("请输入你要输入几个数据:");
	scanf_s("%d", &i);
	List p, r;
	r = head;
	while (i)
	{
		p = new Node;
		scanf_s("%d", &p->id);
		r->next = p;
		p->next = NULL;
		r = p;
		i--;
	}
}
//p__r__next
//交换奇偶节点
void* transformation(List& head)
{
	List p = head, r = head->next;//0 1 2 3 head 是0，不储存数据
	while (r && r->next)
	{
		List next=r->next;
		p->next = next;//0->2
		r->next = next->next;//1->3
		next->next = r;//2->1
		p = r;
		r = r->next;
	}
	return head->next;
}

void output(List& head)
{
	List p;
	p = head->next;
	while (p)
	{
		printf("%d ", p->id);
		p = p->next;
	}
}


int main()
{
	List head;
	input(head);
	printf("\n");
	transformation(head);
	output(head);
	return 0;
}