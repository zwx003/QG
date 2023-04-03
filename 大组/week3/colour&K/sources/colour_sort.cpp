#include<stdio.h>
#include<stdlib.h>

void swap(int* arr, int i, int j)
{
    int tmp = arr[i];
    arr[i] = arr[j];
    arr[j] = tmp;
}


void sortColors(int* arr, int arrSize)
{


    int p0 = 0;
    int p1 = 0;
    for (int i = 0; i < arrSize; i++)
    {
        if (arr[i] == 0)
        {
            swap(arr, i, p0);
            if (p0 < p1)
            {
                swap(arr, i, p1);
                p1++;
            }
            p0++;
            if (p1 <= p0)
                p1++;
        }
        else if (arr[i] == 1)
        {
            swap(arr, i, p1);
            p1++;
        }
    }
}


int FindK(int* a,int len,int k)
{
    int n = 0, top = len;
    while (n < top)
    {
        int left = n, right = n, index = a[n];
        while (right < top)
        {
            if (a[right] < index)
            {
                left++;
                int temp = a[left];
                a[left] = a[right];
                a[right] = temp;

            }
            right++;
        }
        a[n] = a[left];
        a[left] = index;

        if (left + 1 < k)
            n = left + 1;
        else if (left + 1 > k)
            top = left;
        else
            return a[left];
    }
    printf("ERROR");
    return 0;
}






int main()
{
	int arr[20] = { 1,2,1,2,0,0,2,1,2,0,0,1,1,2,1,2,0,2,1,0 };
    printf("原数组:");
    for (int i = 0; i < 20; i++)
    {
        printf("%d ", arr[i]);
    }
    int b[10] = { 1,23,43,23,2,12,23,4,23,21 };
    sortColors(arr, 20);
    printf("\n排序后:");
    for (int i = 0; i < 20; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    int k;
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", b[i]);
    }
    printf("\n");
    printf("请输入你想要查找的k小元素，(1<=K<=10):");
    scanf_s("%d", &k);
    printf("%d", FindK(b, 10,k));
}