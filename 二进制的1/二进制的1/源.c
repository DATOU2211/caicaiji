#include<stdio.h>
#include<stdlib.h>
int count_one_bits(unsigned int value)
{
    int count = 0;
    while (value)
    {
        if (value & 1 == 1)
        {
            count++;
            value >>= 1;
        }
        else
            value >>= 1;
    }
    return count;
}
int main()
{
    int num;
    int ret;
    printf("������һ������0����\n");
    scanf_s("%d", &num);
    ret = count_one_bits(num);
    printf("��������1�ĸ���Ϊ: %d��\n", ret);
    system("pause");
    return 0;
}
