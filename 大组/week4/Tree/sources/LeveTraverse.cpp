#include"tree.h"

//²ãÐò±éÀú
void LeveTraverse(NodePtr T)
{
	NodePtr Q[Maxsize];
	int front, rear;
	if (T == NULL)return;
	front = -1;
	rear = 0;
	Q[rear] = T;
	while (front != rear)
	{
		front++;
		printf("%d ", Q[front]->data);
		if (Q[front]->left != NULL)
		{
			rear++;
			Q[rear] = Q[front]->left;
		}
		if (Q[front]->right != NULL)
		{
			rear++;
			Q[rear] = Q[front]->right;
		}
	}
}
