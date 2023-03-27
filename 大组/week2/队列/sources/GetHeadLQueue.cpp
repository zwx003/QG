#include"head.h"
//查看队头
Status GetHeadLQueue(LQueue* Q,char type)
{
	void* data;
	if (type == 'i' || type == 'I')
	{
		data = (void*)malloc(sizeof(int));
		data = Q->front->next->data;
		printf("%d\n", *(int*)data);
	}
	else if (type == 'f' || type == 'F')
	{
		data = (void*)malloc(sizeof(float));
		data = Q->front->next->data;
		printf("%f\n", *(float*)data);
	}
	else if (type == 'c' || type == 'C')
	{
		data = (void*)malloc(sizeof(char));
		data = Q->front->next->data;
		printf("%c\n", *(char*)data);
	}
	if (Q->front->next == NULL)return FLASE;
	else
	return TURE;
}