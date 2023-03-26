//ÅÐ¶ÏÕ»ÊÇ·ñÎª¿Õ
#include"LinkStack.h"

Status isEmptyLStack(LinkStack* r)
{
	if (r->top == NULL)
		return ERROR;  //¿Õ
	else return SUCCESS;

}