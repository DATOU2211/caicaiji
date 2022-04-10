#include<stdio.h>
int main()
{
	int i, x=1;
	for (i = 9; i > 0; i--)
	{
		x = (x + 1) * 2;
	}
	printf("%d",x);
	return 0;
}