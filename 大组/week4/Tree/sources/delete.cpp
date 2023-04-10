#include"tree.h"


NodePtr delete_data(NodePtr T, int what)
{
	NodePtr tmp = T, prev = NULL;  //��¼��һ���ڵ��ַ
	//����Ҫɾ���Ľڵ�λ��
	while (1)
	{
		while ((tmp->data > what) && (NULL != tmp->left))
		{
			prev = tmp;
			tmp = tmp->left;
		}
		while ((tmp->data < what) && (NULL != tmp->right))
		{
			prev = tmp;
			tmp = tmp->right;
		}
		if ((tmp->data != what) && (NULL == tmp->left) && (NULL == tmp->right))
		{
			printf("no data!\n");
			return T;
		}
		if (tmp->data == what)
			break;
	}



	//���������ɾ��
	if ((NULL == tmp->left) && (NULL == tmp->right))  //Ŀ��ڵ�û���κ��ӽڵ㣬ֱ��ɾ��
	{
		if (tmp == prev->left)  //prevΪĿ��ڵ�ĸ��ڵ��ַ
			prev->left = NULL;
		else if (tmp == prev->right)
			prev->right = NULL;
		free(tmp);
		printf("delete success\n");
		return T;
	}
	if ((NULL != tmp->left) && (NULL != tmp->right))   //Ŀ��ڵ�����Ҷ����ӽڵ�,������������ɾ��
	{
		NodePtr del_tmp = tmp;  //��¼Ҫɾ���Ľڵ�λ��
		tmp = tmp->right;
		if (NULL == tmp->left)  //���һ��ʼ��û����ڵ�
		{
			del_tmp->data = tmp->data;
			if (NULL == tmp->right)
				del_tmp->right = NULL;
			else
				del_tmp->right = tmp->right;
			free(tmp);
			printf("delete success\n");
			return T;
		}
		while (NULL != tmp->left)
		{
			prev = tmp;
			tmp = tmp->left;
		}
		if (NULL == tmp->right)
			prev->left = NULL;
		if (NULL != tmp->right)
			prev->left = tmp->right;
		del_tmp->data = tmp->data;
		free(tmp);
		printf("delete success\n");
		return T;
	}
	if (NULL != tmp->left)    //Ŀ��ڵ�ֻ�������ӽڵ�
	{
		if (NULL != prev)
		{
			if (tmp == prev->left)
				prev->left = tmp->left;
			else if (tmp == prev->right)
				prev->right = tmp->left;
			free(tmp);
			printf("delete success\n");
			return T;
		}
		if (NULL == prev)   //Ŀ��ڵ����һ���ڵ�Ϊ�գ�˵���ýڵ�Ϊ���ĸ���㣬��ֻ�����ӽڵ㡣
		{
			T = tmp->left;
			free(tmp);
			printf("delete success\n");
			return T;
		}
	}
	if (NULL != tmp->right)   //Ŀ��ڵ�ֻ�������ӽڵ�
	{
		if (NULL != prev)
		{
			if (tmp == prev->left)
				prev->left = tmp->right;
			else if (tmp == prev->right)
				prev->right = tmp->right;
			free(tmp);
			printf("delete success\n");
			return T;
		}
		if (NULL == prev)
		{
			T = tmp->right;
			free(tmp);
			printf("delete success\n");
			return T;
		}
	}
}

