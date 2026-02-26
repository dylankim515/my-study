#include <stdio.h>

void printInteger(int num)
{
	if (num>0)
	{
		printInteger(num/10);
		printf("%d\n",num%10);
	}
	return;
}

int main()
{
	int num;
	printf("integer = ");
	scanf("%d",&num);
	printInteger(num);

	return 0;
}

