#include"head.h"
//��ʼ��
void InitLQueue(LQueue* Q)
{
	Q->rear = Q->front=new node;
	Q->front->next = NULL;
	Q->length = 0;
	printf("��ʼ���ɹ�!\n");
 }