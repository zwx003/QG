#include"LinkStack.h"
//³õÊ¼»¯Á´Õ»
Status initLStack(PLinkStack* s)
{
	*s = new LinkStack;
	(*s)->top = NULL;
	(*s)->count = 0;
	return SUCCESS;
}