#include"head.h"
void seqstack_push(phead* istack, char x)//ѹջ(��ջ)
{
    pnode* temp;//����ѹջ�����ݽڵ�
    temp = (pnode*)malloc(sizeof(pnode));
    temp->data = x;//���������
    temp->next = istack->top;//����ջ�������ݽڵ�
    istack->top = temp;//�䵱ջ��
    istack->size++;//��¼ջ��С�ı仯
    return;
}