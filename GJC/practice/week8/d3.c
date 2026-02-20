#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()

{
	int i,j,number;
	int seed;	
	seed = time(NULL);
	srand(seed);
	
	int count=0;

	for (i=1;i<=10;i++)
	{
		for (j=1;j<=10;j++)
		{
			number = rand()%1000 + 1;
			printf("%4d ",number);

			if (number%2==0)
			{
				count++;
			}

		}
		printf("\n");
	}

	printf("\n#EVEN : %d\n",count);
	return 0;
}

