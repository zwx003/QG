#include"head.h"
//��׺ת��׺
int transform(char str[])//ʹ��const��������,������������׺ת���ɺ�׺
{
    phead* istack = initstack();//����һ��ջ
    int i = 0;
    while (str[i] != '\0')//���������ַ���
    {
        //�ж��ǲ�������
        if (is_number(str[i]) == 1)
        {
            if (is_number(str[i + 1]) == 1)
            {
                char_put(str[i]);//����ֱ�ӷ�������(�����)
            }
            else//���治������,���һ���ո���Ϊ�ָ���
            {
                char_put(str[i]);
                char_put(' ');
            }
        }
        else if (is_operator((str[i])) == 1)
        {
            if (str[i + 1] == '0' && str[i] == '/')
            {
                printf("ILLEGAL");
                return 0;
            }
            if (isempty(istack) == 0)//ջ��Ϊ��
            {
                while ((isempty(istack) == 0) && (priority(str[i]) <= (priority(seqstack_top(istack)->data))))//ջ��Ϊ�ղ�������������ȼ�������ջ��
                {
                    char_put(seqstack_pop(istack)->data);//����������ջ���͵���ֱ������������
                    char_put(' ');
                }
            }
            seqstack_push(istack, str[i]);//�ٽ����������ջ
        }
        else if (is_left(str[i]))//������ֱ����ջ
        {
            seqstack_push(istack, str[i]);
        }
        else if (is_right(str[i]))//�ж��ǲ���������
        {
            while (is_left(seqstack_top(istack)->data) != 1)//ջ�����������ŵ����
            {
                char_put(seqstack_pop(istack)->data);//�������洢�������
                if (isempty(istack) == 1)//ջΪ����δ�ҵ�������
                {
                    printf("û��ƥ�䵽������\n");
                    return -1;
                }
            }
            //��ʱƥ�䵽��������
            seqstack_pop(istack);
            //����������,���ﲢ���ñ���,���������������
        }
        else
        {
            printf("�в���ʶ����ַ�\n");
            return -1;
        }
        i++;
    }
    //���������Ѿ�
    if (str[i] == '\0')//�ɹ��������ַ���ĩβ
    {
        while (isempty(istack) == 0)//����ȫ��ջ��Ԫ��
        {
            if (seqstack_top(istack)->data == '(')//ջ��Ԫ��Ϊ������
            {
                printf("��û��ƥ�䵽��'(',ȱ��')'\n");
                return -1;
            }
            char_put(seqstack_pop(istack)->data);//��ջ��Ԫ�ط������մ�
        }
    }
    else
    {
        printf("����û����ɣ�\n");
    }
    return 1;
}