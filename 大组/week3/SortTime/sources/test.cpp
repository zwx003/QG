#include"head.h"
int main()
{
	clock_t start;
	clock_t diff;
	for (;;)
	{
		srand((unsigned)time(NULL));
		int* hd = (int*)malloc(sizeof(int) * 100);
		int* tt = (int*)malloc(sizeof(int) * 10000);
		int* ft = (int*)malloc(sizeof(int) * 50000);
		int* tht = (int*)malloc(sizeof(int) * 200000);
		for (int i = 0; i < 100; i++)
		{
			hd[i] = rand() % 101;
		}
		for (int i = 0; i < 10000; i++)
		{
			tt[i] = rand() % 101;
		}
		for (int i = 0; i < 50000; i++)
		{
			ft[i] = rand() % 101;
		}
		for (int i = 0; i < 200000; i++)
		{
			tht[i] = rand() % 101;
		}
		system("cls");
		printf("--------请输入你想要测试的排序--------\n");
		printf("\n====================================\n");
		printf("[A]-Insertion Sort\n");
		printf("[B]-Merge Sort\n");
		printf("[C]-Quick Sort\n");
		printf("[D]-Counting Sort\n");
		printf("[E]-Radix Sort\n");
		printf("[Q]-Quit\n");
		printf("====================================\n");
		switch (_getch())
		{
		case'A':
		case'a':
			printf("insertion_sort_time:\n");
			start = clock();
			insertion_sort(hd, 100);
			diff = clock() - start;
			printf("100:%d ms\n",diff);

			start = clock();
			insertion_sort(tt, 10000);
			diff = clock() - start;
			printf("10000:%d ms\n", diff);

			start = clock();
			insertion_sort(ft, 50000);
			diff = clock() - start;
			printf("50000:%d ms\n", diff);

			start = clock();
			insertion_sort(tht, 200000);
			diff = clock() - start;
			printf("200000:%d ms\n", diff);

			start = clock();
			for (int i = 0; i < 100000; i++)
			{
				int* t = (int*)malloc(sizeof(int) * 10);
				for (int i = 0; i < 10; i++)
				{
					t[i] = rand() % 11;
				}
				insertion_sort(t, 10);
			}
			diff = clock() - start;
			printf("10 data*100k times:%d ms\n", diff);

			system("pause");
			system("cls");
			break;
		case'B':
		case'b':
			printf("merge_sort_time:\n");
			start = clock();
			merge_sort(hd,100 );
			diff = clock() - start;
			printf("100:%d ms\n", diff);

			start = clock();
			merge_sort(tt,10000 );
			diff = clock() - start;
			printf("10000:%d ms\n", diff);

			start = clock();
			merge_sort(ft,50000 );
			diff = clock() - start;
			printf("50000:%d ms\n", diff);

			start = clock();
			merge_sort(tht,200000 );
			diff = clock() - start;
			printf("200000:%d ms\n", diff);

			start = clock();
			for (int i = 0; i < 100000; i++)
			{
				int* t = (int*)malloc(sizeof(int) * 10);
				for (int i = 0; i < 10; i++)
				{
					t[i] = rand() % 11;
				}
				merge_sort(t, 10);
			}
			diff = clock() - start;
			printf("10 data*100k times:%d ms\n", diff);

			system("pause");
			system("cls");
			break;
		case'C':
		case'c':
			printf("quick_sort_time:\n");
			start = clock();
			Quick_Sort(hd,0,99);
			diff = clock() - start;
			printf("100:%d ms\n", diff);

			start = clock();
			Quick_Sort(tt,0,9999);
			diff = clock() - start;
			printf("10000:%d ms\n", diff);

			start = clock();
			Quick_Sort(ft,0,49999);
			diff = clock() - start;
			printf("50000:%d ms\n", diff);


			printf("200000:递归次数过多，空间不足!\n");

			start = clock();
			for (int i = 0; i < 100000; i++)
			{
				int* t = (int*)malloc(sizeof(int) * 10);
				for (int i = 0; i < 10; i++)
				{
					t[i] = rand() % 11;
				}
				Quick_Sort(t,0,9);
			}
			diff = clock() - start;
			printf("10 data*100k times:%d ms\n", diff);

			system("pause");
			system("cls");
			break;
		case'D':
		case'd':
			printf("counting_sort_time:\n");
			start = clock();
			CountSort(hd,100);
			diff = clock() - start;
			printf("100:%d ms\n", diff);

			start = clock();
			CountSort(tt,10000);
			diff = clock() - start;
			printf("10000:%d ms\n", diff);

			start = clock();
			CountSort(ft,50000);
			diff = clock() - start;
			printf("50000:%d ms\n", diff);

			start = clock();
			CountSort(tht,200000);
			diff = clock() - start;
			printf("200000:%d ms\n", diff);

			start = clock();
			for (int i = 0; i < 100000; i++)
			{
				int* t = (int*)malloc(sizeof(int) * 10);
				for (int i = 0; i < 10; i++)
				{
					t[i] = rand() % 11;
				}
				CountSort(t,10);
			}
			diff = clock() - start;
			printf("10 data*100k times:%d ms\n", diff);

			system("pause");
			system("cls");

			break;
		case'E':
		case'e':
			printf("radix_sort_time:\n");
			start = clock();
			radixsort(hd,100);
			diff = clock() - start;
			printf("100:%d ms\n", diff);

			start = clock();
			radixsort(tt,10000);
			diff = clock() - start;
			printf("10000:%d ms\n", diff);

			start = clock();
			radixsort(ft,50000);
			diff = clock() - start;
			printf("50000:%d ms\n", diff);

			start = clock();
			radixsort(tht, 200000);
			diff = clock() - start;
			printf("200000:%d ms\n", diff);

			start = clock();
			for (int i = 0; i < 100000; i++)
			{
				int* t = (int*)malloc(sizeof(int) * 10);
				for (int i = 0; i < 10; i++)
				{
					t[i] = rand() % 11;
				}
				radixsort(t, 10);
			}
			diff = clock() - start;
			printf("10 data*100k times:%d ms\n", diff);

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