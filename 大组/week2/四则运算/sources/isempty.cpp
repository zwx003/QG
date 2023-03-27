#include"head.h"
int isempty(phead* istack)//ÅÐ¶ÏÕ»Îª¿Õ
{
    if (istack->top == NULL)
    {
        return 1;//Õ»Îª¿Õ
    }
    return 0;//Õ»²»Îª¿Õ
}