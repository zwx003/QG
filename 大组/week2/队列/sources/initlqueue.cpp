#include"head.h"
//初始化
void InitLQueue(LQueue* Q)
{
	Q->rear = Q->front=new node;
	Q->front->next = NULL;
	Q->length = 0;
	printf("初始化成功!\n");
 }