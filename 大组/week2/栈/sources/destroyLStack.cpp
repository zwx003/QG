#include"LinkStack.h"
//Ïú»ÙÕ»
Status destroyLStack(LinkStack* r)
{
	clearLStack(r);
	free(r);
	return SUCCESS;
}