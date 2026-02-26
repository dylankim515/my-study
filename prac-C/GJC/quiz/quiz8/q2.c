#include <stdio.h>

void printPattern(int num)
{
	if (num>0)
	{
		printf("%d ",num);
		printPattern(num-1);
	}

	return;
}

int main()
{
	int rows;
	int i;

	printf("Enter number of rows : ");
	scanf("%d",&rows);

	for (i=1;i<=rows;i++)
	{
		printPattern(i);
		printf("\n");
	}

	return 0;
}

