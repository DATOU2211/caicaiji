//#include<stdio.h>
////��ȱ�ݣ�һ�����ֹ���ᵼ��ջ���������
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
//�������ķ���
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