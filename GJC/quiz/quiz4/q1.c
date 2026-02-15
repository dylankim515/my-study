#include <stdio.h>

int main()
{
	int w;

	printf("weight : ");
	scanf("%d",&w);

	if (w>=5)
	{
		if (w>10)
		{
			printf("need exercise\n");
		}
		else
		{
			printf("normal weight\n");
		}
	}
	else
	{
		printf("skinny\n");
	}

	return 0;
}

