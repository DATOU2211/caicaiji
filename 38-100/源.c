//����ʮ���⣺����4*3�Ķ�ά���飬�ֱ�����С����м�����������֮�͡�

#include <stdio.h>
int main()
{
    //���ݶ��壺  
    int arr[5][4];
    int i, j;
    //��ʼ���� 
    printf("����12������Ԫ��:\n");
    for (i = 0; i < 4; i++)
        for (j = 0; j < 3; j++)
            scanf_s("%d", &arr[i][j]);

    for (i = 0; i < 4; i++) //�����һ�ж�Ϊ 0�� 
        arr[i][3] = 0;
    for (j = 0; j < 3; j++) //�����һ�ж�Ϊ 0�� 
        arr[4][j] = 0;

    //�����ʼ��������飺 
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
            printf("%5d", arr[i][j]);
        printf("\n");
    }

    //���㣺     
    for (i = 0; i < 4; i++)
        for (j = 0; j < 3; j++)
        {
            arr[4][3] += arr[i][j];
            arr[i][3] += arr[i][j];
            arr[4][j] += arr[i][j];
        }
    //����� 
    printf("���֮��Ľ��:\n");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
            printf("%5d", arr[i][j]);
        printf("\n");
    }
    return 0;
}