#include"head.h"
char type;
char datatype[30];

void get_int(void** data)
{
	printf("请输入数字:\n");
	int* p = (int*)malloc(sizeof(int));
	char s[50];
	int flag = 1;
	while (1)
	{
		gets_s(s,50);
		if (*s == '-')
		{
			if (strlen(s) < 6)
			{
				int i;
				for (i = 1; i < 6 && s[i] != '\0'; i++)
					if (s[i] < '0' || s[i]>'9')
					{
						flag = 0;
						break;
					}
				if (flag == 1)
				{
					*p = 0;
					for (i = 1; i < 6 && s[i] != '\0'; i++)
						*p = (*p) * 10 + s[i] - '0';
					(*p) *= -1;
					*data = (void*)p;
					return;
				}
			}
		}
		else if (strlen(s) < 5)
		{
			int i;
			for (i = 0; i < 5 && s[i] != '\0'; i++)
				if (s[i] < '0' || s[i]>'9')
				{
					flag = 0;
					break;
				}
			if (flag == 1)
			{
				*p = 0;
				for (i = 0; i < 5 && s[i] != '\0'; i++)
					*p = (*p) * 10 + s[i] - '0';
				*data = (void*)p;
				return;
			}
		}
		printf("ERROR;\n");
	}
}

void get_float(void** data)
{
	printf("请输入数字:\n");
	float* p = (float*)malloc(sizeof(float));
	*p = 0.0;
	scanf_s("%f", p);
	*data = (void*)p;
	while (getchar() != '\n');
}

void get_char(void** data)
{
	printf("请输入字符:\n");
	char* p = (char*)malloc(sizeof(char));
	*p = '0';
	scanf_s("%c", p);
	while (getchar() != '\n');
	*data = (void*)(p);
}
void get_type()
{
	while (1)
	{
		type = '\0';
		printf("请选择你想要输入的数据类型:\n");
		printf("[i] int\n");
		printf("[f] float\n");
		printf("[c] char\n");
		scanf_s("%c", &type);
		while (getchar() != '\n');
		if (type == 'i' || type == 'I' || type == 'f'|| type == 'F' || type == 'c' || type == 'C')
			break;
		else
		{
			system("cls");
			printf("ERROR\n");
		}
	}
}
void get_data(void** data)
{
	if (type == 'i'|| type == 'I')
		get_int(data);
	else if (type == 'f'|| type == 'F')
		get_float(data);
	else if (type == 'c'|| type == 'C')
		get_char(data);
}
int main()
{
	get_type();
	show();
	return 0;
}

void show()
{
	LQueue* Q = (LQueue*)malloc(sizeof(LQueue));
	void* addData;
	InitLQueue(Q);
	for(;;)
	{
			printf("请选择你要进行的操作:\n");
			printf("================================================================\n");
			printf("[A]-Check whether the queue is empty or not;\n");
			printf("[B]-Get the number of the queue head;\n");
			printf("[C]-Add a number into the queue;\n");
			printf("[D]-Get a number out of the queue;\n");
			printf("[E]-Read all the node of the queue;\n");
			printf("[F]-Get the length of the queue;\n");
			printf("[G]-Quit\n");
			printf("================================================================\n");
			
		switch (_getch())
		{
		case'a':
		case'A':
			if (IsEmptyLQueue(Q))
				printf("该链队非空!\n");
			else
				printf("该链队为空!\n");
			system("pause");
			system("cls");
			break;
		case'b':
		case'B':
			if (GetHeadLQueue(Q,type))
				system("pause");
			else
			{
				printf("\nERROR\n");
				printf("该链队为空\n");
				system("pause");
			}
			system("cls");
			break;
		case'c':
		case'C':
			if (type == 'i'|| type == 'I')
				get_int(&addData);
			else if (type == 'f'|| type == 'F')
				get_float(&addData);
			else
				get_char(&addData);
			if (EnLQueue(Q, addData) == TURE)
				printf("添加数据成功\n");
			else
			{
				printf("ERROR\n");
				exit(-1);
			}
			system("pause");
			system("cls");
			break;
		case'd':
		case'D':
			if (DeLQueue(Q))
				printf("出队完成\n");
			else
				printf("队列为空\n");
			system("pause");
			system("cls");
			break;
		case'e':
		case'E':
			TraverseLQueue(Q,type);
			system("pause");
			system("cls");
			break;
		case'f':
		case'F':
			if (LengthLQueue(Q))
				printf("长度=%d.\n", LengthLQueue(Q));
			else
			{
				printf("ERROR\n");
			}
			system("pause");
			system("cls");
			break;
		case'g':
		case'G':
			return;
		}
	}

}