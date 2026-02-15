#include <stdio.h>

int main()
{
	int n,sum=0;

	while(1)
	{
		printf("type number: ");
		scanf("%d",&n);
		sum+=n;
		printf("current sum: %d\n",sum);

		if (sum > 100)
		{
			printf("sum is bigger than 100\nprogram shut down\n");
			break;
		}
	}

	return 0;
}

