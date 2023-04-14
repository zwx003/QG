#include"heap.h"

void HeapInit(Hp* php)
{

	assert(php);
	php->a = NULL;
	php->capacity = php->size = 0;
}