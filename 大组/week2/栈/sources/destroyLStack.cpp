#include"LinkStack.h"
//����ջ
Status destroyLStack(LinkStack* r)
{
	clearLStack(r);
	free(r);
	return SUCCESS;
}