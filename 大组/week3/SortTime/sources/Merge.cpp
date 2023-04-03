#include"head.h"
void merge(int a[], int tempArr[], int left, int mid, int right)
{
	//�����ߵ�һ��Ԫ��
	int l_pos = left;
	//����ұߵ�һ��Ԫ��
	int r_pos = mid + 1;
	//��ʱ�����±�
	int pos = left;
	while (l_pos <= mid && r_pos <= right)
	{
		//���ң�С�ĸ�ֵ����ʱ����
		tempArr[pos++] = (a[l_pos] < a[r_pos] ? a[l_pos++] : a[r_pos++]);
	}
	while (l_pos <= mid)
	{
		tempArr[pos++] = a[l_pos++];
	}
	while (r_pos <= right)
	{
		tempArr[pos++] = a[r_pos++];
	}
	while (left <= right)
	{
		a[left] = tempArr[left];
		left++;
	}


}

void msort(int a[], int tempArr[], int left, int right)
{
	if (left < right)
	{
		int mid = (right - left) / 2 + left;//�м��
		msort(a, tempArr, left, mid);
		msort(a, tempArr, mid + 1, right);
		merge(a, tempArr, left, mid, right);//�ϲ�
	}
}



void merge_sort(int a[], int len)
{

	int* tempArr = (int*)malloc(len * sizeof(int));
	if (tempArr)
	{
		msort(a, tempArr, 0, len - 1);
		free(tempArr);
	}
	else
	{
		printf("ERROR:failed to allocate memory");
	}
}