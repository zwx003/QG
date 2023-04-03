#include"head.h"
void merge(int a[], int tempArr[], int left, int mid, int right)
{
	//标记左边第一个元素
	int l_pos = left;
	//标记右边第一个元素
	int r_pos = mid + 1;
	//临时数组下标
	int pos = left;
	while (l_pos <= mid && r_pos <= right)
	{
		//左、右，小的赋值给临时数组
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
		int mid = (right - left) / 2 + left;//中间点
		msort(a, tempArr, left, mid);
		msort(a, tempArr, mid + 1, right);
		merge(a, tempArr, left, mid, right);//合并
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