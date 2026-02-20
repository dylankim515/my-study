#include <stdio.h>

int main()
{
	int i,j,N;
	int sum=0;
	
	printf("Enter the N : ");
	scanf("%d",&N);
	
	printf("1 ~ %d perfect number : ",N);
	for(i=1;i<=N;i++)
	{
		sum=0;
		for (j=1;j<i;j++)
		{
			if (i%j==0)
			{
				sum+=j;
			}
		}

		if (sum == i)
		{
			printf("%d ",i);
		}
	}

	printf("\n");
	return 0;
}


