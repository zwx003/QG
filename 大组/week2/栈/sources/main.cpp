#include"LinkStack.h"

void input(ElemType* e)
{
    int i;
    printf("请输入你要输入几个数据:");
    scanf_s("%d", &i);
}


int main()
{
    ElemType data;
	PLinkStack s;
    LinkStack r;
    int i=0,k=0;
    initLStack(&s);//初始化栈
    printf("初始化栈成功！");
    for (;;)
    {
        printf("\n请输入你想要进行执行的程序:");
        printf("\n=================================\n");
        printf("[A]-isEmptyLStack\n");//判断是否为空
        printf("[B]-getTopLStack\n");//得到栈顶元素
        printf("[C]-clearLStack\n");//清除
        printf("[D]-destroyLStack\n");//销毁栈
        printf("[E]- LStackLength\n");//检测栈长度
        printf("[F]-pushLStack\n");//入栈
        printf("[G]-popLStack\n");//出栈
        printf("[H]-Quit\n");
        printf("=================================\n");
        switch (_getch())
        {
        case'A':
        case'a':
            if (isEmptyLStack(s))//判断栈是否为空
                printf("该栈非空");
            else
                printf("该栈为空!");
            printf("\n");
            system("pause");
            system("cls");
            break;
        case'B':
        case'b':
            if (getTopLStack(s, &data))
                printf("栈顶元素=%d", data);//得到栈顶元素
            else printf("栈里无元素");
            printf("\n");
            system("pause");
            system("cls");
            break;
        case'C':
        case'c':
            clearLStack(s);//清除栈
            printf("清除成功");
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
            printf("栈的长度=%d",LStackLength(s));
            printf("\n");
            system("pause");
            system("cls");
            break;
        case'F':
        case'f':
            printf("请输入你要输入几个数据:");
            scanf_s("%d", &i);
            for(i;i>0;i--)
            {
                scanf_s("%d", &data);
                pushLStack(s, &data);//入栈
            }
            printf("入栈完成");
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
                printf("%d ",data);//出栈
            }
            printf("栈里元素已全部取出:");
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