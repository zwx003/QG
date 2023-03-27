#include"head.h"
pnode* seqstack_top(phead* istack)//获取栈顶元素的数据节点
{
    if (istack->size != 0)//栈不为空
    {
        return istack->top;//返回栈顶的数据节点
    }
    return NULL;
}