#include"max.h"
void Circle_List_Judge(List& head)
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
		r = p;
		p->next = head;
		i--;
	}
}
void Judge(List& head)
{
	List p, r;
	p = head;
	r = head;
	while (p)
	{
		if (p->next == NULL || p->next->next == NULL)
			printf("������ѭ��");
		p = p->next->next;
		r = r->next;
		if (p == r)
		{
			printf("������ѭ��");
			return;
		}

	}
}