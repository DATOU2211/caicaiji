#include<stdio.h>
int main()
{
	float f, c;
	printf("请输入华氏温度：");
	scanf_s("%f", &f);
	c = (f - 32) * 5 / 9.0;
	printf("对应摄氏度为：%.2f\n", c);
	return 0;
}