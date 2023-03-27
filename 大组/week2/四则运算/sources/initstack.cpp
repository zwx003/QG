#include"head.h"
phead* initstack()//´´½¨Õ»
{
    phead* istack = new phead;
    if (istack != NULL)
    {
        istack->top = NULL;
        istack->size = 0;
    }
    return istack;
}