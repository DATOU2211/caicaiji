#include<stdio.h>
int main()
{
	int n, m;
	int sum, i, j;
	printf("����һ����Χ[m,n]:\n");
	scanf_s("%d%d", &m, &n);
	printf("\n");
	printf("��Щ�����ǣ�\n");
	for (i = m; i <= n; i++)
	{
		sum = 0;
		for (j = 1; j < i; j++)
		{
			if (i % j == 0)      //����������
				sum += j;
		}
		if (i == sum)
			printf("%d\t", i);
	}

}