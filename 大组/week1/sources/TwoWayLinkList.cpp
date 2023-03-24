#include"max.h"
void TwoWayLinkList(List& head)
{
	int i;
	List p, r;
	head = new Node;
	head->next = NULL;
	head->front = NULL;
	r = head;
	printf("请输入你要输入几个数据:");
	scanf_s("%d", &i);
	while (i)
	{
		p = new Node;
		scanf_s("%d", &p->data);
		r->next = p;
		p->front = r;
		p->next = NULL;
		r = p;
		i--;
	}
    p = head->next;
	if (p == NULL)
		return;
	printf("forward:");
	while (p)
	{
		printf("%d ", p->data);
		p = p->next;
	}
	printf("\nreverse:");
	while(r!=head)
	{
		printf("%d ", r->data);
		r = r->front;
	}


}
