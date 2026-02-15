#include <stdio.h>

int main()
{
	int n,i,j,k;

	printf("Enter int : ");
	scanf("%d",&n);

	for (i=1;i<=n;i++)
	{
		for (k=0;k<=n-i-1;k++)
		{
			printf(" ");
		}
		for (j=0;j<i;j++)
		{
			printf("%d",i);
		}
		printf("\n");
	}
	return 0;
}


