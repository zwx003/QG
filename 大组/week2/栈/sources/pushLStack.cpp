#include"LinkStack.h"
//��ջ


Status pushLStack(PLinkStack s, ElemType *data) 
{
	LinkStackPtr p = new StackNode;
	p->data = *data;
	p->next = s->top;
	s->top = p;
	s->count++;
	return SUCCESS;
}