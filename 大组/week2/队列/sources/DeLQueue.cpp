#include"head.h"
//����
Status DeLQueue(LQueue* Q)
{
	node* p;
	if (Q->front == Q->rear)return FLASE;
	else
	{
		p = Q->front->next;
		Q->front->next = p->next;
		if (Q->rear == p)
		{
			Q->rear = Q->front=NULL;
		}
	}
	
	return TURE;

}