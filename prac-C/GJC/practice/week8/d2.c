#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i,j;
	long seed;

	seed = 2023142165;
	srand(seed);

	for (i=0;i<10;i++)
	{
		for (j=0;j<10;j++)
		{
			if (rand()%10 == j || rand()%10 == i)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}

	return 0;
}

