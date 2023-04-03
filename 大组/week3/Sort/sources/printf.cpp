#include"head.h"
void printf(int a[], int n)
{

	for (int i = 0; i<n; i++)
	{
		printf("%d ", a[i]);
	}
	putchar('\n');
}


void printf_file()
{
	int num[100];
	FILE* fp;
	fopen_s(&fp, "data.txt", "r");
	int i = 0;
	if (fp == NULL)
	{
		printf("no data!");
		return;
	}
	while (fscanf_s(fp, "%d", &num[i]) != EOF) //读取数据到数组，直到文件结尾(返回EOF)
	{
		printf("%d ", num[i]);
		i++;
	}
	fclose(fp);
	return;
}