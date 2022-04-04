#include <stdio.h>

int main()
{
  long long n = 1, sum = 0;

  for (int i = 1; i <= 20; i++)
	  {
	     n *= i;
	     sum += n;   
	  }

      printf("%I64d", sum);
 }