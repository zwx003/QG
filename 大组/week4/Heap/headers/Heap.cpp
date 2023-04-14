#include"heap.h"
int main()
{
	int arr[10] = { 0 };
	int n;
	Hp hp;
	HeapInit(&hp);
	printf("请输入你要输入几个数据:(10个以内)");
	scanf_s("%d", &n);
	for (int i = 0; i <n; i++)
	{
		scanf_s("%d", &arr[i]);
		HeapPush(&hp, arr[i]);
	}
	printf("最大堆:");
	Print(&hp);

}