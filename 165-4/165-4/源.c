#include<stdio.h>
int main()
{
	printf("������һ������");
		int arr[10] = {1,2,3,4,5,9,15,18,66};
		int i = 0, j = 0,num=0;
		scanf_s("%d",&num);
		for (i = 0; i < 10; i++)
		{
			if (num < arr[i])
			{
				j = num;
				num = arr[i];
				arr[i] = j;
			}
			else if(num > arr[8])
				arr[9] = num;
 		}
		printf("���������飺\n");
		for (i = 0; i < 10; i++)
			printf("%d   ", arr[i]);

	return 0;
}