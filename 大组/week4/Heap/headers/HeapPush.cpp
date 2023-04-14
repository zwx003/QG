#include"heap.h"

void HeapPush(Hp* php, HeapDataType x)
{
	assert(php);
	if (php->size == php->capacity)
	{
		int newcapacity = php->capacity == 0 ? 4 : 2 * php->capacity;
		HeapDataType* ptr = (HeapDataType*)realloc(php->a, sizeof(HeapDataType) * newcapacity);
		if (ptr == NULL)
		{
			perror("realloc fali::");
			exit(-1);
		}
		php->a = ptr;
		php->capacity = newcapacity;
	}

	php->a[php->size] = x;
	php->size++;
	AdjustUp(php->a, php->size - 1);
}

