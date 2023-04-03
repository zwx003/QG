#include"head.h"
void insertion_sort(int a[], int len)
{
	for (int i = 0; i < len; i++)//
	{
		int k = a[i];
		int len = i;
		while (len > 0 && k < a[len - 1])
		{
			a[len] = a[len - 1];
			len--;
		}
		a[len] = k;

	}
}