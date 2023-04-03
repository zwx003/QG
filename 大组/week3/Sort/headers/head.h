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






void printf(int a[], int n);//输出
void printf_file();//输出文件的数据
void insertion_sort(struct node* head,int a[],int len);//插空排序
void Quick_Sort(int* a, int begin, int end);//快速排序
void merge_sort(int arr[], int len);//归并排序
void CountSort(int* a, int len);//计数排序
void radixsort(int a[], int len);//基数排序

struct node* Add_From_File(struct node* head,int a[]);//从文件中读取数据
void  SaveNode(struct  node* head);
struct node* AddNewData(struct node* head);//生成随机数据放入文件
struct node* AddNewNode(struct node* head, struct node* newNode);
void Add(struct node* head, int a[]);//从链表中读取数据到数组