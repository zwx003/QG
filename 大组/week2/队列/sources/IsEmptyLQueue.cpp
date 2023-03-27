#include"head.h"
Status IsEmptyLQueue(const LQueue* Q)
{
	if (Q->front == Q->rear)
		return FLASE;
	else return TURE;
}