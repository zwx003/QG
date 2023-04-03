#include"head.h"

void Quick_Sort(int* a, int begin, int end)
{

    if (begin > end)
        return;

    int tmp = a[begin];
    int i = begin;
    int j = end;
    while (i != j) {
        while (a[j] >= tmp && j > i)
            j--;
        while (a[i] <= tmp && j > i)
            i++;
        if (j > i) {
            int t = a[i];
            a[i] = a[j];
            a[j] = t;
        }
    }
    a[begin] = a[i];
    a[i] = tmp;
    Quick_Sort(a, begin, i - 1);
    Quick_Sort(a, i + 1, end);
    
}
