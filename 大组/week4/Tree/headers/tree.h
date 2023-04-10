#include<stdio.h>
#include<stdlib.h>
#include <conio.h>
#include<Windows.h>
#define Maxsize 30


typedef struct Node//���������ݽṹ
{
	int data;
	struct Node* left;
	struct Node* right;
}*NodePtr;


//��ջ

typedef  struct  SqStack
{
	NodePtr data[Maxsize];
	int top;
}*Stack;





void Seek(NodePtr& T, int what);//��������
void insertBTree(NodePtr &T,int data);//��������
NodePtr delete_data(NodePtr T, int what);//ɾ������
void PreorderTraverse(NodePtr T);//�ݹ��������
void InorderTraverse(NodePtr T);//�ݹ��������
void PostorderTraverse(NodePtr T);//�ݹ�������



/*�ǵݹ����*/
Stack InitStack();//��
void Pop(Stack S, NodePtr* p);//��
void Push(Stack S, NodePtr p);//��
int StackEmpty(SqStack S);
void StackPreorderTraverse(NodePtr T);//��
void StackInorderTraverse(NodePtr T);//��
void StackPostorderTraverse(NodePtr T);//��


void LeveTraverse(NodePtr T);//�������