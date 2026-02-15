#include <stdio.h>

int main()
{
	int score;

	printf("Your Score(1~100): ");
	scanf("%d",&score);

	printf("Your Grade: ");

	if (score>=60)
	{
		if (score>=80)
		{
			printf("A\n");
		}
		else
		{
			printf("B\n");
		}
	}
	else
	{
		printf("C\n");
	}

	return 0;
	}

