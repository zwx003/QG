#include"head.h"
int maxbit(int a[], int len)
{
    int maxData = a[0];
    for (int i = 1; i < len; ++i)
    {
        if (maxData < a[i])
            maxData = a[i];
    }
    int d = 1;
    int p = 10;
    while (maxData >= p)
    {
        maxData /= 10;
        ++d;
    }
    return d;

}
void radixsort(int a[], int len)
{
    int d = maxbit(a, len);
    int* tmp = new int[len];
    int* count = new int[10];
    int i, j, k;
    int radix = 1;
    for (i = 1; i <= d; i++)
    {
        for (j = 0; j < 10; j++)
            count[j] = 0;
        for (j = 0; j < len; j++)
        {
            k = (a[j] / radix) % 10;
            count[k]++;
        }
        for (j = 1; j < 10; j++)
            count[j] = count[j - 1] + count[j];
        for (j = len - 1; j >= 0; j--)
        {
            k = (a[j] / radix) % 10;
            tmp[count[k] - 1] = a[j];
            count[k]--;
        }
        for (j = 0; j < len; j++)
            a[j] = tmp[j];
        radix = radix * 10;
    }
    delete[]tmp;
    delete[]count;
}