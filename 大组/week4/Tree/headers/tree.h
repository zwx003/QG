#include<stdio.h>
#include<stdlib.h>
#include <conio.h>
#include<Windows.h>
#define Maxsize 30


typedef struct Node//二叉树数据结构
{
	int data;
	struct Node* left;
	struct Node* right;
}*NodePtr;


//链栈

typedef  struct  SqStack
{
	NodePtr data[Maxsize];
	int top;
}*Stack;





void Seek(NodePtr& T, int what);//查找数据
void insertBTree(NodePtr &T,int data);//插入数据
NodePtr delete_data(NodePtr T, int what);//删除数据
void PreorderTraverse(NodePtr T);//递归先序遍历
void InorderTraverse(NodePtr T);//递归中序遍历
void PostorderTraverse(NodePtr T);//递归后序遍历



/*非递归遍历*/
Stack InitStack();//建
void Pop(Stack S, NodePtr* p);//出
void Push(Stack S, NodePtr p);//入
int StackEmpty(SqStack S);
void StackPreorderTraverse(NodePtr T);//先
void StackInorderTraverse(NodePtr T);//中
void StackPostorderTraverse(NodePtr T);//后


void LeveTraverse(NodePtr T);//层序遍历