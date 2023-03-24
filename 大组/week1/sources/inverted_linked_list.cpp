#include"max.h"
void inverted_linked_list(List& head)
{
	int i;
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