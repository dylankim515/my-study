#include <stdio.h>

int main()
{
	int i,j,n;
	printf("Number : ");
	scanf("%d",&n);

	for (i=0;i<n;i++)
	{
		for (j=1;j<n-i;j++)
		{
			printf(" ");
		}
		for (j=0;j<n;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

