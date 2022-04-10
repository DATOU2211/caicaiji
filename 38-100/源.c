//第三十八题：读入4*3的二维数组，分别求各行、各列及表中所有数之和。

#include <stdio.h>
int main()
{
    //数据定义：  
    int arr[5][4];
    int i, j;
    //初始化： 
    printf("输入12个数组元素:\n");
    for (i = 0; i < 4; i++)
        for (j = 0; j < 3; j++)
            scanf_s("%d", &arr[i][j]);

    for (i = 0; i < 4; i++) //让最后一列都为 0； 
        arr[i][3] = 0;
    for (j = 0; j < 3; j++) //让最后一行都为 0； 
        arr[4][j] = 0;

    //输出初始化后的数组： 
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
            printf("%5d", arr[i][j]);
        printf("\n");
    }

    //计算：     
    for (i = 0; i < 4; i++)
        for (j = 0; j < 3; j++)
        {
            arr[4][3] += arr[i][j];
            arr[i][3] += arr[i][j];
            arr[4][j] += arr[i][j];
        }
    //输出： 
    printf("求和之后的结果:\n");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
            printf("%5d", arr[i][j]);
        printf("\n");
    }
    return 0;
}