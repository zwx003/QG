#include"tree.h"
int main()
{
	NodePtr T=NULL ;
	int data;
	int what;
	int ret;
	for (;;)
	{
		system("cls");
		printf("\n==================================\n");
		printf("[A]-Insert Node\n");
		printf("[B]-Search Data\n");
		printf("[C]-Delete Data\n");
		printf("[D]-ReTraverse && Print\n");
		printf("[E]-StackPreorderTraverse && Print\n");
		printf("[F]-LeveTraverse && Print\n");
		printf("[Q]-Quit\n");
		printf("==================================\n");
		switch (_getch())
		{
		case'A':
		case'a':
			printf("please input int data:");
			ret = scanf_s("%d", &data);
			if (ret == 1)
			{
				insertBTree(T, data);
			}
			else 
			{ 
				printf("wrong input\n");
				printf("please give me an integer\n");
				scanf_s("%*[^\n]%*c");

			}
			system("pause");
			system("cls");
			break;
		case'B':
		case'b':
			printf("what data do you want to search for:");
			ret = scanf_s("%d", &what);
			if (ret==1)
			{
				Seek(T, what);
			}
			else
			{ 
				printf("wrong input\n");
				printf("please give me an integer\n");
				scanf_s("%*[^\n]%*c");
			}
			system("pause");
			system("cls");
			break;
		case'C':
		case'c':
			printf("what data do you want to delete:");
			ret = scanf_s("%d", &what);
			if (ret == 1)
			{
				T=delete_data(T, what);
			}
			else
			{
				printf("wrong input\n");
				printf("please give me an integer\n");
				scanf_s("%*[^\n]%*c");
			}
			system("pause");
			break;
		case'D':
		case'd':
			printf("先序遍历: ");
			PreorderTraverse(T);
			printf("\n");
			printf("中序遍历: ");
			InorderTraverse(T);
			printf("\n");
			printf("后序遍历: ");
			PostorderTraverse(T);
			printf("\n");
			system("pause");
			system("cls");
			break;
		case'E':
		case'e':
			printf("非递归先序遍历: ");
			StackPreorderTraverse(T);
			printf("\n");
			printf("非递归中序遍历: ");
			StackInorderTraverse(T);
			printf("\n");
			printf("非递归后序遍历: ");
			StackPostorderTraverse(T);
			printf("\n");
			system("pause");
			system("cls");
			break;
		case'F':
		case'f':
			printf("层序遍历:");
			LeveTraverse(T);
			printf("\n");
			system("pause");
			system("cls");
			break;
		case'Q':
		case'q':
			return 0;

		}
	}
}