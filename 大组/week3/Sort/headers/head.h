#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<stdlib.h>
#include<Windows.h>
#include<time.h>
#include <conio.h>
struct node
{
	int data;
	struct node* next;
};






void printf(int a[], int n);//���
void printf_file();//����ļ�������
void insertion_sort(struct node* head,int a[],int len);//�������
void Quick_Sort(int* a, int begin, int end);//��������
void merge_sort(int arr[], int len);//�鲢����
void CountSort(int* a, int len);//��������
void radixsort(int a[], int len);//��������

struct node* Add_From_File(struct node* head,int a[]);//���ļ��ж�ȡ����
void  SaveNode(struct  node* head);
struct node* AddNewData(struct node* head);//����������ݷ����ļ�
struct node* AddNewNode(struct node* head, struct node* newNode);
void Add(struct node* head, int a[]);//�������ж�ȡ���ݵ�����