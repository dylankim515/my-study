#include <stdio.h>

int main()
{
	int i,j,n;

	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		printf("*");
	}
	printf("\n");

	for (i=1;i<=n-2;i++)
	{
		for(j=1;j<=n-1-i;j++)
		{
			printf(" ");
		}
		printf("*\n");
	}
	for(i=1;i<=n;i++)
		printf("*");
	printf("\n");
	return 0;
}



