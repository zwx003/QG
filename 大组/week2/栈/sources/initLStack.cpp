#include"LinkStack.h"
//��ʼ����ջ
Status initLStack(PLinkStack* s)
{
	*s = new LinkStack;
	(*s)->top = NULL;
	(*s)->count = 0;
	return SUCCESS;
}