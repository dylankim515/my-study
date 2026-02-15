#include <stdio.h>

int main()
{
	int i,N;
	
	printf("Enter a positive integer N : ");
	scanf("%d",&N);

	if (N>=1 && N<=9)
	{
		printf("result :\n");
		for (i=1;i<=9;i=i+2)
		{
			printf("%d * %d = %d\n",N,i,N*i);
		}
	}
	else
	{
		printf("N is not in range(1~9).\n");
	}

	return 0;
}

