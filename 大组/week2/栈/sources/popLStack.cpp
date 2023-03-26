#include"LinkStack.h"
//³öÕ»
Status popLStack(PLinkStack s, ElemType* data)
{
	LinkStackPtr p;
	if (s->top==NULL)
		return ERROR;
	p = s->top;
	*data = p->data;
	s->top = s->top->next;
	s->count--;
	free(p);
	return SUCCESS;
}