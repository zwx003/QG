#include"LinkStack.h"
//���ջ
Status clearLStack(PLinkStack s)
{
	LinkStackPtr p;
		while (s->top)
		{
			p = s->top;
			s->top = s->top->next;
			s->count--;
			free(p);
		}
		return SUCCESS;
}