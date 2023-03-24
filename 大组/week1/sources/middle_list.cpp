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
			printf("中间节点为两个节点:");
			printf("%d %d", slow->data, slow->next->data);
		}
		fast = fast->next->next;
		slow = slow->next;
	}

	printf("中间节点为:");
	printf("%d", slow->data);
}