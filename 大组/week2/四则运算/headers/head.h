#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct node
{
    char data;//����
    struct node* next;//ָ��
}pnode;

typedef struct seqstack
{
    int size;
    pnode* top;
}phead;

phead* initstack();//����ջ
int isempty(phead* istack);//�ж�ջΪ��
pnode* seqstack_top(phead* istack);//��ȡջ��Ԫ�ص����ݽڵ�
pnode* seqstack_pop(phead* istack);//����ջ��Ԫ��
void seqstack_push(phead* istack, char x);//ѹջ

int transform(char str[]);//��׺ת��׺
void char_put(char ch);
int priority(char ch);
int is_number(char ch);
int is_operator(char ch);
int is_left(char ch);
int is_right(char ch);
