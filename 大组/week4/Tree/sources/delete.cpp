#include"tree.h"


NodePtr delete_data(NodePtr T, int what)
{
	NodePtr tmp = T, prev = NULL;  //记录上一个节点地址
	//查找要删除的节点位置
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



	//分三种情况删除
	if ((NULL == tmp->left) && (NULL == tmp->right))  //目标节点没有任何子节点，直接删除
	{
		if (tmp == prev->left)  //prev为目标节点的父节点地址
			prev->left = NULL;
		else if (tmp == prev->right)
			prev->right = NULL;
		free(tmp);
		printf("delete success\n");
		return T;
	}
	if ((NULL != tmp->left) && (NULL != tmp->right))   //目标节点的左右都有子节点,根据中序排序删除
	{
		NodePtr del_tmp = tmp;  //记录要删除的节点位置
		tmp = tmp->right;
		if (NULL == tmp->left)  //如果一开始就没有左节点
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
	if (NULL != tmp->left)    //目标节点只存在左子节点
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
		if (NULL == prev)   //目标节点的上一个节点为空，说明该节点为树的根结点，且只有左子节点。
		{
			T = tmp->left;
			free(tmp);
			printf("delete success\n");
			return T;
		}
	}
	if (NULL != tmp->right)   //目标节点只存在右子节点
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

