#include"week1.h"
void SinglyLinkedList(List& head)
{
	head = new Node;
	head->next = NULL;
	int i;
	printf("请输入你要输入几个数据:");
	scanf_s("%d", &i);
	List p, r;
	r = head;
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