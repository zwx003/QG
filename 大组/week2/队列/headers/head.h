#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <conio.h>
#include<Windows.h>
typedef enum
{
	FLASE = 0, TURE = 1
} Status;


typedef struct node
{
	void* data;
	struct node* next;
}Node;

typedef struct Lqueue
{
	Node* front;//队头
	Node* rear;//队尾
	int length;
}LQueue;



void InitLQueue(LQueue* Q);//创建队
Status IsEmptyLQueue(const LQueue* Q);//检测队是否为空
int LengthLQueue(LQueue* Q);//队长
Status GetHeadLQueue(LQueue* Q,char type);//查看队头元素
Status EnLQueue(LQueue* Q, void* data);//入队
Status DeLQueue(LQueue* Q);//出队
Status TraverseLQueue(const LQueue* Q,char type);//遍历队列操作


void get_type();
void get_int(void** data);
void get_float(void** data);
void get_char(void** data);
void show();