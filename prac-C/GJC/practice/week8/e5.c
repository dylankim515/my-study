#include <stdio.h>

int Fibonacci(int n)
{
	if (n>2)
	{
		return Fibonacci(n-1) + Fibonacci(n-2);

	}
	else if (n==1 || n==2)
	{
		return 1;
	}
}


int main()
{
	int sum,i=1;

	while (1)
	{
		sum = Fibonacci(i);
		if (sum>100)
			break;
		printf("%4d",sum);
		i++;
	}
	printf("\n");

	return 0;
}

