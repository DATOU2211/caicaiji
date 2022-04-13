#include<stdio.h>
int main()
{
	printf("请输入一串字符：\n");
	int i=0, j=0, k=0, o=0;
	char a;
	while ((a=getchar())!='\n')
	{
		if (a >= 65 && a <= 90 || a <= 122 && a >= 97)
			i++;
		else if (a == 32)
			j++;
		else if (a >= 48 && a <= 57)
			k++;
		else
			o++;

	}
	printf("英文字母，空格，数字，其他字符的个数分别为：%d %d %d %d",i,j,k,o);
	return 0;
}