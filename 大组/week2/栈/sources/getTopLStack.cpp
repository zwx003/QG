#include"LinkStack.h"
//»ñµÃÕ»¶¥ÔªËØ
Status getTopLStack(LinkStack* r, ElemType* e)
{
	if (r->top == NULL)return ERROR;

	else
		e = &r->top->data;
	return SUCCESS;
}