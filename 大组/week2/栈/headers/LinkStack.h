#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED
#include<stdio.h>
#include<stdlib.h>
#include <conio.h>
typedef enum Status
{
	ERROR = 0,
	SUCCESS = 1
} Status;

typedef int ElemType;

typedef  struct StackNode
{
	ElemType data;
	struct StackNode* next;
}StackNode, * LinkStackPtr;

typedef  struct  LinkStack
{
	LinkStackPtr top;
	int	count;
}*PLinkStack;


//��ջ
Status initLStack(PLinkStack* s);//��ʼ��ջ
Status isEmptyLStack(LinkStack* r);//�ж�ջ�Ƿ�Ϊ��
Status getTopLStack(LinkStack* r, ElemType* e);//�õ�ջ��Ԫ��
Status clearLStack(PLinkStack s);//���ջ
Status destroyLStack(LinkStack* r);//����ջ
int LStackLength(PLinkStack s);//���ջ����
Status pushLStack(PLinkStack s, ElemType *data);//��ջ
Status popLStack(PLinkStack s, ElemType* data);//��ջ


#endif 
