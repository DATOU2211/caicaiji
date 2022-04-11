#include<stdio.h>
#include<math.h>
int main()
{
	double xn = 1, x1 = 0, a;
	printf("请输入一个数\n");
	scanf_s("%lf", &a);
	do
	{
		xn = 1.0 / 2 * (xn + a / xn);
		x1 = 1.0 / 2 * (xn + a / xn);
	} while (fabs(x1 - xn) > 1e-5);
	printf("%lf", xn);
	return 0;
}