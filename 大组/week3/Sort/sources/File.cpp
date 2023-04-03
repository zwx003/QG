#include"head.h"
void  SaveNode(struct  node* head)
{
	struct  node* p;
	if (head == NULL) {
		printf("ERROR\nData is NULL\n");
		return;
	}
	FILE* fp;
	fopen_s(&fp, "data.txt", "w");
	if (fp == NULL) {
		printf("error to write !");
		return;
	}
	p = head;
	do {
		fprintf(fp, "%d\n", p->data);
		p = p->next;
	} while (p != NULL);
	printf("save node datas to <data.txt>....Ok\n");
	fclose(fp);

}

struct node* AddNewData(struct node* head)
{
	struct node* p=NULL;
	while (head != NULL)
	{
		p = head;
		head = p->next;
		free(p);
	}
	srand((unsigned)time(NULL));
	for (int i=0;i<100;i++)
	{
		p = (struct node*)malloc(sizeof(struct node));
		int n = rand() % 101;
		p->data = n;
		head = AddNewNode(head, p);
	}
	SaveNode(head);
	return head;
}

struct node* AddNewNode(struct node* head, struct node* newNode)
{
	struct node* p = head;
	if (head == NULL) {
		head = newNode;
		newNode->next = NULL;
		return head;
	}
	while (p->next != NULL) {
		p = p->next;
	}
	p->next = newNode;
	newNode->next = NULL;
	return head;
}

void Add(struct node*head,int a[])
{
	if (head == NULL)
	{
		printf("No data!");
		return;
	}
	struct node* p=head;
	int i;
	for (i = 0; p != NULL; i++)
	{
		a[i] = p->data;
		p = p->next;
	}
	return;
}

struct node* Add_From_File(struct node* head,int a[])
{
	struct node* p=NULL;
	FILE* fp;
	fopen_s(&fp, "data.txt", "r");
	if (fp == NULL) 
	{
		printf("Open file error!  can not find the file: data.txt\n\n");
		system("pause");
		return head;
	}
	int i = 0;
	while (fscanf_s(fp, "%d", &a[i]) != EOF) //读取数据到数组，直到文件结尾(返回EOF)
		i++;
	p = (struct node*)malloc(sizeof(struct node));
	p->data = 1;
	head = AddNewNode(head, p);
	fclose(fp);
	return head;
}