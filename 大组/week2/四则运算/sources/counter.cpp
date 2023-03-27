#include"head.h"


char buffer[256] = { 0 };//结果串
void char_put(char ch)//用来将字符放入放入结果串
{
    static int index = 0;
    buffer[index++] = ch;
}
int priority(char ch)//用来比较优先级
{
    int ret = 0;
    switch (ch)
    {
    case '+':
    case '-':
        ret = 1;
        break;
    case '*':
    case '/':
        ret = 2;
        break;
    default:
        break;
    }
    return ret;
}
int is_number(char ch)//是不是数字
{
    return(ch >= '0' && ch <= '9');
}
int is_operator(char ch)//是不是运算符
{
    return(ch == '+' || ch == '-' || ch == '*' || ch == '/');
}
int is_left(char ch)//是不是左括号
{
    return(ch == '(');
}
int is_right(char ch)//是不是右括号
{
    return(ch == ')');
}






//下方为计算后缀表达式需要的函数
typedef struct node1
{
    int val;//数据
    struct node1* next;//指针
}pnode1;
typedef struct seqstack1
{
    int size;
    pnode1* top;//指向栈顶元素
}phead1;
phead1* initstack1()//创建栈
{
    phead1* istack = (phead1*)malloc(sizeof(phead1));
    if (istack != NULL)
    {
        istack->top = NULL;
        istack->size = 0;
    }
    return istack;
}
int isempty1(phead1* istack)//判断栈为空
{
    if (istack->top == NULL)
    {
        return 1;//栈为空
    }
    return 0;//栈不为空
}
int seqstack_top1(phead1* istack)//获取栈顶元素
{
    if (istack->size != 0)
    {
        return istack->top->val;
    }
    return 99999;
}
int seqstack_pop1(phead1* istack)//弹出栈顶元素
{
    if (isempty1(istack) == 0)//栈不为空
    {
        int account = istack->top->val;
        istack->top = istack->top->next;
        istack->size--;
        return account;
    }
    return 99999;
}
void seqstack_push1(phead1* istack, int x)//压栈
{
    pnode1* temp;
    temp = (pnode1*)malloc(sizeof(pnode1));
    temp->val = x;
    temp->next = istack->top;
    istack->top = temp;
    istack->size++;
    return;
}
int express(int left, int right, char op)
{
    switch (op)
    {
    case '+':
        return left + right;
    case '-':
        return left - right;
    case '*':
        return left * right;
    case '/':
        if (right == 0)
        {
            return 999;
        }
        return left / right;
    default:
        break;
    }
    return -1;
}
int getsize(phead1* stack)
{
    return stack->size;
}
int calculate(char str[])//计算后缀表达式
{
    phead1* istack2 = initstack1();
    int i = 0;
    while (str[i] != '\0')//遍历整个后缀表达式
    {
        char a[6] = { 0 };
        int index = 0;
        if (is_number(str[i]) == 1)
        {
            while (is_number(str[i]) == 1)
            {
                a[index] = str[i];
                index++;
                i++;
            }
            seqstack_push1(istack2, atoi(a));//将该整数入栈
        }
        else if (is_operator(str[i]) == 1)
        {
            int right = seqstack_pop1(istack2);
            int left = seqstack_pop1(istack2);
            int ret = express(left, right, str[i]);
            if (ret == 999)//被除数为0了
            {
                printf("ILLEGAL");
                return 999;
            }
            seqstack_push1(istack2, ret);//运算结果入栈
        }
        else if (str[i] == ' ')
        {

        }
        else
        {
            printf("error\n");
            break;
        }
        i++;
    }
    if (str[i] == '\0' && getsize(istack2))
    {
        return seqstack_top1(istack2);
    }
    return 0;
}
int main()
{
    char str[1024] = { 0 };
    printf("请输入四则运算表达式:\n");
    scanf_s("%s", str,1024);
    int number = transform(str);
    if (number == -1)
    {
        printf("表达式转换错误:\n");
    }
    else if (number == 1)
    {
        printf("转化后的表达式: %s\n", buffer);
    }
    else
    {
        return 0;
    }



    //计算
    int num = calculate(buffer);
    if (num == 999)
    {
        return 0;
    }
    printf("结果为:");
    printf("%d\n", num);
}
