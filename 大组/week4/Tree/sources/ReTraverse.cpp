#include"tree.h"
//�ݹ�ʵ�ֱ���
void PreorderTraverse(NodePtr T)//�������
{
	if (T == NULL)
	{
		return;
	}
	printf("%d ", T->data);
	PreorderTraverse(T->left);
	PreorderTraverse(T->right);
}


void InorderTraverse(NodePtr T)//�������
{
	if (T == NULL)
	{
		return;
	}
	PreorderTraverse(T->left);
	printf("%d ", T->data);
	PreorderTraverse(T->right);
}



void PostorderTraverse(NodePtr T)//�������
{
	if (T == NULL)
	{
		return;
	}
	PreorderTraverse(T->left);
	PreorderTraverse(T->right);
	printf("%d ", T->data);
}