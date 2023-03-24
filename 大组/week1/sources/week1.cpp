#include"week1.h"
void output(List& head)
{
    List p = head->next;
    if (p == NULL)
        return;
    while (p)
    {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}

int main()
{
    List head;
    for (;;)
    {
        printf("\n请输入你想要进行执行的程序:");
        printf("\n=================================\n");
        printf("[A]-inverted_linked_list\n");
        printf("[B]-TwoWayLinkList\n");
        printf("[C]-Circle_List_Judge\n");
        printf("[D]-middle_list\n");
        printf("[E]-parity_transformation\n");
        printf("[F]-SinglyLinkedList\n");
        printf("[G]-Quit\n");
        printf("=================================\n");
        switch (_getch())
        {
        case'A':
        case'a':
            inverted_linked_list(head);
            output(head);
            break;
        case'B':
        case'b':
            TwoWayLinkList(head);
            break;
        case'C':
        case'c':
            Circle_List_Judge(head);
            Judge(head);
            break;
        case'D':
        case'd':
            inverted_linked_list(head);
            middle(head);
            break;
        case'E':
        case'e':
            inverted_linked_list(head);
            transformation(head);
            output(head);
            break;
        case'F':
        case'f':
            SinglyLinkedList(head);
            Judge(head);
            break;
        case'G':
        case'g':
            return 0;
        }
    }
}

