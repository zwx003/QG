#include"tree.h"

void insertBTree(NodePtr&T,int data)
{
	if (T == NULL)//�����ڵ�
	{
		T = new Node;
		if (!T)
		{
			printf("ERROR");
			return ;
		}
		T->data = data;
		T->left = NULL;
		T->right = NULL;
		printf("insert data success\n");
		return ;
	}
	if (data == T->data)
	{
		printf("%d already exists��\n", data);
		return ;
	}
	if (data > T->data)//�õݹ鴴���ڵ�
	{
		insertBTree(T->right, data);
		return ;
	}
	if (data < T->data)
	{
		insertBTree(T->left, data);
		return ;
	}

}