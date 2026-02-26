#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int A[5][5];
	int i,j;

	srand(time(NULL));

	for (i=0;i<5;i++)
		for(j=0;j<5;j++)
			A[i][j] = rand()%24;

	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
			printf("%3d",A[i][j]);

		printf("\n");
	}

	return 0;
}

