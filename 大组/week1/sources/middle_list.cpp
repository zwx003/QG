#include"max.h"
void middle(List& head)
{
	int n = 0;
	List fast, slow;
	fast = head;
	slow = head;
	while (fast)
	{
		if (fast->next == NULL)
		{
			printf("�м�ڵ�Ϊ�����ڵ�:");
			printf("%d %d", slow->data, slow->next->data);
		}
		fast = fast->next->next;
		slow = slow->next;
	}

	printf("�м�ڵ�Ϊ:");
	printf("%d", slow->data);
}