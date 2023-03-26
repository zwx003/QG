#include"LinkStack.h"
//Çå¿ÕÕ»
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