#include<stdio.h>
int main()
{
	int n, m;
	int sum, i, j;
	printf("输入一个范围[m,n]:\n");
	scanf_s("%d%d", &m, &n);
	printf("\n");
	printf("这些数字是：\n");
	for (i = m; i <= n; i++)
	{
		sum = 0;
		for (j = 1; j < i; j++)
		{
			if (i % j == 0)      //求它的因子
				sum += j;
		}
		if (i == sum)
			printf("%d\t", i);
	}

}