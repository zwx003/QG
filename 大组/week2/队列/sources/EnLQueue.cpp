#include"head.h"
//���
Status EnLQueue(LQueue* Q, void* data)
{
	node* p = (node*)malloc(sizeof(void*));
	p->data = data;
	p->next = NULL;
	Q->rear->next = p;
	Q->rear = p;
	Q->length++;
	return TURE;
}