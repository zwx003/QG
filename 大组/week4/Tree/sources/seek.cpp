#include"tree.h"
void Seek(NodePtr& T, int what)
{
	if (T == NULL)
	{
		printf("no data!\n");
		return;
	}
	if (what == T->data)
	{
		printf("%d already exists��\n", what);
		return;
	}

	//�ݹ���ҽڵ�
	if (what > T->data)
	{

		Seek(T->right, what);
		return ;
	}
	if (what < T->data)
	{
		Seek(T->left, what);
		return ;
	}

	printf("no data!\n");
	return;
}