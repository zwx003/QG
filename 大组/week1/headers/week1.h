#pragma once
#include<stdio.h>
#include <conio.h>

typedef struct Node {
	struct Node* front;
	int data;
	struct Node* next;
}Node,*List;

void inverted_linked_list(List& head);
void TwoWayLinkList(List& head);
void Circle_List_Judge(List& head);
void Judge(List& head);
void middle(List& head);
void* transformation(List& head);
void SinglyLinkedList(List& head);
