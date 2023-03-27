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
	Node* front;//��ͷ
	Node* rear;//��β
	int length;
}LQueue;



void InitLQueue(LQueue* Q);//������
Status IsEmptyLQueue(const LQueue* Q);//�����Ƿ�Ϊ��
int LengthLQueue(LQueue* Q);//�ӳ�
Status GetHeadLQueue(LQueue* Q,char type);//�鿴��ͷԪ��
Status EnLQueue(LQueue* Q, void* data);//���
Status DeLQueue(LQueue* Q);//����
Status TraverseLQueue(const LQueue* Q,char type);//�������в���


void get_type();
void get_int(void** data);
void get_float(void** data);
void get_char(void** data);
void show();