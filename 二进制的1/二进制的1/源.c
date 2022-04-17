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
    printf("请输入一个大于0的数\n");
    scanf_s("%d", &num);
    ret = count_one_bits(num);
    printf("二进制中1的个数为: %d个\n", ret);
    system("pause");
    return 0;
}
