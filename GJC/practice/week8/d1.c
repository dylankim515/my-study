#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 45

int main(void)
{
	int i, number;
	long seed;

	printf("0이상 %5d 이하의 난수 6개 : rand()\n\t", RAND_MAX);
	for (i=0;i<6;i++)
	{
		printf("%5d ",rand());
	}
	printf("\n\n");

	printf("1이상 %5d 이하의 난수 6개 : rand()%%45 + 1\n\t",MAX);
	for (i=0;i<6;i++)
	{
		number = rand()%MAX + 1;
		printf("%5d ",number);
	}
	printf("\n\n");

	seed = time(NULL);
	srand(seed);

	printf("1이상 %5d 이하의 난수 6개 : srand(time(NULL)): rand()%%45 + 1\n\t",MAX);

	for (i=0;i<6;i++)
	{
		number = rand()%45 + 1;
		printf("%5d ", number);
	}
	printf("\n\n");

	return 0;
}


