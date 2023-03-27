#include"head.h"
//±éÀú
Status TraverseLQueue(const LQueue* Q,char type )
{
	if (Q->front == Q->rear)
		printf("ERROR\n");
		return FLASE;
	node* p = Q->front->next;
	while (p != NULL)
	{
		if (type == 'i' || type == 'I')
		{
			printf("%d\n", *(int*)p->data);

		}
		else if (type == 'f' || type == 'F')
			printf("%f\n", *(float*)p->data);
		else if (type == 'c' || type == 'C')
			printf("%c\n", *(char*)p->data);
		p = p->next;
	}
	return TURE;
}