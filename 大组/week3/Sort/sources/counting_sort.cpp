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
		//��ԭʼ������ֵ�ϼ�ȥmin�Ų������Խ������
		b[a[i] - min] += 1;
	}
	int j = 0;
	for (int i = 0; i < range; i++) {
		while (b[i]--) {
			//����min���ܻ�ԭ��ԭʼ����
			a[j++] = i + min;
		}
	}
	free(b);
	b = NULL;
}

