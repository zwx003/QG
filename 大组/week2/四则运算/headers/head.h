#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct node
{
    char data;//数据
    struct node* next;//指针
}pnode;

typedef struct seqstack
{
    int size;
    pnode* top;
}phead;

phead* initstack();//创建栈
int isempty(phead* istack);//判断栈为空
pnode* seqstack_top(phead* istack);//获取栈顶元素的数据节点
pnode* seqstack_pop(phead* istack);//弹出栈顶元素
void seqstack_push(phead* istack, char x);//压栈

int transform(char str[]);//中缀转后缀
void char_put(char ch);
int priority(char ch);
int is_number(char ch);
int is_operator(char ch);
int is_left(char ch);
int is_right(char ch);
