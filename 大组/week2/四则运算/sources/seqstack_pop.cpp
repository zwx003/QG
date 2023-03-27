#include"head.h"
pnode* seqstack_pop(phead* istack)//弹出栈顶元素
{
    if (isempty(istack) == 0)//栈不为空
    {
        pnode* account = istack->top;//记录栈顶的数据节点
        istack->top = istack->top->next;//指向栈顶下一个元素
        istack->size--;//记录栈的大小
        return account;//返回弹出的数据节点
    }
    return NULL;
}