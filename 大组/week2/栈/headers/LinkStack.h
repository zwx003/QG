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


//链栈
Status initLStack(PLinkStack* s);//初始化栈
Status isEmptyLStack(LinkStack* r);//判断栈是否为空
Status getTopLStack(LinkStack* r, ElemType* e);//得到栈顶元素
Status clearLStack(PLinkStack s);//清空栈
Status destroyLStack(LinkStack* r);//销毁栈
int LStackLength(PLinkStack s);//检测栈长度
Status pushLStack(PLinkStack s, ElemType *data);//入栈
Status popLStack(PLinkStack s, ElemType* data);//出栈


#endif 
