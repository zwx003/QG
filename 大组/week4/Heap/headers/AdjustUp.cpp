#include"heap.h"
//向上调整
void AdjustUp(HeapDataType* a, int child)
{
	assert(a);
	int parent = (child - 1) / 2;
	while (child > 0)
	{
		if (a[parent] < a[child])
		{
			Swap(&a[child], &a[parent]);
			child = parent;
			parent = (child - 1) / 2;
		}
		else
		{
			break;
		}
	}
}




void Swap(HeapDataType* a, HeapDataType* b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
