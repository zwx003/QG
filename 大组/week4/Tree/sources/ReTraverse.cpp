#include"tree.h"
//递归实现遍历
void PreorderTraverse(NodePtr T)//先序遍历
{
	if (T == NULL)
	{
		return;
	}
	printf("%d ", T->data);
	PreorderTraverse(T->left);
	PreorderTraverse(T->right);
}


void InorderTraverse(NodePtr T)//中序遍历
{
	if (T == NULL)
	{
		return;
	}
	PreorderTraverse(T->left);
	printf("%d ", T->data);
	PreorderTraverse(T->right);
}



void PostorderTraverse(NodePtr T)//后序遍历
{
	if (T == NULL)
	{
		return;
	}
	PreorderTraverse(T->left);
	PreorderTraverse(T->right);
	printf("%d ", T->data);
}