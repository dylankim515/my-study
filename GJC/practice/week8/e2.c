#include <stdio.h>

void printPattern(int n)
{
	if (n>0)
	{
		printPattern(n-1);
		printf("* ");
	}
}

int main()
{
	int rows;
	printf("Enter number of rows : ");
	scanf("%d",&rows);
	for (int i=rows;i>0;i--)
		
	{
		printPattern(i);
		printf("\n");
	}
	return 0;
}

