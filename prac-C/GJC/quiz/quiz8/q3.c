#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int seed;

	seed = time(NULL);
	srand(seed);
	
	int me, com;

	printf("Rock Paper Scissors game\n");
	printf("0: Scissors, 1: Rock, 2: Paper\nSelect : ");
	scanf("%d",&me);
	com = rand()%3;
	
	printf("User: ");
	switch (me)
	{
		case 0:
			printf("Scissors\n");
			break;
		case 1:
			printf("Rock\n");
			break;
		case 2:
			printf("Paper\n");
			break;
	}
	printf("Computer: ");
	switch (com)
	{
		case 0:
			printf("Scissors\n");
			break;
		case 1:
			printf("Rock\n");
			break;
		case 2:
			printf("Paper\n");
			break;
	}
	
	printf("Result : ");
	if (me==com)
	{
		printf("Draw!");
	}
	else if (me == 0)
	{
		if (com == 1)
			printf("You lose!");
		else
			printf("You win!");
	}
	else if (me == 1)
	{
		if (com==0)
			printf("You win!");
		else
			printf("You lose!");
	}
	else
	{
		if (com==0)
			printf("You lose!");
		else
			printf("You win!");
	}

	printf("\n");
}

