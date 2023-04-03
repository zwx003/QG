#include"head.h"

void CountSort(int* a, int len)
{
	assert(a);
	int max = a[0], min = a[0];
	for (int i = 0; i < len; i++) {
		if (a[i] > max)
			max = a[i];
		if (a[i] < min)
			min = a[i];
	}
	int range = max - min + 1;
	int* b = (int*)calloc(range, sizeof(int));
	for (int i = 0; i < len; i++)
	{
		//在原始数组数值上减去min才不会出现越界问题
		b[a[i] - min] += 1;
	}
	int j = 0;
	for (int i = 0; i < range; i++) {
		while (b[i]--) {
			//加上min才能还原到原始数据
			a[j++] = i + min;
		}
	}
	free(b);
	b = NULL;
}

