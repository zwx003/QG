#include"head.h"
pnode* seqstack_pop(phead* istack)//����ջ��Ԫ��
{
    if (isempty(istack) == 0)//ջ��Ϊ��
    {
        pnode* account = istack->top;//��¼ջ�������ݽڵ�
        istack->top = istack->top->next;//ָ��ջ����һ��Ԫ��
        istack->size--;//��¼ջ�Ĵ�С
        return account;//���ص��������ݽڵ�
    }
    return NULL;
}