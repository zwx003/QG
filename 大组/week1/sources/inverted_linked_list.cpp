#include"max.h"
void inverted_linked_list(List& head)
{
	int i;
	head = new Node;
	head->next = NULL;
	List p, r;
	r = head;
	printf("��������Ҫ���뼸������:");
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