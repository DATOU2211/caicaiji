#include<stdio.h>
int main()
{
	float f, c;
	printf("�����뻪���¶ȣ�");
	scanf_s("%f", &f);
	c = (f - 32) * 5 / 9.0;
	printf("��Ӧ���϶�Ϊ��%.2f\n", c);
	return 0;
}