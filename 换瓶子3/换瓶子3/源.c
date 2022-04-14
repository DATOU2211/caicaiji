//#include<stdio.h>
////有缺陷，一旦数字过大会导致栈溢出！！！
//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("a= %d b= %d \n", a, b);
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("a= %d b= %d \n", a, b);
//	return 0;
//}

#include<stdio.h>
//用了异或的方法
int main()
{
	int a = 3;
	int b = 5;
	printf("a= %d b= %d \n", a, b);
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("a= %d b= %d \n", a, b);
	return 0;
}