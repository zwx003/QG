#include"LinkStack.h"

void input(ElemType* e)
{
    int i;
    printf("��������Ҫ���뼸������:");
    scanf_s("%d", &i);
}


int main()
{
    ElemType data;
	PLinkStack s;
    LinkStack r;
    int i=0,k=0;
    initLStack(&s);//��ʼ��ջ
    printf("��ʼ��ջ�ɹ���");
    for (;;)
    {
        printf("\n����������Ҫ����ִ�еĳ���:");
        printf("\n=================================\n");
        printf("[A]-isEmptyLStack\n");//�ж��Ƿ�Ϊ��
        printf("[B]-getTopLStack\n");//�õ�ջ��Ԫ��
        printf("[C]-clearLStack\n");//���
        printf("[D]-destroyLStack\n");//����ջ
        printf("[E]- LStackLength\n");//���ջ����
        printf("[F]-pushLStack\n");//��ջ
        printf("[G]-popLStack\n");//��ջ
        printf("[H]-Quit\n");
        printf("=================================\n");
        switch (_getch())
        {
        case'A':
        case'a':
            if (isEmptyLStack(s))//�ж�ջ�Ƿ�Ϊ��
                printf("��ջ�ǿ�");
            else
                printf("��ջΪ��!");
            printf("\n");
            system("pause");
            system("cls");
            break;
        case'B':
        case'b':
            if (getTopLStack(s, &data))
                printf("ջ��Ԫ��=%d", data);//�õ�ջ��Ԫ��
            else printf("ջ����Ԫ��");
            printf("\n");
            system("pause");
            system("cls");
            break;
        case'C':
        case'c':
            clearLStack(s);//���ջ
            printf("����ɹ�");
            printf("\n");
            system("pause");
            system("cls");
            break;
        case'D':
        case'd':
            destroyLStack(&r);
            break;
        case'E':
        case'e':
            printf("ջ�ĳ���=%d",LStackLength(s));
            printf("\n");
            system("pause");
            system("cls");
            break;
        case'F':
        case'f':
            printf("��������Ҫ���뼸������:");
            scanf_s("%d", &i);
            for(i;i>0;i--)
            {
                scanf_s("%d", &data);
                pushLStack(s, &data);//��ջ
            }
            printf("��ջ���");
            printf("\n");
            system("pause");
            system("cls");
            break;
        case'G':
        case'g':
            k = LStackLength(s);
            for (; k > 0; k--)
            {
                popLStack(s, &data);
                printf("%d ",data);//��ջ
            }
            printf("ջ��Ԫ����ȫ��ȡ��:");
            printf("\n");
            system("pause");
            system("cls");
            break;
        case'H':
        case'h':
            return 0;
        }
        system("cls");
    }
}