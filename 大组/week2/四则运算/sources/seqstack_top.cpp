#include"head.h"
pnode* seqstack_top(phead* istack)//��ȡջ��Ԫ�ص����ݽڵ�
{
    if (istack->size != 0)//ջ��Ϊ��
    {
        return istack->top;//����ջ�������ݽڵ�
    }
    return NULL;
}