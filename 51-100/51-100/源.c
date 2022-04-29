#include<stdio.h>
int main()
{
	int i = 0, j = 0;
	for (i = 1; i <= 4; i++)
	{
		for (j = 1; j <= 2 * i - 1; j++)
			printf("*");
		printf("\n");
		printf("\n");
	}
	for (i = 3; i >= 1; i--)
	{
		for (j = 1; j <= 2 * i - 1; j++)
			printf("*");
		printf("\n");
		printf("\n");
	}
	return 0;
}