#include <stdio.h>

int main()
{
	int A, B;

	printf("Enter the number A B : ");
	scanf("%d %d",&A,&B);
	
	int sum_a=0, sum_b=0;

	
	for(int i=1;i<=A;i++)
	{
		if (A%i==0)
		{
			sum_a+=1;
		}
	}

	for(int i=1;i<=B;i++)
	{
		if (B%i==0)
		{
			sum_b+=1;
		}
	}

	printf("A : %d\nB : %d\n",sum_a,sum_b);

	if (sum_a> sum_b)
	{
		printf("A has more factors.\n");
	}
	else if (sum_a == sum_b)
	{
		printf("Same number of factors.\n");
	}
	else
	{
		printf("B has more factors.\n");
	}

	return 0;
}


