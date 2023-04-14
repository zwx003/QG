#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef int HeapDataType;

typedef struct Heap
{
	HeapDataType* a;
	int size;
	int capacity;
}Hp;



void HeapInit(Hp* php);//��ʼ��
void HeapPush(Hp* php, HeapDataType x);//����
void Swap(HeapDataType* a, HeapDataType* b);
void AdjustUp(HeapDataType* a, int child);
void Print(Hp* php);