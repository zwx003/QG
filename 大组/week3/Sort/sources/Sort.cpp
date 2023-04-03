#include"head.h"
int a[100];
int main()
{
	struct node* head = NULL;
	for (;;)
	{
		head=Add_From_File(head,a);
		system("cls");
		printf_file();
		printf("\n====================================\n");
		printf("[A]-Generate Random Data\n");
		printf("[B]-Insertion Sort & Print Data\n");
		printf("[C]-Merge Sort & Print Data\n");
		printf("[D]-Quick Sort\n");
		printf("[E]-Counting Sort\n");
		printf("[F]-Radix Sort\n");
		printf("[Q]-Quit\n");
		printf("====================================\n");
		switch (_getch())
		{
		case'A':
		case'a':
			head=AddNewData(head);
			system("pause");
			system("cls");
			break;
		case'B':
		case'b':
			insertion_sort(head, a, 100);
			printf(a, 100);
			system("pause");
			system("cls");
			break;
		case'C':
		case'c':
			merge_sort(a, 100);
			printf(a, 100);
			system("pause");
			system("cls");
			break;
		case'D':
		case'd':
			Quick_Sort(a, 0, 99);
			printf(a, 100);
			system("pause");
			system("cls");
			break;
		case'E':
		case'e':
			CountSort(a, 100);
			printf(a, 100);
			system("pause");
			system("cls");
			break;
		case'F':
		case'f':
			radixsort(a, 100);
			printf(a, 100);
			system("pause");
			system("cls");
			break;
		case'Q':
		case'q':
			return 0;
		}
	}
	return 0;
}