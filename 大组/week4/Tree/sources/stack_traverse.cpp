#include"tree.h"
//先
void StackPreorderTraverse(NodePtr T)
{
	SqStack* S;
	S = InitStack();
	Node* p;
	p = T;
	while (p || !StackEmpty(*S))
	{
		if (p)
		{
			printf("%d ", p->data);
			Push(S, p);
			p = p->left;
		}
		else
		{
			Pop(S, &p);
			p = p->right;
		}
	}

}

//中
void StackInorderTraverse(NodePtr T)
{
	SqStack* S;
	S = InitStack();
	Node* p;
	p = T;
	while (p || !StackEmpty(*S))
	{
		if (p)
		{
			Push(S, p);
			p = p->left;
		}
		else
		{
			Pop(S, &p);
			printf("%d ", p->data);
			p = p->right;
		}
	}

}

//后
void StackPostorderTraverse(NodePtr T)
{
	SqStack* S;
	S = InitStack();
	Node* p;
	p = T;
	char tag[Maxsize] = { '0' };
	while (p || !StackEmpty(*S))
	{
		if (p)
		{
			Push(S, p);
			tag[S->top] = '0';//标志结点是否遍历右子树
			p = p->left;
		}
		else
		{
			while (tag[S->top] == '1') {
				Pop(S, &p);
				printf("%d ", p->data);
			}
			if (S->top == -1) break;
			Pop(S, &p);
			Push(S, p);
			p = p->right;
			tag[S->top] = '1';
		}


	}

}





/*栈的函数*/



Stack InitStack()
{
	Stack S;
	S = (Stack)malloc(sizeof(SqStack));
	S->top = -1;
	return S;
}

//判断栈是否为空
int StackEmpty(SqStack S)
{
	if (S.top == -1)return 1;
	else return 0;
}




//入栈
void Push(Stack S, NodePtr p)
{
	S->top++;
	S->data[S->top] = p;
}
//出栈
void Pop(Stack S, NodePtr* p)
{
	*p = S->data[S->top];
	S->top--;
}
