#include"LinkStack.h"
//���ջ��Ԫ��
Status getTopLStack(LinkStack* r, ElemType* e)
{
	if (r->top == NULL)return ERROR;

	else
		e = &r->top->data;
	return SUCCESS;
}