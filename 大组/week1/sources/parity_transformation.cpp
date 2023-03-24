#include"max.h"
void* transformation(List& head)
{
	List p = head, r = head->next;//0 1 2 3 head 是0，不储存数据
	while (r && r->next)
	{
		List next = r->next;
		p->next = next;//0->2
		r->next = next->next;//1->3
		next->next = r;//2->1
		p = r;
		r = r->next;
	}
	return head->next;
}