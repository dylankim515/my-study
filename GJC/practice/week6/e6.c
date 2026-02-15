#include <stdio.h>

int main()
{
	int n;

	int i,flag;

	printf("Enter integer : ");
	scanf("%d",&n);

	flag=0;
	for (i=2;i<n;i++)
	{
		if (n%i ==0)
		{
			flag=1;
		}
	}

	if (flag == 0)
	{
		printf("%d is a prime number\n",n);
	}
	else
	{
		printf("%d is not a prime number\n",n);
	}

	return 0;
}


	
